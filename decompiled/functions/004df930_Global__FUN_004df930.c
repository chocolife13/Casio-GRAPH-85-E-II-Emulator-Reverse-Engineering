// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004df930
// entry: 004df930  size: 711


char * FUN_004df930(int param_1,char *param_2,char *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_30;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pcVar7 = param_3;
  local_30 = 1;
  iVar6 = FUN_004e4000(param_2);
  if (iVar6 != 0) {
    local_30 = 2;
  }
  piVar4 = *(int **)(param_2 + 8);
  cVar5 = FUN_004ada20(piVar4);
  if (cVar5 == '\x02') {
    pcVar7 = (char *)FUN_004e5630(4,param_3);
    return pcVar7;
  }
  uVar2 = *(ushort *)(param_2 + 4);
  uVar3 = *(ushort *)(param_2 + 2);
  uVar11 = (uint)uVar2 * (uint)uVar3;
  if (cVar5 != '\x01' && param_2 == param_3) {
    if ((cVar5 == '\x01' || param_2 != param_3) || (piVar8 = piVar4, piVar4 == (int *)0x0)) {
      pcVar7 = (char *)FUN_004e5630(4,param_3);
      return pcVar7;
    }
  }
  else {
    piVar8 = (int *)FUN_004ad630((local_30 * uVar11 * 3 & 0x3fff) << 2);
    if (piVar8 == (int *)0x0) {
      pcVar7 = (char *)FUN_004e5630(4,param_3);
      return pcVar7;
    }
  }
  uVar9 = uVar11 & 0xffff;
  param_3 = (char *)0x1;
  local_24 = 1;
  if (uVar9 != 0) {
    iVar6 = 0xc;
    iVar12 = (uVar9 * 3 + 3) * 4;
    do {
      iVar10 = iVar6 + -0xc + *piVar4;
      local_18 = *(undefined4 *)(iVar6 + -0xc + *piVar4);
      local_14 = *(undefined4 *)(iVar10 + 4);
      local_10 = *(undefined4 *)(iVar10 + 8);
      if ((local_30 == 2) && (iVar10 = FUN_004e4000(&local_18), iVar10 == 1)) {
        iVar10 = *piVar4 + -0xc + iVar12;
        local_c = *(undefined4 *)(*piVar4 + -0xc + iVar12);
        local_8 = *(undefined4 *)(iVar10 + 4);
        local_4 = *(undefined4 *)(iVar10 + 8);
      }
      if (param_1 == 0x1d) {
        FUN_004e2470(&local_18,pcVar7,param_4);
      }
      else if (param_1 == 0x1e) {
        FUN_004e2530(&local_18,pcVar7,param_4);
      }
      else if (param_1 == 0x1f) {
        FUN_004e25f0(&local_18,pcVar7,param_4);
      }
      else {
        FUN_004e5630(3,pcVar7);
      }
      iVar10 = FUN_004e4020(pcVar7);
      if (iVar10 != 0) {
        FUN_004ad6d0(piVar8);
        return pcVar7;
      }
      iVar10 = FUN_004e4000(pcVar7);
      if (iVar10 != 0) {
        param_3 = (char *)0x2;
      }
      puVar1 = (undefined4 *)(*piVar8 + -0xc + iVar6);
      *puVar1 = *(undefined4 *)pcVar7;
      puVar1[1] = *(undefined4 *)(pcVar7 + 4);
      puVar1[2] = *(undefined4 *)(pcVar7 + 8);
      if (local_30 == 2) {
        puVar1 = (undefined4 *)(*piVar8 + -0xc + iVar12);
        *puVar1 = *(undefined4 *)(pcVar7 + 0xc);
        puVar1[1] = *(undefined4 *)(pcVar7 + 0x10);
        puVar1[2] = *(undefined4 *)(pcVar7 + 0x14);
      }
      local_24 = local_24 + 1;
      iVar6 = iVar6 + 0xc;
      iVar12 = iVar12 + 0xc;
    } while (local_24 <= (int)uVar9);
  }
  if ((param_3 != (char *)local_30) &&
     (piVar8 = (int *)FUN_004ad670(piVar8,((int)param_3 * uVar11 * 3 & 0x3fff) << 2),
     piVar8 == (int *)0x0)) {
    pcVar7 = (char *)FUN_004e5630(4,pcVar7);
    return pcVar7;
  }
  *(ushort *)(pcVar7 + 2) = uVar3;
  *(ushort *)(pcVar7 + 4) = uVar2;
  *pcVar7 = (-(param_3 != (char *)0x1) & 0x80U) + 0x30;
  *(int **)(pcVar7 + 8) = piVar8;
  return pcVar7;
}

