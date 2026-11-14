// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d17a
// entry: 0056d17a  size: 117


undefined4 __thiscall FUN_0056d17a(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  tagRECT local_14;
  
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_14);
  *param_2 = local_14.right;
  param_2[1] = local_14.bottom;
  uVar1 = FUN_005661de();
  FUN_0056d120(param_3);
  if ((*param_3 != 0) && ((uVar1 & 0x200000) != 0)) {
    *param_2 = *param_2 + *param_3;
  }
  if ((param_3[1] != 0) && ((uVar1 & 0x100000) != 0)) {
    param_2[1] = param_2[1] + param_3[1];
  }
  if ((*param_3 < *param_2) && (param_3[1] < param_2[1])) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

