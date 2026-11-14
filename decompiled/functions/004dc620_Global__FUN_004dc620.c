// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dc620
// entry: 004dc620  size: 919


undefined4 * FUN_004dc620(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  int *local_40;
  int local_3c;
  int local_38;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_38 = 1;
  iVar4 = FUN_004e4000(param_1);
  if (iVar4 != 0) {
    local_38 = 2;
  }
  bVar11 = param_1 == param_2;
  piVar9 = (int *)param_1[2];
  cVar3 = FUN_004ada20(piVar9);
  if (cVar3 == '\x02') {
    puVar5 = (undefined4 *)FUN_004e5630(4,param_2);
    return puVar5;
  }
  bVar2 = cVar3 != '\x01' && bVar11;
  uVar1 = *(ushort *)((int)param_1 + 2);
  param_1 = (undefined4 *)local_38;
  if (iVar4 == 0) {
    FUN_004e57a0(local_30);
    iVar4 = 1;
    if (uVar1 != 0) {
      iVar10 = 0xc;
      do {
        iVar7 = iVar10 + -0xc + *piVar9;
        local_18 = *(undefined4 *)(iVar10 + -0xc + *piVar9);
        local_14 = *(undefined4 *)(iVar7 + 4);
        local_10 = *(undefined4 *)(iVar7 + 8);
        uVar6 = FUN_004e7620(&local_18,local_24,local_30);
        iVar7 = FUN_004e7290(uVar6);
        if (iVar7 == -1) {
          puVar5 = (undefined4 *)FUN_004e5630(3,param_2);
          return puVar5;
        }
        if (iVar7 != 0) {
          param_1 = (undefined4 *)0x2;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar4 <= (int)(uint)uVar1);
    }
    if ((param_3 == 0) && (param_1 == (undefined4 *)0x2)) {
      if (bVar2) {
        FUN_004ad6d0(piVar9);
      }
      puVar5 = (undefined4 *)FUN_004e5630(3,param_2);
      return puVar5;
    }
  }
  uVar8 = (int)param_1 * (uint)uVar1 * 0xc;
  local_40 = piVar9;
  if (bVar2) {
    if (cVar3 == '\x01' || !bVar11) {
LAB_004dc7f4:
      puVar5 = (undefined4 *)FUN_004e5630(4,param_2);
      return puVar5;
    }
    if (param_1 != (undefined4 *)local_38) {
      local_40 = (int *)FUN_004ad670(piVar9,uVar8 & 0xffff);
      piVar9 = local_40;
      goto LAB_004dc7d7;
    }
    if (piVar9 == (int *)0x0) goto LAB_004dc7f4;
  }
  else {
    piVar9 = (int *)FUN_004ad630(uVar8 & 0xffff);
LAB_004dc7d7:
    if (piVar9 == (int *)0x0) {
      puVar5 = (undefined4 *)FUN_004e5630(4,param_2);
      return puVar5;
    }
  }
  local_3c = 1;
  local_38 = 1;
  iVar4 = 1;
  if (uVar1 != 0) {
    iVar7 = 0xc;
    iVar10 = ((uint)uVar1 * 3 + 3) * 4;
    do {
      iVar4 = iVar7 + -0xc + *local_40;
      local_18 = *(undefined4 *)(iVar7 + -0xc + *local_40);
      local_14 = *(undefined4 *)(iVar4 + 4);
      local_10 = *(undefined4 *)(iVar4 + 8);
      if ((param_1 == (undefined4 *)0x2) && (iVar4 = FUN_004e4000(&local_18), iVar4 == 1)) {
        iVar4 = iVar10 + -0xc + *local_40;
        local_c = *(undefined4 *)(iVar10 + -0xc + *local_40);
        local_8 = *(undefined4 *)(iVar4 + 4);
        local_4 = *(undefined4 *)(iVar4 + 8);
      }
      FUN_004e22d0(&local_18,param_2,param_3);
      iVar4 = FUN_004e4020(param_2);
      if (iVar4 != 0) {
        FUN_004ad6d0(piVar9);
        return param_2;
      }
      iVar4 = FUN_004e4000(param_2);
      if (iVar4 != 0) {
        local_3c = 2;
      }
      puVar5 = (undefined4 *)(iVar7 + -0xc + *piVar9);
      *puVar5 = *param_2;
      puVar5[1] = param_2[1];
      puVar5[2] = param_2[2];
      if (param_1 == (undefined4 *)0x2) {
        puVar5 = (undefined4 *)(iVar10 + -0xc + *piVar9);
        *puVar5 = param_2[3];
        puVar5[1] = param_2[4];
        puVar5[2] = param_2[5];
      }
      iVar7 = iVar7 + 0xc;
      local_38 = local_38 + 1;
      iVar10 = iVar10 + 0xc;
      iVar4 = local_3c;
    } while (local_38 <= (int)(uint)uVar1);
  }
  if (param_1 == (undefined4 *)0x2) {
    if (iVar4 != 1) {
LAB_004dc99f:
      *(undefined1 *)param_2 = 0xa0;
      *(ushort *)((int)param_2 + 2) = uVar1;
      param_2[2] = piVar9;
      return param_2;
    }
    piVar9 = (int *)FUN_004ad670(piVar9,((uint)uVar1 * 3 & 0x3fff) << 2);
    if (piVar9 == (int *)0x0) {
      puVar5 = (undefined4 *)FUN_004e5630(4,param_2);
      return puVar5;
    }
  }
  else if (iVar4 != 1) goto LAB_004dc99f;
  *(undefined1 *)param_2 = 0x20;
  *(ushort *)((int)param_2 + 2) = uVar1;
  param_2[2] = piVar9;
  return param_2;
}

