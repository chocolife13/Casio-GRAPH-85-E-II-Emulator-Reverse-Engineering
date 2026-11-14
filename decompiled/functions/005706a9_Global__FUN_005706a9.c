// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005706a9
// entry: 005706a9  size: 333


void __thiscall FUN_005706a9(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  tagRECT local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_00570a7a();
  uVar3 = FUN_0056a349();
  if ((uVar3 & 1) != 0) {
    FUN_0056a37f(0);
  }
  GetWindowRect(*(HWND *)(*(int *)(param_1 + 0x68) + 0x1c),&local_2c);
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xbc))(&local_14,0,6);
  local_8 = piVar4[1];
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  local_14 = iVar1 + local_2c.left;
  *(LONG *)(param_1 + 0x28) = local_2c.left;
  *(LONG *)(param_1 + 0x2c) = local_2c.top;
  *(int *)(param_1 + 0x30) = iVar1 + local_2c.left;
  *(int *)(param_1 + 0x34) = iVar2 + local_2c.top;
  local_10 = local_8 + local_2c.top;
  *(LONG *)(param_1 + 0x38) = local_2c.left;
  *(LONG *)(param_1 + 0x3c) = local_2c.top;
  *(int *)(param_1 + 0x40) = local_14;
  *(int *)(param_1 + 0x44) = local_10;
  local_1c = local_2c.left;
  local_18 = local_2c.top;
  *(int *)(param_1 + 0x48) = local_2c.left;
  *(LONG *)(param_1 + 0x4c) = local_2c.top;
  *(int *)(param_1 + 0x50) = local_14;
  *(int *)(param_1 + 0x54) = local_10;
  FUN_00573f0d((int *)(param_1 + 0x48),0xc40000,0);
  InflateRect((LPRECT)(param_1 + 0x48),-DAT_005d50b8,-DAT_005d50bc);
  local_1c = 0;
  local_18 = 0;
  local_14 = (*(int *)(param_1 + 0x50) - ((LPRECT)(param_1 + 0x48))->left) -
             (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38));
  local_10 = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c)) -
             (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(int *)(param_1 + 0x60) = local_14;
  *(int *)(param_1 + 100) = local_10;
  FUN_005707f6(param_3,param_4);
  FUN_00570e4b();
  return;
}

