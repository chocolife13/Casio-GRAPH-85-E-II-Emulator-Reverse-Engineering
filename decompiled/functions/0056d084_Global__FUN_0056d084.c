// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d084
// entry: 0056d084  size: 156


void __thiscall FUN_0056d084(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  tagRECT local_14;
  
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_14);
  param_2 = param_2 - (local_14.right - local_14.left) / 2;
  param_3 = param_3 - (local_14.bottom - local_14.top) / 2;
  uVar1 = FUN_005661de();
  if (((uVar1 & 0x100000) == 0) || (param_2 < 0)) {
    param_2 = 0;
  }
  else {
    iVar2 = FUN_00564e14(0);
    if (iVar2 < param_2) {
      param_2 = iVar2;
    }
  }
  if (((uVar1 & 0x200000) == 0) || (param_3 < 0)) {
    param_3 = 0;
  }
  else {
    iVar2 = FUN_00564e14(1);
    if (iVar2 < param_3) {
      param_3 = iVar2;
    }
  }
  FUN_00564c7c(0,param_2,1);
  FUN_00564c7c(1,param_3,1);
  return;
}

