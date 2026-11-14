// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057019b
// entry: 0057019b  size: 851


void __thiscall FUN_0057019b(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  tagRECT local_3c;
  tagRECT local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x88) = 1;
  FUN_00570a7a();
  uVar3 = FUN_0056a349();
  if ((uVar3 & 1) != 0) {
    FUN_0056a37f(0);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((*(uint *)(iVar1 + 100) & 4) == 0) {
    if ((*(uint *)(iVar1 + 100) & 2) == 0) {
      GetWindowRect(*(HWND *)(iVar1 + 0x1c),&local_2c);
      uVar3 = *(uint *)(param_1 + 0x78) & 0xa000;
      *(int *)(param_1 + 4) = param_2;
      *(int *)(param_1 + 8) = param_3;
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xbc))
                                (&local_14,0xffffffff,(-(uVar3 != 0) & 6U) + 10);
      local_14 = *piVar4;
      local_8 = piVar4[1];
      if (uVar3 == 0) {
        *(LONG *)(param_1 + 0x38) = local_2c.left;
        *(LONG *)(param_1 + 0x3c) = local_2c.top;
        *(LONG *)(param_1 + 0x40) = local_2c.right;
        *(LONG *)(param_1 + 0x44) = local_2c.bottom;
        piVar4 = (int *)(param_1 + 0x28);
        local_1c = local_2c.left;
        local_18 = param_3 - (local_2c.right - local_2c.left) / 2;
      }
      else {
        *(LONG *)(param_1 + 0x28) = local_2c.left;
        *(LONG *)(param_1 + 0x2c) = local_2c.top;
        *(LONG *)(param_1 + 0x30) = local_2c.right;
        *(LONG *)(param_1 + 0x34) = local_2c.bottom;
        piVar4 = (int *)(param_1 + 0x38);
        local_18 = local_2c.top;
        local_1c = param_2 - (local_2c.bottom - local_2c.top) / 2;
      }
      local_10 = local_8 + local_18;
      local_14 = local_14 + local_1c;
      *piVar4 = local_1c;
      piVar4[1] = local_18;
      piVar4[2] = local_14;
      piVar4[3] = local_10;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x44);
      goto LAB_0057045a;
    }
    GetWindowRect(*(HWND *)(iVar1 + 0x1c),&local_3c);
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xbc))(&local_14,0xffffffff,10);
    iVar1 = *piVar4;
    iVar2 = piVar4[1];
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xbc))(&local_14,0xffffffff,0x10);
    local_10 = piVar4[1];
    local_2c.right = *piVar4 + local_3c.left;
    *(LONG *)(param_1 + 0x28) = local_3c.left;
    *(LONG *)(param_1 + 0x2c) = local_3c.top;
    *(int *)(param_1 + 0x30) = iVar1 + local_3c.left;
    *(int *)(param_1 + 0x34) = iVar2 + local_3c.top;
    *(LONG *)(param_1 + 0x48) = local_3c.left;
    *(LONG *)(param_1 + 0x4c) = local_3c.top;
    *(int *)(param_1 + 0x50) = iVar1 + local_3c.left;
    *(int *)(param_1 + 0x54) = iVar2 + local_3c.top;
    local_2c.left = local_3c.left;
    local_2c.bottom = local_10 + local_3c.top;
    local_2c.top = local_3c.top;
    *(LONG *)(param_1 + 0x38) = local_3c.left;
    *(LONG *)(param_1 + 0x3c) = local_3c.top;
    *(LONG *)(param_1 + 0x40) = local_2c.right;
    *(LONG *)(param_1 + 0x44) = local_2c.bottom;
  }
  else {
    GetWindowRect(*(HWND *)(iVar1 + 0x1c),&local_3c);
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xbc))(&local_14,0,10);
    iVar1 = *piVar4;
    iVar2 = piVar4[1];
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xbc))(&local_14,0,0x10);
    local_c = *piVar4;
    local_8 = piVar4[1];
    piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xbc))(&local_14,0,6);
    local_10 = piVar4[1];
    local_2c.right = *piVar4 + local_3c.left;
    *(LONG *)(param_1 + 0x28) = local_3c.left;
    *(LONG *)(param_1 + 0x2c) = local_3c.top;
    *(int *)(param_1 + 0x30) = iVar1 + local_3c.left;
    *(int *)(param_1 + 0x34) = iVar2 + local_3c.top;
    *(LONG *)(param_1 + 0x38) = local_3c.left;
    *(LONG *)(param_1 + 0x3c) = local_3c.top;
    *(int *)(param_1 + 0x40) = local_c + local_3c.left;
    *(int *)(param_1 + 0x44) = local_8 + local_3c.top;
    local_2c.bottom = local_10 + local_3c.top;
    *(LONG *)(param_1 + 0x48) = local_3c.left;
    *(LONG *)(param_1 + 0x4c) = local_3c.top;
    *(LONG *)(param_1 + 0x50) = local_2c.right;
    *(LONG *)(param_1 + 0x54) = local_2c.bottom;
    local_2c.left = local_3c.left;
    local_2c.top = local_3c.top;
    local_8 = local_2c.bottom;
  }
  *(LONG *)(param_1 + 0x58) = local_2c.left;
  *(LONG *)(param_1 + 0x5c) = local_2c.top;
  *(LONG *)(param_1 + 0x60) = local_2c.right;
  *(LONG *)(param_1 + 100) = local_2c.bottom;
LAB_0057045a:
  FUN_00573f0d(param_1 + 0x48,0xc40000,0);
  FUN_00573f0d((LPRECT)(param_1 + 0x58),0xc40000,0);
  InflateRect((LPRECT)(param_1 + 0x48),-DAT_005d50b8,-DAT_005d50bc);
  InflateRect((LPRECT)(param_1 + 0x58),-DAT_005d50b8,-DAT_005d50bc);
  FUN_0057013f(param_1 + 0x28,param_2,param_3);
  FUN_0057013f(param_1 + 0x38,param_2,param_3);
  FUN_0057013f(param_1 + 0x48,param_2,param_3);
  FUN_0057013f(param_1 + 0x58,param_2,param_3);
  uVar5 = FUN_00570cec();
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  FUN_005704ee(param_2,param_3);
  FUN_00570e4b();
  return;
}

