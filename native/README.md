# GRAPH 85 — aperçu natif Linux (SDL2)

Ce dossier contient un **prototype natif Linux** de l'interface de la
CASIO GRAPH 85. C'est un programme C autonome, lié à SDL2 et libpng : il
s'exécute sans Wine et **ne contient ni n'exécute aucun code de
`GRAPH85emulator.exe`**.

## Ce que c'est — et ce que ce n'est pas

C'est une **réimplémentation propre** (« clean-room ») d'une partie de
l'expérience utilisateur :

- fenêtre SDL2 avec l'artwork du clavier extrait de l'application d'origine ;
- LCD 128×64 émulé pixel par pixel (police 6×8, 18 colonnes) ;
- écran de démarrage « MAIN MEMORIES CLEARED! » ;
- menu général à 14 entrées (navigation flèches / F1–F6 / EXE) ;
- mode **RUN** : saisie et évaluation d'expressions (+, −, ×, ÷, puissances,
  parenthèses, `SIN/COS/TAN`, `LOG/LN`, `ANS`, `π`, `e`, variable `X`) ;
- mode **GRAPH** : saisie de `Y1` et tracé de la courbe sur −360…360°
  (fenêtre Y de −1,6 à 1,6), axes inclus.

Ce n'est **pas** l'OS CASIO :

- aucun micrologiciel SuperH SH-3 n'est émulé ;
- les modes STAT, TABLE, DYNA, CONICS, EQUA, MAT, LIST, PRGM, LINK, MEMORY,
  SYSTEM et eActivity ne sont pas implémentés (le menu les affiche comme
  « NOT AVAILABLE ») ;
- le moteur de calcul est un évaluateur d'expressions flottantes, pas le
  moteur BCD/15 chiffres de Casio ;
- aucun fichier `.g1m`, programme Basic, liste ou matrice n'est lu.

C'est un point de départ fonctionnel pour un port natif, pas un remplacement
de l'émulateur d'origine.

## Compilation

Dépendances : `cc`, `make`, SDL2 et libpng (en-têtes + bibliothèques).

```sh
sudo apt install build-essential libsdl2-dev libpng-dev   # Debian/Ubuntu
make native          # produit build/graph85-native
make run-native      # compile et lance avec assets/keypad.png
```

Compilation directe :

```sh
cc -O2 -Wall -Wextra native/src/*.c \
   $(pkg-config --cflags --libs sdl2 libpng) -lm -o build/graph85-native
```

## Utilisation

```
graph85-native [--assets DIR] [--scale PERCENT] [--press TOUCHE]... [--shot FICHIER]

  --assets DIR      dossier contenant keypad.png
  --scale PERCENT   échelle de la fenêtre (défaut 130)
  --press TOUCHE    applique une touche avant la première image (répétable)
  --shot FICHIER    rend une image BMP et quitte (mode test sans écran)
```

Exemples :

```sh
./build/graph85-native --assets assets
./build/graph85-native --assets assets --press menu --press exe \
    --press 2 --press plus --press 2 --press exe --shot /tmp/run.bmp
```

### Souris

Les touches se cliquent directement sur le clavier dessiné. Les zones
sensibles sont mesurées sur `assets/keypad.png` (353×705).

### Clavier physique

| Touche PC | Touche calculatrice |
|---|---|
| `0`–`9`, `.`, `+`, `-`, `*`, `/` | mêmes touches |
| `Entrée` | EXE |
| `Retour arrière` | DEL |
| `Suppr` | AC/ON |
| `Échap` | EXIT |
| flèches | REPLAY (navigation menus) |
| `F1`–`F6` | touches fonction |
| `m`, `x`, `s`, `c`, `t`, `l`, `n` | MENU, X, SIN, COS, TAN, LOG, LN |
| `Ctrl+Q` | quitter |

## Fichiers

| Fichier | Rôle |
|---|---|
| `src/main.c` | fenêtre SDL2, boucle d'événements, zones sensibles, rendu |
| `src/calc.c`, `calc.h` | machine à états, menus, évaluateur d'expressions |
| `src/lcd.c`, `lcd.h` | framebuffer 128×64, lignes, rectangles, texte |
| `src/font6x8.h` | police bitmap 6×8 générée (95 glyphes ASCII) |
| `src/keys.h` | énumération des touches logiques |
| `src/png_load.c`, `png_load.h` | chargement PNG via libpng |
| `../tools/make_font.py` | régénère `font6x8.h` depuis une police console PSF |

## Limites connues

- Tracé de courbe échantillonné sur 128 colonnes, sans mode « points »,
  zoom, trace ni table de valeurs.
- Pas de formatage BCD ni de précision 15 chiffres : les résultats sont des
  `double` affichés avec `%g`.
- Pas de persistance (mémoire, historiques, réglages) entre deux lancements.
- Interface en anglais, comme les captures d'origine.
