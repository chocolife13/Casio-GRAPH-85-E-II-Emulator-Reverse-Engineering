// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ed740
// entry: 004ed740  size: 1088


undefined4 FUN_004ed740(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [2];
  undefined2 local_2e;
  undefined2 local_2c;
  int *local_28;
  undefined1 local_18 [2];
  undefined2 local_16;
  undefined2 local_14;
  int *local_10;
  
  iVar2 = param_1;
  FUN_00529950(0x21);
  param_1 = 1;
  iVar8 = iVar2 * iVar2;
  piVar3 = (int *)FUN_004ad630((iVar8 * 3 & 0x1fffU) << 3);
  if (piVar3 == (int *)0x0) {
    return 4;
  }
  local_50 = 1;
  if (iVar2 < 1) {
LAB_004ed84a:
    piVar3 = (int *)FUN_004ad670(piVar3,(iVar8 * 3 & 0x3fffU) << 2);
    if (piVar3 == (int *)0x0) {
      return 4;
    }
    local_18[0] = 0x30;
  }
  else {
    local_4c = 0;
    do {
      iVar9 = 1;
      do {
        iVar4 = FUN_00528ac0(0x20,local_50,iVar9,&local_48);
        if (3 < iVar4) goto LAB_004ed99d;
        puVar1 = (undefined4 *)(*piVar3 + -0xc + (local_4c + iVar9) * 0xc);
        *puVar1 = local_48;
        puVar1[1] = local_44;
        puVar1[2] = local_40;
        puVar1 = (undefined4 *)(*piVar3 + -0xc + (local_4c + iVar9 + iVar8) * 0xc);
        *puVar1 = local_3c;
        puVar1[1] = local_38;
        puVar1[2] = local_34;
        iVar4 = FUN_004e4000(&local_48);
        if (iVar4 != 0) {
          param_1 = 2;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 <= iVar2);
      local_50 = local_50 + 1;
      local_4c = local_4c + iVar2;
    } while (local_50 <= iVar2);
    if (param_1 == 1) goto LAB_004ed84a;
    local_18[0] = 0xb0;
  }
  uVar10 = (undefined2)iVar2;
  param_1 = 1;
  local_16 = uVar10;
  local_14 = uVar10;
  local_10 = piVar3;
  piVar5 = (int *)FUN_004ad630((iVar2 * 3 & 0x1fffU) << 3);
  if (piVar5 == (int *)0x0) {
    FUN_004ad6d0(piVar3);
    return 4;
  }
  local_50 = 1;
  if (0 < iVar2) {
    local_4c = 0xc;
    iVar8 = (iVar2 + 1) * 0xc;
    do {
      iVar9 = FUN_00528ac0(0x20,local_50,iVar2 + 1,&local_48);
      if (3 < iVar9) {
        FUN_004ad6d0(piVar3);
        FUN_004ad6d0(piVar5);
        return 4;
      }
      puVar1 = (undefined4 *)(*piVar5 + -0xc + local_4c);
      *puVar1 = local_48;
      puVar1[1] = local_44;
      puVar1[2] = local_40;
      iVar9 = *piVar5 + -0xc + iVar8;
      *(undefined4 *)(*piVar5 + -0xc + iVar8) = local_3c;
      *(undefined4 *)(iVar9 + 4) = local_38;
      *(undefined4 *)(iVar9 + 8) = local_34;
      iVar9 = FUN_004e4000(&local_48);
      if (iVar9 != 0) {
        param_1 = 2;
      }
      local_50 = local_50 + 1;
      local_4c = local_4c + 0xc;
      iVar8 = iVar8 + 0xc;
    } while (local_50 <= iVar2);
    if (param_1 != 1) {
      local_30[0] = 0xb0;
      goto LAB_004ed9db;
    }
  }
  piVar5 = (int *)FUN_004ad670(piVar5,(iVar2 * 3 & 0x3fffU) << 2);
  if (piVar5 == (int *)0x0) {
LAB_004ed99d:
    FUN_004ad6d0(piVar3);
    return 4;
  }
  local_30[0] = 0x30;
LAB_004ed9db:
  local_2c = 1;
  local_2e = uVar10;
  local_28 = piVar5;
  iVar8 = FUN_0052f820();
  if (iVar8 != 0) {
    FUN_004ad6d0(piVar3);
    FUN_004ad6d0(piVar5);
    return 1;
  }
  FUN_004eab60(iVar2,local_18,local_30);
  iVar8 = FUN_0052f820();
  if (iVar8 != 0) {
    FUN_004ad6d0(piVar3);
    FUN_004ad6d0(piVar5);
    return 1;
  }
  iVar8 = FUN_004eaee0(iVar2,local_18,local_30,&local_48);
  FUN_004ad6d0(piVar3);
  FUN_004ad6d0(piVar5);
  if (iVar8 == 0) {
    uVar6 = FUN_004e4020(&local_48);
    return uVar6;
  }
  iVar9 = 1;
  param_1 = 1;
  iVar8 = FUN_004e4000(&local_48);
  piVar3 = local_40;
  if (iVar8 != 0) {
    param_1 = 2;
  }
  iVar8 = FUN_00529400(0x21,iVar2,1);
  if (iVar8 < 4) {
    if (0 < iVar2) {
      iVar4 = 0xc;
      iVar8 = (iVar2 * 3 + 3) * 4;
      do {
        iVar7 = *piVar3 + -0xc + iVar4;
        local_48 = *(undefined4 *)(*piVar3 + -0xc + iVar4);
        local_44 = *(undefined4 *)(iVar7 + 4);
        local_40 = *(int **)(iVar7 + 8);
        if (param_1 == 2) {
          iVar7 = iVar8 + -0xc + *piVar3;
          local_3c = *(undefined4 *)(iVar8 + -0xc + *piVar3);
          local_38 = *(undefined4 *)(iVar7 + 4);
          local_34 = *(undefined4 *)(iVar7 + 8);
        }
        iVar7 = FUN_00528bf0(0x21,iVar9,1,&local_48);
        if (3 < iVar7) {
          FUN_004ad6d0(piVar3);
          return 4;
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 0xc;
        iVar8 = iVar8 + 0xc;
      } while (iVar9 <= iVar2);
    }
    FUN_004ad6d0(piVar3);
    return 0;
  }
  FUN_004ad6d0(piVar3);
  return 4;
}

