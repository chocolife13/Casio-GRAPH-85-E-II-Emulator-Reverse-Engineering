# Décompilation Ghidra

Ce répertoire contient l'export brut de **Ghidra 11.3.2** pour
`GRAPH85emulator.exe` (analyse complète, 117 s).

| Élément | Contenu |
|---|---|
| `functions/` | 4 467 fichiers `.c`, un par fonction décompilée |
| `INDEX.tsv` | `nom`, `adresse`, `taille`, `fichier` |
| `functions.tsv` | inventaire complet des 5 188 fonctions (params, thunk, externe) |
| `symbols.tsv` | 72 381 symboles/étiquettes et imports |
| `key/`, `key2/` | sélection de fonctions clés (démarrage, vue, clavier, moteur) |

Les noms de fichiers suivent le modèle
`<adresse>_<espace>__<nom>.c`, par exemple
`00406740_Global__FUN_00406740.c`.

## Avertissements

- Ce pseudocode **n'est pas du C compilable** : types `undefined4`,
  `undefined *`, appels MFC non résolus (`FUN_0057xxxx`), assembleur inline,
  gestion d'exceptions MSVC (`ExceptionList`, `LAB_...`).
- Les fonctions de bibliothèque MFC sont nommées `FUN_<adresse>` : le
  binaire est strippé. Les correspondances connues sont documentées dans
  `REPORT.md`.
- 720 entrées de `functions.tsv` sont des thunks ou des imports et n'ont
  pas été décompilées ; 1 fonction a échoué.
- Les adresses sont des adresses virtuelles préférées (`ImageBase`
  `0x00400000`), telles qu'affichées par Ghidra.

## Recherche rapide

```sh
# fonction par adresse
grep -i "0040bfb0" INDEX.tsv

# toutes les fonctions dont le nom contient "Graph"
grep -i graph functions.tsv

# imports d'une DLL
grep -i "USER32" symbols.tsv
```
