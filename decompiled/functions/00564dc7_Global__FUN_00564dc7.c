// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564dc7
// entry: 00564dc7  size: 77


BOOL __thiscall FUN_00564dc7(int *param_1,int param_2,LPSCROLLINFO param_3,UINT param_4)

{
  BOOL BVar1;
  int iVar2;
  HWND hwnd;
  
  if (DAT_005d50fc < 0x333) {
    BVar1 = 0;
  }
  else {
    hwnd = (HWND)param_1[7];
    if (param_2 != 2) {
      iVar2 = (**(code **)(*param_1 + 0x68))(param_2);
      if (iVar2 != 0) {
        hwnd = *(HWND *)(iVar2 + 0x1c);
        param_2 = 2;
      }
    }
    param_3->cbSize = 0x1c;
    param_3->fMask = param_4;
    BVar1 = GetScrollInfo(hwnd,param_2,param_3);
  }
  return BVar1;
}

