// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564d7a
// entry: 00564d7a  size: 77


undefined4 __thiscall FUN_00564d7a(int *param_1,int param_2,LPCSCROLLINFO param_3,BOOL param_4)

{
  undefined4 uVar1;
  int iVar2;
  HWND hwnd;
  
  if (DAT_005d50fc < 0x333) {
    uVar1 = 0;
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
    SetScrollInfo(hwnd,param_2,param_3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}

