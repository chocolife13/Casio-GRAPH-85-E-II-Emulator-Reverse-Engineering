# Artefacts d'analyse

| Fichier | Description |
|---|---|
| `pe-headers.txt` | sortie `objdump -p` complète (en-têtes PE, imports, ressources) |
| `sections.txt` | sections, adresses, tailles (`objdump -h/-f`) |
| `imports.txt` | table d'imports (8 DLL, 403 fonctions) |
| `disassembly.txt` | désassemblage linéaire complet (`objdump -d`, 26 Mo) |
| `strings-interesting.txt` | chaînes ASCII/UTF-16 relatives à CASIO, au modèle et au registre |
| `resource-strings.txt` | décodage des 17 tables `STRING` |
| `resource-menus.txt` | libellés extraits des 3 menus |
| `ghidra-analysis.log` | journal de l'analyse Ghidra |
| `classes.md` | classes MFC, vtables et fonctions clés |

Les ressources binaires sont dans `../extracted/resources/` avec
`MANIFEST.tsv`. Les scripts d'extraction sont dans `../tools/`.
