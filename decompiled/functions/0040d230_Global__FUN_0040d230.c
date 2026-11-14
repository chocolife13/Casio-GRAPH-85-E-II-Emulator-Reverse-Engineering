// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040d230
// entry: 0040d230  size: 70


void __fastcall FUN_0040d230(int param_1)

{
  HDC pHVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    pHVar1 = GetDC(*(HWND *)(param_1 + 0x1c));
    iVar2 = FUN_00569c60(pHVar1);
    FUN_0040bea0(iVar2);
    ReleaseDC(*(HWND *)(param_1 + 0x1c),*(HDC *)(iVar2 + 4));
  }
  FUN_0056339a();
  return;
}

