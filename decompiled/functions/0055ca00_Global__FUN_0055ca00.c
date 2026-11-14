// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055ca00
// entry: 0055ca00  size: 70


HANDLE FUN_0055ca00(HWND param_1,int param_2)

{
  HANDLE hData;
  
  hData = (HANDLE)FUN_0055c9e0(param_1);
  if (hData == (HANDLE)0x0) {
    hData = DAT_005db450;
    if (param_2 != 6) {
      hData = (HANDLE)(&DAT_005db3c4)[param_2 * 6];
    }
    SetPropA(param_1,(LPCSTR)(uint)DAT_005da96e,hData);
  }
  return hData;
}

