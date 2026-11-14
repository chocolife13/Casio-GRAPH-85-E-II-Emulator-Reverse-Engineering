// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dd830
// entry: 004dd830  size: 1035


undefined4 *
FUN_004dd830(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int local_40;
  int local_3c;
  int local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_34 = 1;
  iVar5 = FUN_004e4000(param_2);
  if (iVar5 != 0) {
    local_34 = 2;
  }
  piVar2 = (int *)param_2[2];
  cVar4 = FUN_004ada20(piVar2);
  if (cVar4 == '\x02') {
    puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
    return puVar6;
  }
  bVar3 = cVar4 != '\x01' && param_2 == param_3;
  uVar1 = *(ushort *)((int)param_2 + 2);
  local_40 = local_34;
  if (iVar5 == 0) {
    FUN_004e57a0(local_30);
    iVar5 = 1;
    if (uVar1 != 0) {
      iVar11 = 0xc;
      do {
        iVar8 = iVar11 + -0xc + *piVar2;
        local_18 = *(undefined4 *)(iVar11 + -0xc + *piVar2);
        local_14 = *(undefined4 *)(iVar8 + 4);
        local_10 = *(undefined4 *)(iVar8 + 8);
        uVar7 = FUN_004e7620(&local_18,local_24,local_30);
        iVar8 = FUN_004e7290(uVar7);
        if (iVar8 == -1) {
          puVar6 = (undefined4 *)FUN_004e5630(3,param_3);
          return puVar6;
        }
        if (iVar8 != 0) {
          local_40 = 2;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar5 <= (int)(uint)uVar1);
    }
    if (param_5 != 0) goto LAB_004dd999;
    if (local_40 == 2) {
      if (bVar3) {
        FUN_004ad6d0(piVar2);
      }
      puVar6 = (undefined4 *)FUN_004e5630(3,param_3);
      return puVar6;
    }
  }
  else {
LAB_004dd999:
    if (local_40 == 2) {
      param_4 = 1;
    }
  }
  uVar9 = local_40 * (uint)uVar1 * 0xc;
  if (bVar3) {
    if (cVar4 == '\x01' || param_2 != param_3) {
LAB_004dda2f:
      puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
      return puVar6;
    }
    if (local_40 == local_34) {
      piVar10 = piVar2;
      param_2 = piVar2;
      if (piVar2 == (int *)0x0) goto LAB_004dda2f;
    }
    else {
      piVar10 = (int *)FUN_004ad670(piVar2,uVar9 & 0xffff);
      param_2 = piVar10;
      if (piVar10 == (int *)0x0) {
        puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
        return puVar6;
      }
    }
  }
  else {
    piVar10 = (int *)FUN_004ad630(uVar9 & 0xffff);
    param_2 = piVar2;
    if (piVar10 == (int *)0x0) {
      puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
      return puVar6;
    }
  }
  local_3c = 1;
  local_34 = 1;
  iVar5 = 1;
  if (uVar1 != 0) {
    iVar8 = 0xc;
    iVar11 = ((uint)uVar1 * 3 + 3) * 4;
    do {
      iVar5 = iVar8 + -0xc + *param_2;
      local_18 = *(undefined4 *)(iVar8 + -0xc + *param_2);
      local_14 = *(undefined4 *)(iVar5 + 4);
      local_10 = *(undefined4 *)(iVar5 + 8);
      if ((local_40 == 2) && (iVar5 = FUN_004e4000(&local_18), iVar5 == 1)) {
        iVar5 = iVar11 + -0xc + *param_2;
        local_c = *(undefined4 *)(iVar11 + -0xc + *param_2);
        local_8 = *(undefined4 *)(iVar5 + 4);
        local_4 = *(undefined4 *)(iVar5 + 8);
      }
      if (param_1 == 0x12) {
        FUN_004e1d60(&local_18,param_3,param_4,param_5);
      }
      else if (param_1 == 0x13) {
        FUN_004e1e50(&local_18,param_3,param_4,param_5);
      }
      else {
        FUN_004e5630(3,param_3);
      }
      iVar5 = FUN_004e4020(param_3);
      if (iVar5 != 0) {
        FUN_004ad6d0(piVar10);
        return param_3;
      }
      iVar5 = FUN_004e4000(param_3);
      if (iVar5 != 0) {
        local_3c = 2;
      }
      puVar6 = (undefined4 *)(*piVar10 + -0xc + iVar8);
      *puVar6 = *param_3;
      puVar6[1] = param_3[1];
      puVar6[2] = param_3[2];
      if (local_40 == 2) {
        puVar6 = (undefined4 *)(*piVar10 + -0xc + iVar11);
        *puVar6 = param_3[3];
        puVar6[1] = param_3[4];
        puVar6[2] = param_3[5];
      }
      iVar8 = iVar8 + 0xc;
      local_34 = local_34 + 1;
      iVar11 = iVar11 + 0xc;
      iVar5 = local_3c;
    } while (local_34 <= (int)(uint)uVar1);
  }
  if (local_40 == 2) {
    if (iVar5 != 1) {
LAB_004ddc1e:
      *(undefined1 *)param_3 = 0xa0;
      *(ushort *)((int)param_3 + 2) = uVar1;
      param_3[2] = piVar10;
      return param_3;
    }
    piVar10 = (int *)FUN_004ad670(piVar10,((uint)uVar1 * 3 & 0x3fff) << 2);
    if (piVar10 == (int *)0x0) {
      puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
      return puVar6;
    }
  }
  else if (iVar5 != 1) goto LAB_004ddc1e;
  *(undefined1 *)param_3 = 0x20;
  *(ushort *)((int)param_3 + 2) = uVar1;
  param_3[2] = piVar10;
  return param_3;
}

