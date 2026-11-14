# Rapport de rétro-ingénierie — GRAPH85emulator.exe

## 1. Résumé

| Élément | Valeur |
|---|---|
| Fichier | `GRAPH85emulator.exe` |
| Taille | 2 654 208 octets |
| SHA-256 | `90d4ef4bace461332957ce94b03150bbadeeedcfb6cacd340cf87e94540d6cd3` |
| Format | PE32, i386, GUI (sous-système Windows) |
| Compilateur | Microsoft Visual C++ 6.0, MFC 6.0 lié statiquement |
| Horodatage | jeudi 22 septembre 2005, 02:33:03 |
| Point d'entrée | `0x005558bc` (`WinMainCRTStartup`) |
| Chaîne de version | `GRAPH85 emulator for Windows`, `Version 01.02.0000.0100` |
| Copyright | `Copyright (C) 2005 CASIO COMPUTER CO., LTD.` |
| Modèle | `CASIO GY363` (clé de registre `CASIO\GY363`) |
| Outil d'analyse | Ghidra 11.3.2 (analyse headless, 117 s) |

L'analyse a inventorié **5 188 fonctions**, dont **4 467 décompilées** en
pseudocode C (720 thunks/imports ignorés, 1 échec), et a permis de
reconstituer l'architecture MFC de l'application, le rendu de l'écran LCD,
la gestion du clavier, les timers et le stockage de la mémoire de la
calculatrice.

## 2. Structure du fichier

### 2.1 Sections

| Nom | VA | Taille | Contenu |
|---|---|---|---|
| `.text` | `0x00401000` | `0x0017ae16` | code x86 |
| `.rdata` | `0x0057c000` | `0x00027740` | RTTI, vtables, chaînes, imports |
| `.data` | `0x005a4000` | `0x00029000` | données initialisées |
| `.rsrc` | `0x005dc000` | `0x000bab98` | ressources (46 entrées) |

La taille de `.text` (1,55 Mo) et l'absence de section d'import retardé
confirment une liaison statique de la bibliothèque MFC : le code applicatif
et une grande partie du runtime C++ de Microsoft sont dans le même binaire.

### 2.2 Imports

403 fonctions importées depuis 8 DLL :

- `KERNEL32.dll` — mémoire, threads, fichiers, registre indirect ;
- `USER32.dll` — fenêtres, messages, timers, hooks clavier ;
- `GDI32.dll` — DC, bitmaps, `BitBlt` ;
- `comdlg32.dll` — boîtes de dialogue fichier ;
- `WINSPOOL.DRV` — impression ;
- `ADVAPI32.dll` — registre (`RegQueryValueExA`, etc.) ;
- `SHELL32.dll` — shell, association de fichiers ;
- `COMCTL32.dll` — contrôles communs.

Aucune dépendance à `MFC42.DLL` : MFC est compilé dans l'exécutable, ce qui
explique l'absence de symboles exportés et la présence de milliers de
fonctions internes.

### 2.3 Ressources

46 ressources extraites dans `extracted/resources/` :

| Type | Nombre | Détail |
|---|---|---|
| BITMAP | 6 | clavier `BITMAP/130` (353×705, 24 bpp), LCD, boutons |
| ICON | 4 | 32×32 et 16×16, 4 bpp |
| GROUP_ICON | 2 | icônes de l'application |
| CURSOR | 4 | 2 paires pointeur/main |
| MENU | 3 | menu principal, menu contextuel, menu LCD |
| DIALOG | 5 | `About`, `NewGraph DISP`, dialogues japonais |
| STRING | 17 | tables MFC (erreurs, impressions, validation) |
| VERSION | 1 | `VS_VERSION_INFO` |
| ACCEL | 2 | tables d'accélérateurs |

La ressource `BITMAP/130` est l'image du clavier affichée dans la fenêtre ;
le LCD est dessiné par `BitBlt` dans une zone de `0x15e × 0x304` pixels
(350 × 772), agrandie par le facteur `DISPZOOM`.

## 3. Architecture MFC

Trois classes seulement sont enregistrées par `CGraph85App::InitInstance` ;
elles suffisent à structurer l'application document/vue :

| Classe | CRuntimeClass | Taille | Factory | Constructeur | Vftable |
|---|---|---|---|---|---|
| `CMainFrame` | `0x0057c880` | `0x138` | `0x004063c0` | `0x00406450` | `0x0057c918` |
| `CNewGraphDoc` | `0x0057cd08` | `0x50` | `0x00406fe0` | `0x00407060` | `0x0057cd40` |
| `CNewGraphView` | `0x0057cdf0` | `0x90` | `0x0040b160` | `0x0040b1e0` | `0x0057d2d8` |

La classe application (`CWinApp` dérivée) n'est pas exposée par un
`CRuntimeClass` nommé dans les chaînes ; son `InitInstance` est à
`0x00406740`. Le démarrage standard MFC est visible :

1. `CreateMutexA` sur un nom global — instance unique ; si le mutex existe
   déjà (`ERROR_ALREADY_EXISTS = 0xB7`), `FindWindowA` retrouve la fenêtre
   existante et la met au premier plan ;
2. `SetRegistryKey("CASIO")`, `EnableShellOpen(4)` ;
3. `new CSingleDocTemplate(0x80, CNewGraphDoc, CMainFrame, CNewGraphView)`
   puis `AddDocTemplate` ;
4. `ParseCommandLine` + `ProcessShellCommand` ;
5. `ShowWindow(SW_SHOW)`, `UpdateWindow`.

### 3.1 Fenêtre principale

`CMainFrame::PreCreateWindow` (`0x00406570`) force une taille de
`0x340 × 0x168` (832 × 360), puis relit `POS_TOP` et `POS_LEFT` dans
`HKCU\Software\CASIO\GY363` pour restaurer la position. La largeur finale
est recalculée à partir de `GetSystemMetrics(SM_CYCAPTION) + 0x2dc`.

La vue `CNewGraphView` :

- charge les réglages `LCDDISP`, `DISPZOOM` (défaut 2), `CAPFOLDER`,
  `CAPFILE`, `CAPSLOCK`, `KEYTABLE` ;
- charge la table clavier depuis le fichier indiqué par `KEYTABLE`
  (`Gy363.keys`) ou utilise la table interne ;
- initialise le moteur : `FUN_0042fb10` alloue `0x20000` octets de mémoire
  flash et les remplit de `0x5A5A5A5A` (état vierge), `FUN_004aac20`
  remet à zéro les compteurs, `FUN_004aefb0` lit l'état « NormalMode » ;
- crée le thread d'émulation `FUN_004a94a0` et le timer `0x113`
  (période 500 ms) ;
- charge le bitmap du clavier (`LoadBitmapA(hInstance, 0x82)`), le copie
  dans un DC compatible et le blitte dans la fenêtre.

### 3.2 Thread et boucle d'émulation

`FUN_004a94a0` installe un `setjmp`/`longjmp` de récupération, puis
`FUN_004a94c0` exécute :

```
FUN_00407100()      ; initialisation périphériques
FUN_004aac30()      ; état CPU / mémoire
FUN_004aaaa0()      ; chargement de l'état sauvegardé
setjmp(...)         ; point de reprise
FUN_004a95a0(0)
FUN_004a9520()
boucle: FUN_004a9d10()
```

Le thread est créé avec la priorité `THREAD_PRIORITY_LOWEST` (`-2`) pour ne
pas affamer l'interface. Le timer `0x113` (500 ms) déclenche le rafraîchissement périodique de
l'affichage.

### 3.3 Rendu

Le LCD est une bitmap GDI de `0x15e` lignes sur `0x304` colonnes. À chaque
tick, la vue :

1. récupère l'état de l'écran dans la mémoire de la calculatrice ;
2. compose l'image (pixels noirs/blancs) dans un DC mémoire ;
3. `BitBlt` la zone vers la fenêtre, avec un facteur d'échelle
   `DISPZOOM` (menu `Popup Display` → `Zoom*2` … `Zoom*6`) ;
4. met à jour les indicateurs (`EXT`, `CAP`, `NUM`, `SCRL`) affichés en
   bas de l'écran (chaînes de la table `STRING/3697`).

### 3.4 Clavier

`WM_CHAR` est traité par `FUN_0040bfb0`. La fonction construit sur la pile
une table de 261 entrées (triplets `code Windows`, `code interne`,
`drapeau`) qui couvre :

- les lettres `A`–`Z` (mode ALPHA, avec `Maj` pour les majuscules) ;
- les chiffres, opérateurs et ponctuation ;
- les touches de fonction `F1`–`F6` ;
- les flèches et les touches d'édition ;
- les touches spécifiques de la calculatrice (`EXE`, `AC/ON`, `DEL`,
  `MENU`, `SHIFT`, `ALPHA`, `x²`, `^`, `log`, `ln`, …).

Après traduction, `FUN_0040e4a0` injecte le code dans la file d'événements
de l'émulateur. Un fichier `KEYTABLE` personnalisé peut remplacer cette
table ; c'est le mécanisme utilisé par les utilitaires de remapping.

Les clics sur la bitmap du clavier sont convertis en coordonnées de touche
par la vue, puis injectés par le même point d'entrée.

## 4. Données et persistance

L'application utilise deux mécanismes :

- **Registre** : `HKCU\Software\CASIO\GY363` (voir README) ;
- **Fichiers** : `gy363.fls` (mémoire flash de la calculatrice) et
  `Gy363.keys` (table clavier), dans le répertoire courant ou le dossier
  CASIO selon l'installation.

La mémoire flash est allouée par `malloc(0x20000)` et initialisée à
`0x5A5A5A5A`, motif typique d'une flash vierge. Le moteur lit et écrit
ensuite cette zone ; `FUN_004aefb0` y recherche l'état « NormalMode ».

## 5. Démarche d'analyse

1. **Identification** : `file`, `objdump -f/-h/-p`, extraction des
   ressources avec `tools/extract_resources.py` (parseur PE maison).
2. **Décompilation** : Ghidra 11.3.2 headless, projet
   Ghidra temporaire (non inclus), script
   `tools/ghidra_scripts/DumpFunctions.java` qui exporte chaque fonction
   en `.c` et produit `INDEX.tsv`, `functions.tsv`, `symbols.tsv`.
3. **Fonctions clés** : script `DecompAt.java` pour décompiler à la demande
   les adresses `0x406740`, `0x40b1e0`, `0x40bfb0`, `0x40b5d0`, etc.
4. **Validation dynamique** : exécution sous Wine 11.21, capture d'écran
   après initialisation, vérification de l'affichage
   `MAIN MEMORIES CLEARED! Press MENU KEY`.

Reproduire l'export :

```sh
export JAVA_HOME=/chemin/vers/jdk-21
cd /chemin/vers/ghidra_11.3.2_PUBLIC
support/analyzeHeadless /tmp/ghidraproj Graph85 \
  -import /home/lenny/calculator/GRAPH85emulator.exe \
  -scriptPath /home/lenny/calculator/tools/ghidra_scripts \
  -postScript DumpFunctions.java decomp /home/lenny/calculator/decompiled
```

## 6. Fonctions clés

| Adresse | Rôle |
|---|---|
| `0x00406740` | `CGraph85App::InitInstance` |
| `0x004063c0` | factory `CMainFrame` |
| `0x00406450` | constructeur `CMainFrame` |
| `0x00406570` | `CMainFrame::PreCreateWindow` |
| `0x00406fe0` | factory `CNewGraphDoc` |
| `0x00407060` | constructeur `CNewGraphDoc` |
| `0x0040b160` | factory `CNewGraphView` |
| `0x0040b1e0` | constructeur `CNewGraphView` |
| `0x0040b5d0` | initialisation de la vue (timer, thread, bitmap) |
| `0x0040bfb0` | `WM_CHAR` — traduction clavier |
| `0x0040e4a0` | injection d'une touche dans l'émulateur |
| `0x0040fd00` | `WM_SIZE` |
| `0x0040fd20` | `WM_MOVE` |
| `0x0042fb10` | allocation/initialisation de la flash |
| `0x004a94a0` | thread d'émulation |
| `0x004a94c0` | corps de la boucle d'émulation |
| `0x004aac20` | remise à zéro des compteurs |
| `0x004aefb0` | lecture de l'état « NormalMode » |
| `0x0042a1f0` | lecture d'un flux de mémoire flash |
| `0x005558bc` | point d'entrée CRT |

Les fichiers correspondants se trouvent dans `decompiled/key/`,
`decompiled/key2/` et `decompiled/functions/`.

## 7. Distribution Linux

Le binaire original n'est pas modifié. `src/launcher.c` :

1. localise `GRAPH85emulator.exe` (à côté du lanceur, `../share/graph85`,
   `../lib/graph85`, ou via `GRAPH85_EXE`) ;
2. localise `wine` dans `PATH` (ou via `GRAPH85_WINE`) ;
3. choisit un préfixe privé (`GRAPH85_PREFIX`, sinon
   `$XDG_DATA_HOME/graph85/wineprefix`) et le crée au besoin ;
4. exporte `WINEPREFIX`, `WINEDEBUG=-all`,
   `WINEDLLOVERRIDES=mscoree,mshtml=` ;
5. `execv(wine, { "wine", exe, args... })`.

Le paquet `make dist` produit une archive autoportante ; `make install`
intègre l'émulateur au menu applicatif avec ses icônes.

## 8. Limites

- **Pas de reconstruction compilable** : le pseudocode Ghidra n'est pas du
  C valide (types inconnus, appels MFC non résolus, assembleur inline,
  exceptions MSVC). Recompiler nécessiterait de reconstruire MFC 6.0 et
  l'ensemble des 4 467 fonctions, soit un travail de plusieurs années et
  une réécriture, pas une décompilation.
- **Symboles absents** : le binaire est strippé ; les noms de fonctions
  internes sont des noms générés (`FUN_xxxxxxxx`). Les correspondances MFC
  ont été identifiées par signature (par exemple `0x574f20` =
  `SetRegistryKey`).
- **Une fonction non décompilée** : le script a signalé 1 échec sur
  4 468 tentatives ; elle reste analysable manuellement dans Ghidra.
- **Dépendance Wine pour l'émulateur d'origine** : l'application est un
  binaire Windows 32 bits ; elle nécessite une installation Wine capable
  d'exécuter du 32 bits (Wow64 ou paquet `wine32`). Le lanceur est natif,
  mais tout le code de l'émulateur s'exécute sous Wine.
- **Prototype natif partiel** : `native/` fournit un vrai binaire Linux
  autonome (SDL2) qui réimplémente l'écran de démarrage, le menu, le mode
  RUN et le tracé GRAPH. Il ne contient aucun code CASIO, n'émule pas le
  SH-3 et n'implémente ni STAT, TABLE, DYNA, CONICS, EQUA, MAT, LIST, PRGM,
  LINK, MEMORY, SYSTEM ni eActivity. Le moteur de calcul est un évaluateur
  `double`, pas le moteur BCD 15 chiffres d'origine. Un port complet
  supposerait de réécrire le microprogramme et tous les périphériques.
- **Propriété intellectuelle** : le binaire, les ressources et le
  micrologiciel restent la propriété de CASIO. La distribution est destinée
  à l'usage personnel et à l'étude ; elle ne peut pas être redistribuée
  légalement comme logiciel libre.

## 9. Conclusion

L'émulateur est une application MFC 6 classique, dont la logique
spécifique (chargement de la flash, boucle d'émulation, rendu LCD,
traduction clavier) est compacte et bien isolée. La distribution Linux
fournie restitue fidèlement le comportement d'origine via Wine (ce n'est
donc pas un portage natif), avec une
intégration native (lanceur, menu, icônes, préfixe privé) et une
documentation complète permettant de poursuivre l'analyse ou de construire
un émulateur alternatif à partir des fonctions identifiées.
