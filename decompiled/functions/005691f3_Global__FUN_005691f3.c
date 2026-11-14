// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005691f3
// entry: 005691f3  size: 198


void FUN_005691f3(LPCSTR param_1)

{
  char cVar1;
  char *lpString1;
  LPSTR pCVar2;
  CHAR CVar3;
  
  lpString1 = (char *)FUN_005676c7(0x104);
  _memset(lpString1,0,0x104);
  lstrcpynA(lpString1,param_1,0x104);
  CVar3 = *lpString1;
  pCVar2 = lpString1;
  while ((CVar3 != '\0' &&
         (((CVar3 != '\\' && (CVar3 != '/')) || ((pCVar2[1] != '\\' && (pCVar2[1] != '/'))))))) {
    pCVar2 = (LPSTR)FUN_005560f4(pCVar2);
    CVar3 = *pCVar2;
  }
  if (*pCVar2 == '\0') {
    CVar3 = *lpString1;
    while (((CVar3 != '\0' && (CVar3 != '\\')) && (CVar3 != '/'))) {
      lpString1 = (char *)FUN_005560f4(lpString1);
      CVar3 = *lpString1;
    }
  }
  else {
    for (lpString1 = pCVar2 + 2;
        ((cVar1 = *lpString1, cVar1 != '\0' && (cVar1 != '\\')) && (cVar1 != '/'));
        lpString1 = (char *)FUN_005560f4(lpString1)) {
    }
    if (*lpString1 == '\0') goto LAB_00569274;
    do {
      lpString1 = (char *)FUN_005560f4(lpString1);
LAB_00569274:
      cVar1 = *lpString1;
    } while (((cVar1 != '\0') && (cVar1 != '\\')) && (cVar1 != '/'));
  }
  if (*lpString1 != '\0') {
    lpString1[1] = '\0';
  }
  FUN_00567716(0xffffffff);
  return;
}

