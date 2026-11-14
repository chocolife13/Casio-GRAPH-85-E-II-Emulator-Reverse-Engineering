// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e63c0
// entry: 004e63c0  size: 1528


void FUN_004e63c0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [12];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  int local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar3 = FUN_004e4020(param_2);
  if (iVar3 != 0) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    return;
  }
  iVar3 = FUN_004e4020(param_3);
  if (iVar3 != 0) {
    *param_4 = *param_3;
    param_4[1] = param_3[1];
    param_4[2] = param_3[2];
    return;
  }
  FUN_004e48e0(param_2,&local_5c);
  piVar6 = &local_34;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  if (param_1 != 0xb) {
    FUN_004e48e0(param_3,&local_34);
  }
  iVar3 = local_34 * local_5c;
  uVar4 = FUN_004e6cc0(local_58,local_40,&local_68,local_4c,&local_8c);
  FUN_004e69c0(uVar4);
  if (param_1 != 0xb) {
    uVar4 = FUN_004e6cc0(local_30,local_18,&local_68,local_24,local_80);
    FUN_004e69c0(uVar4);
  }
  FUN_004e5780(&local_74);
  local_b0 = local_74;
  local_ac = local_70;
  local_a8 = local_6c;
  if ((param_1 != 0) && (param_1 != 1)) {
    if ((param_1 == 2) || (param_1 == 3)) {
      local_b4 = iVar3;
      if (param_1 == 2) {
        FUN_004e6cc0(&local_8c,local_80,&local_a4);
        puVar5 = local_18;
      }
      else {
        FUN_004e6cc0(local_18,&local_8c,&local_a4);
        puVar5 = local_80;
      }
      FUN_004e6cc0(local_40,puVar5,&local_98);
    }
    else if (param_1 == 4) {
      FUN_004e57c0(local_c);
      local_b4 = 1;
      uVar4 = FUN_004e7950(local_80,local_c,&local_68,&local_74);
      iVar3 = FUN_004e7210(uVar4);
      if ((local_5c == -1) && (iVar3 == 1)) {
        local_b4 = -1;
      }
      FUN_004e6d90(local_80,local_18,local_80);
      if ((local_5c == -1) && (iVar3 = FUN_004e9680(local_80), iVar3 != 1)) {
        FUN_004e5c90(4,param_2,param_3,param_4);
        return;
      }
      FUN_004e6ed0(&local_8c,local_80,&local_a4);
      FUN_004e6ed0(local_40,local_80,&local_98);
      FUN_004e7910(&local_a4,&local_a4);
      FUN_004e7910(&local_98,&local_98);
      iVar3 = FUN_004e9680(&local_a4);
      if ((iVar3 != 1) ||
         (iVar3 = FUN_004e9680(&local_98), uVar2 = local_9c, uVar1 = local_a0, uVar4 = local_a4,
         iVar3 != 1)) {
        FUN_004e5c90(4,param_2,param_3,param_4);
        return;
      }
      if (local_34 == -1) {
        local_a4 = local_98;
        local_a0 = local_94;
        local_68 = uVar4;
        local_64 = uVar1;
        local_60 = local_9c;
        local_9c = local_90;
        local_98 = uVar4;
        local_94 = uVar1;
        local_90 = uVar2;
      }
    }
    else if (param_1 == 0xb) {
      if (local_5c == -1) {
        FUN_004e5630(3,param_4);
        return;
      }
      local_b4 = 1;
      FUN_004e7350(&local_8c,&local_a4);
      FUN_004e7350(local_40,&local_98);
      FUN_004e7910(&local_a4,&local_a4);
      FUN_004e7910(&local_98,&local_98);
      iVar3 = FUN_004e9680(&local_a4);
      if ((iVar3 != 1) || (iVar3 = FUN_004e9680(&local_98), iVar3 != 1)) {
        FUN_004e7350(param_2,param_4);
        return;
      }
    }
    goto LAB_004e684b;
  }
  local_b4 = local_5c;
  FUN_004e6cc0(&local_8c,local_18,&local_8c);
  FUN_004e6cc0(local_80,local_40,local_80);
  if (param_1 == 0) {
    if (iVar3 == 1) goto LAB_004e68ed;
LAB_004e6817:
    FUN_004e6b40(&local_8c,local_80,&local_a4);
  }
  else {
    if ((param_1 != 1) || (iVar3 != -1)) goto LAB_004e6817;
LAB_004e68ed:
    FUN_004e69c0(&local_8c,local_80,&local_a4);
  }
  FUN_004e6cc0(local_40,local_18,&local_98);
LAB_004e684b:
  iVar3 = FUN_004e4020(&local_a4);
  if ((iVar3 == 0) && (iVar3 = FUN_004e4020(&local_98), iVar3 == 0)) {
    iVar3 = FUN_004e7250(&local_a4,&local_74);
    if (iVar3 == 1) {
      local_b4 = -local_b4;
      FUN_004e75d0(&local_a4,&local_a4);
    }
    iVar3 = FUN_004e71d0(&local_98,&local_74);
    if (iVar3 != 0) {
      FUN_004e5630(3,param_4);
      return;
    }
    FUN_004e4430(&local_b4,&local_b4);
    FUN_004e45e0(&local_b4,&local_8c);
    iVar3 = FUN_004e96c0(&local_8c);
    if ((iVar3 != 0) || (iVar3 = FUN_004e9680(&local_8c), iVar3 == 1)) {
      *param_4 = local_8c;
      param_4[1] = local_88;
      param_4[2] = local_84;
      return;
    }
    if (param_1 == 0xb) {
      FUN_004e7350(param_2,param_4);
      return;
    }
  }
  FUN_004e5c90(param_1,param_2,param_3,param_4);
  return;
}

