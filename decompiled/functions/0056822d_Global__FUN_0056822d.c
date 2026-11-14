// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056822d
// entry: 0056822d  size: 209


void FUN_0056822d(LPCSTR param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *lpString;
  LPCSTR lpString2;
  
  iVar1 = lstrlenA(param_1);
  iVar2 = FUN_00577214(param_1,0,0);
  iVar2 = iVar2 + -1;
  lpString2 = param_1 + (iVar1 - iVar2);
  if (param_2 < iVar1) {
    if (param_2 < iVar2) {
      if (param_3 == 0) {
        lpString2 = &DAT_005d4ee0;
      }
    }
    else {
      lpString = param_1 + 2;
      if ((*param_1 == '\\') && (param_1[1] == '\\')) {
        for (; *lpString != '\\'; lpString = (char *)FUN_005560f4(lpString)) {
        }
      }
      if (3 < iVar1 - iVar2) {
        do {
          lpString = (char *)FUN_005560f4(lpString);
        } while (*lpString != '\\');
      }
      iVar1 = (int)lpString - (int)param_1;
      if (iVar1 + 5 + iVar2 <= param_2) {
        while (iVar2 = lstrlenA(lpString), param_2 < iVar2 + 4 + iVar1) {
          do {
            lpString = (char *)FUN_005560f4(lpString);
          } while (*lpString != '\\');
        }
        param_1[iVar1] = '\0';
        lstrcatA(param_1,"\\...");
        lstrcatA(param_1,lpString);
        return;
      }
    }
    lstrcpyA(param_1,lpString2);
  }
  return;
}

