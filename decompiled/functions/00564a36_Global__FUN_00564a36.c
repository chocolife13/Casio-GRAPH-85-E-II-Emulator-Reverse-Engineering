// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564a36
// entry: 00564a36  size: 40


undefined4 __fastcall FUN_00564a36(int param_1)

{
  HWND__ *pHVar1;
  undefined4 uVar2;
  HWND__ *pHVar3;
  
  if ((param_1 != 0) &&
     (pHVar1 = *(HWND__ **)(param_1 + 0x1c), *(HWND__ **)(param_1 + 0x1c) != (HWND__ *)0x0)) {
    do {
      pHVar3 = pHVar1;
      pHVar1 = AfxGetParentOwner(pHVar3);
    } while (pHVar1 != (HWND__ *)0x0);
    uVar2 = FUN_00563433(pHVar3);
    return uVar2;
  }
  return 0;
}

