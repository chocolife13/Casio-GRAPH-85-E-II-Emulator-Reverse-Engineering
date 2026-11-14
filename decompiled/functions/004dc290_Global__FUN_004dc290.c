// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dc290
// entry: 004dc290  size: 904


undefined4 * FUN_004dc290(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int *local_34;
  int local_30;
  int local_2c;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_2c = 1;
  iVar4 = FUN_004e4000(param_1);
  if (iVar4 != 0) {
    local_2c = 2;
  }
  bVar10 = param_1 == param_2;
  local_34 = (int *)param_1[2];
  cVar3 = FUN_004ada20(local_34);
  if (cVar3 == '\x02') {
    puVar5 = (undefined4 *)FUN_004e5630(4,param_2);
    return puVar5;
  }
  bVar2 = cVar3 != '\x01' && bVar10;
  uVar1 = *(ushort *)((int)param_1 + 2);
  param_1 = (undefined4 *)local_2c;
  if (iVar4 == 0) {
    FUN_004e57a0(local_24);
    iVar4 = 1;
    if (uVar1 != 0) {
      iVar9 = 0xc;
      do {
        iVar6 = iVar9 + -0xc + *local_34;
        local_18 = *(undefined4 *)(iVar9 + -0xc + *local_34);
        local_14 = *(undefined4 *)(iVar6 + 4);
        local_10 = *(undefined4 *)(iVar6 + 8);
        iVar6 = FUN_004e7250(&local_18,local_24);
        if (iVar6 == -1) {
          puVar5 = (undefined4 *)FUN_004e5630(3,param_2);
          return puVar5;
        }
        if (iVar6 != 0) {
          param_1 = (undefined4 *)0x2;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar4 <= (int)(uint)uVar1);
    }
    if ((param_3 == 0) && (param_1 == (undefined4 *)0x2)) {
      if (bVar2) {
        FUN_004ad6d0(local_34);
      }
      puVar5 = (undefined4 *)FUN_004e5630(3,param_2);
      return puVar5;
    }
  }
  uVar7 = (int)param_1 * (uint)uVar1 * 0xc;
  if (bVar2) {
    if (cVar3 == '\x01' || !bVar10) goto LAB_004dc456;
    piVar8 = local_34;
    if (param_1 == (undefined4 *)local_2c) goto LAB_004dc454;
    piVar8 = (int *)FUN_004ad670(local_34,uVar7 & 0xffff);
    local_34 = piVar8;
    if (piVar8 == (int *)0x0) {
      puVar5 = (undefined4 *)FUN_004e5630(4,param_2);
      return puVar5;
    }
  }
  else {
    piVar8 = (int *)FUN_004ad630(uVar7 & 0xffff);
LAB_004dc454:
    if (piVar8 == (int *)0x0) {
LAB_004dc456:
      puVar5 = (undefined4 *)FUN_004e5630(4,param_2);
      return puVar5;
    }
  }
  local_30 = 1;
  local_2c = 1;
  iVar4 = 1;
  if (uVar1 != 0) {
    iVar6 = 0xc;
    iVar9 = ((uint)uVar1 * 3 + 3) * 4;
    do {
      iVar4 = iVar6 + -0xc + *local_34;
      local_18 = *(undefined4 *)(iVar6 + -0xc + *local_34);
      local_14 = *(undefined4 *)(iVar4 + 4);
      local_10 = *(undefined4 *)(iVar4 + 8);
      if ((param_1 == (undefined4 *)0x2) && (iVar4 = FUN_004e4000(&local_18), iVar4 == 1)) {
        iVar4 = iVar9 + -0xc + *local_34;
        local_c = *(undefined4 *)(iVar9 + -0xc + *local_34);
        local_8 = *(undefined4 *)(iVar4 + 4);
        local_4 = *(undefined4 *)(iVar4 + 8);
      }
      FUN_004e2200(&local_18,param_2,param_3);
      iVar4 = FUN_004e4020(param_2);
      if (iVar4 != 0) {
        FUN_004ad6d0(piVar8);
        return param_2;
      }
      iVar4 = FUN_004e4000(param_2);
      if (iVar4 != 0) {
        local_30 = 2;
      }
      puVar5 = (undefined4 *)(iVar6 + -0xc + *piVar8);
      *puVar5 = *param_2;
      puVar5[1] = param_2[1];
      puVar5[2] = param_2[2];
      if (param_1 == (undefined4 *)0x2) {
        puVar5 = (undefined4 *)(iVar9 + -0xc + *piVar8);
        *puVar5 = param_2[3];
        puVar5[1] = param_2[4];
        puVar5[2] = param_2[5];
      }
      iVar6 = iVar6 + 0xc;
      local_2c = local_2c + 1;
      iVar9 = iVar9 + 0xc;
      iVar4 = local_30;
    } while (local_2c <= (int)(uint)uVar1);
  }
  if (param_1 == (undefined4 *)0x2) {
    if (iVar4 != 1) {
LAB_004dc600:
      *(undefined1 *)param_2 = 0xa0;
      *(ushort *)((int)param_2 + 2) = uVar1;
      param_2[2] = piVar8;
      return param_2;
    }
    piVar8 = (int *)FUN_004ad670(piVar8,((uint)uVar1 * 3 & 0x3fff) << 2);
    if (piVar8 == (int *)0x0) {
      puVar5 = (undefined4 *)FUN_004e5630(4,param_2);
      return puVar5;
    }
  }
  else if (iVar4 != 1) goto LAB_004dc600;
  *(undefined1 *)param_2 = 0x20;
  *(ushort *)((int)param_2 + 2) = uVar1;
  param_2[2] = piVar8;
  return param_2;
}

