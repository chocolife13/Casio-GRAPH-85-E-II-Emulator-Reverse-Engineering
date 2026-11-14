# Classes, vtables et identité

## Classes MFC enregistrées

| Classe | `CRuntimeClass` | Taille | Factory | Constructeur | Vftable |
|---|---|---|---|---|---|
| `CMainFrame` | `0x0057c880` | `0x138` | `0x004063c0` | `0x00406450` | `0x0057c918` |
| `CNewGraphDoc` | `0x0057cd08` | `0x50` | `0x00406fe0` | `0x00407060` | `0x0057cd40` |
| `CNewGraphView` | `0x0057cdf0` | `0x90` | `0x0040b160` | `0x0040b1e0` | `0x0057d2d8` |

Le nom de la classe application n'apparaît pas dans les chaînes ; la
classe dérive de `CWinApp` (RTTI `CWinApp` à `0x005cb9a8`) et son
`InitInstance` est à `0x00406740`.

## Fabriques et cycle de vie

```
WinMainCRTStartup 0x005558bc
  └─ MFC AfxWinMain (interne)
      └─ InitInstance 0x00406740
          ├─ CreateMutexA(nom global)         instance unique
          ├─ SetRegistryKey("CASIO")
          ├─ EnableShellOpen(4)
          ├─ new CSingleDocTemplate(0x80,
          │      CNewGraphDoc, CMainFrame, CNewGraphView)
          ├─ AddDocTemplate
          └─ ParseCommandLine / ProcessShellCommand
              ├─ CMainFrame factory 0x004063c0 → ctor 0x00406450
              └─ CNewGraphView factory 0x0040b160 → ctor 0x0040b1e0
```

## Chaînes d'identité

| Chaîne | Adresse |
|---|---|
| `CASIO` | `0x005a8d60` |
| `CASIO GY363` | `0x005a8d50` |
| `CMainFrame` | `0x005a8d38` |
| `CNewGraphDoc` | `0x005a8ddc` |
| `CNewGraphView` | `0x005a920c` |
| `GRAPH 85 emulator` | `0x005a9224` |
| `LCDDISP` | `0x005a92bc` |
| `DISPZOOM` | `0x005a92b0` |
| `CAPFOLDER` | `0x005a92a4` |
| `CAPFILE` | `0x005a929c` |
| `CAPSLOCK` | `0x005a9290` |
| `KEYTABLE` | `0x005a9284` |
| `POS_TOP` | `0x005a8d58` |
| `POS_LEFT` | `0x005a8d44` |
| `gy363.fls` | `0x005a9200` |
| `Gy363.keys` | `0x005a8dec` |

## Identité du fichier

```
InternalName     GRAPH85emulator
OriginalFilename GRAPH85emulator.EXE
FileDescription  GRAPH85 emulator
ProductName      GRAPH85emulator Application
FileVersion      1, 0, 0, 1
ProductVersion   1, 0, 0, 1
LegalCopyright   Copyright (C) 2005 CASIO COMPUTER CO., LTD.
```

La boîte de dialogue `About` (ressource `DIALOG/100`) affiche en revanche
« Version 01.02.0000.0100 », d'où les deux numéros de version coexistant
dans les documents CASIO.
