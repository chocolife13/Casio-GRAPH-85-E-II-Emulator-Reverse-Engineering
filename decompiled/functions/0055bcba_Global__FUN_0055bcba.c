// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055bcba
// entry: 0055bcba  size: 105


LPSTR FUN_0055bcba(LPSTR param_1,WCHAR param_2)

{
  LPSTR pCVar1;
  undefined4 *puVar2;
  
  pCVar1 = param_1;
  if (param_1 == (LPSTR)0x0) {
    return param_1;
  }
  if (DAT_005d562c == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return (LPSTR)0x1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    pCVar1 = (LPSTR)WideCharToMultiByte(DAT_005d563c,0x220,&param_2,1,pCVar1,DAT_005cc6b4,
                                        (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((pCVar1 != (LPSTR)0x0) && (param_1 == (LPSTR)0x0)) {
      return pCVar1;
    }
  }
  puVar2 = (undefined4 *)FUN_005542c1();
  *puVar2 = 0x2a;
  return (LPSTR)0xffffffff;
}

