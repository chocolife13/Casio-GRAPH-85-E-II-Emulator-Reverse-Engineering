// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004de270
// entry: 004de270  size: 1081


undefined4 *
FUN_004de270(int param_1,int *param_2,int *param_3,undefined4 *param_4,undefined4 param_5)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_48 = 1;
  iVar5 = FUN_004e4000(param_2);
  iVar6 = FUN_004e4000(param_3);
  if ((iVar5 != 0) || (iVar6 != 0)) {
    local_48 = 2;
  }
  iVar11 = 0;
  if (param_2 == param_4) {
    iVar11 = 1;
  }
  else if (param_3 == param_4) {
    iVar11 = 2;
  }
  piVar9 = (int *)param_2[2];
  cVar4 = FUN_004ada20(piVar9);
  if (cVar4 == '\x02') {
    puVar7 = (undefined4 *)FUN_004e5630(4,param_4);
    return puVar7;
  }
  if (cVar4 == '\x01') {
    iVar11 = 0;
  }
  piVar3 = (int *)param_3[2];
  cVar4 = FUN_004ada20(piVar3);
  if (cVar4 == '\x02') {
    puVar7 = (undefined4 *)FUN_004e5630(4,param_4);
    return puVar7;
  }
  if (cVar4 == '\x01') {
    iVar11 = 0;
  }
  uVar1 = *(ushort *)((int)param_2 + 2);
  uVar2 = *(ushort *)(param_2 + 1);
  if (((uint)uVar1 != (uint)*(ushort *)((int)param_3 + 2)) ||
     ((uint)uVar2 != (uint)*(ushort *)(param_3 + 1))) {
    if ((iVar11 == 1) || (piVar9 = piVar3, iVar11 == 2)) {
      FUN_004ad6d0(piVar9);
    }
    puVar7 = (undefined4 *)FUN_004e5630(9,param_4);
    return puVar7;
  }
  uVar10 = (uint)uVar2 * (uint)uVar1;
  uVar8 = local_48 * uVar10 * 0xc;
  param_2 = piVar9;
  param_3 = piVar3;
  if (iVar11 == 0) {
    piVar9 = (int *)FUN_004ad630(uVar8 & 0xffff);
LAB_004de392:
    if (piVar9 == (int *)0x0) {
LAB_004de39a:
      puVar7 = (undefined4 *)FUN_004e5630(4,param_4);
      return puVar7;
    }
  }
  else if (iVar11 == 1) {
    if ((iVar5 != 0) || (local_48 != 2)) goto LAB_004de392;
    piVar9 = (int *)FUN_004ad670(piVar9,uVar8 & 0xffff);
    param_2 = piVar9;
    if (piVar9 == (int *)0x0) {
      puVar7 = (undefined4 *)FUN_004e5630(4,param_4);
      return puVar7;
    }
  }
  else {
    if (iVar11 != 2) goto LAB_004de39a;
    piVar9 = piVar3;
    if ((iVar6 != 0) || (local_48 != 2)) goto LAB_004de392;
    piVar9 = (int *)FUN_004ad670(piVar3,uVar8 & 0xffff);
    param_3 = piVar9;
    if (piVar9 == (int *)0x0) {
      puVar7 = (undefined4 *)FUN_004e5630(4,param_4);
      return puVar7;
    }
  }
  uVar8 = uVar10 & 0xffff;
  local_40 = 1;
  local_44 = 1;
  iVar5 = 1;
  if (uVar8 != 0) {
    iVar11 = 0xc;
    iVar6 = (uVar8 * 3 + 3) * 4;
    do {
      iVar5 = iVar11 + -0xc + *param_2;
      local_18 = *(undefined4 *)(iVar11 + -0xc + *param_2);
      local_14 = *(undefined4 *)(iVar5 + 4);
      local_10 = *(undefined4 *)(iVar5 + 8);
      iVar5 = *param_3 + -0xc + iVar11;
      local_30 = *(undefined4 *)(*param_3 + -0xc + iVar11);
      local_2c = *(undefined4 *)(iVar5 + 4);
      local_28 = *(undefined4 *)(iVar5 + 8);
      if (local_48 == 2) {
        iVar5 = FUN_004e4000(&local_18);
        if (iVar5 == 1) {
          iVar5 = iVar6 + -0xc + *param_2;
          local_c = *(undefined4 *)(iVar6 + -0xc + *param_2);
          local_8 = *(undefined4 *)(iVar5 + 4);
          local_4 = *(undefined4 *)(iVar5 + 8);
        }
        iVar5 = FUN_004e4000(&local_30);
        if (iVar5 == 1) {
          iVar5 = *param_3 + -0xc + iVar6;
          local_24 = *(undefined4 *)(*param_3 + -0xc + iVar6);
          local_20 = *(undefined4 *)(iVar5 + 4);
          local_1c = *(undefined4 *)(iVar5 + 8);
        }
      }
      if (param_1 == 0x30) {
        FUN_004e0880(&local_18,&local_30,param_4,param_5);
      }
      else if (param_1 == 0x31) {
        FUN_004e0b00(&local_18,&local_30,param_4,param_5);
      }
      else {
        FUN_004e5630(3,param_4);
      }
      iVar5 = FUN_004e4020(param_4);
      if (iVar5 != 0) {
        FUN_004ad6d0(piVar9);
        return param_4;
      }
      iVar5 = FUN_004e4000(param_4);
      if (iVar5 != 0) {
        local_40 = 2;
      }
      puVar7 = (undefined4 *)(iVar11 + -0xc + *piVar9);
      *puVar7 = *param_4;
      puVar7[1] = param_4[1];
      puVar7[2] = param_4[2];
      if (local_48 == 2) {
        puVar7 = (undefined4 *)(iVar6 + -0xc + *piVar9);
        *puVar7 = param_4[3];
        puVar7[1] = param_4[4];
        puVar7[2] = param_4[5];
      }
      iVar11 = iVar11 + 0xc;
      local_44 = local_44 + 1;
      iVar6 = iVar6 + 0xc;
      iVar5 = local_40;
    } while (local_44 <= (int)uVar8);
  }
  if (local_48 == 2) {
    if (iVar5 != 1) {
LAB_004de652:
      *(undefined1 *)param_4 = 0xb0;
      goto LAB_004de65b;
    }
    piVar9 = (int *)FUN_004ad670(piVar9,(uVar10 * 3 & 0x3fff) << 2);
    if (piVar9 == (int *)0x0) {
      puVar7 = (undefined4 *)FUN_004e5630(4,param_4);
      return puVar7;
    }
  }
  else if (iVar5 != 1) goto LAB_004de652;
  *(undefined1 *)param_4 = 0x30;
LAB_004de65b:
  *(ushort *)((int)param_4 + 2) = uVar1;
  *(ushort *)(param_4 + 1) = uVar2;
  param_4[2] = piVar9;
  return param_4;
}

