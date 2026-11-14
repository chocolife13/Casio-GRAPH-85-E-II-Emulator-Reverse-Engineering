// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dc9c0
// entry: 004dc9c0  size: 619


char * FUN_004dc9c0(int param_1,char *param_2,char *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int local_28;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pcVar7 = param_3;
  local_28 = 1;
  iVar5 = FUN_004e4000(param_2);
  if (iVar5 != 0) {
    local_28 = 2;
  }
  piVar3 = *(int **)(param_2 + 8);
  cVar4 = FUN_004ada20(piVar3);
  if (cVar4 != '\x02') {
    uVar2 = *(ushort *)(param_2 + 2);
    if (cVar4 != '\x01' && param_2 == param_3) {
      piVar6 = piVar3;
      if (cVar4 == '\x01' || param_2 != param_3) goto LAB_004dca50;
    }
    else {
      piVar6 = (int *)FUN_004ad630((local_28 * (uint)uVar2 * 3 & 0x3fff) << 2);
    }
    if (piVar6 != (int *)0x0) {
      param_3 = (char *)0x1;
      local_24 = 1;
      if (uVar2 != 0) {
        iVar5 = 0xc;
        iVar9 = ((uint)uVar2 * 3 + 3) * 4;
        do {
          iVar8 = iVar5 + -0xc + *piVar3;
          local_18 = *(undefined4 *)(iVar5 + -0xc + *piVar3);
          local_14 = *(undefined4 *)(iVar8 + 4);
          local_10 = *(undefined4 *)(iVar8 + 8);
          if ((local_28 == 2) && (iVar8 = FUN_004e4000(&local_18), iVar8 == 1)) {
            iVar8 = *piVar3 + -0xc + iVar9;
            local_c = *(undefined4 *)(*piVar3 + -0xc + iVar9);
            local_8 = *(undefined4 *)(iVar8 + 4);
            local_4 = *(undefined4 *)(iVar8 + 8);
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
          iVar8 = FUN_004e4020(pcVar7);
          if (iVar8 != 0) {
            FUN_004ad6d0(piVar6);
            return pcVar7;
          }
          iVar8 = FUN_004e4000(pcVar7);
          if (iVar8 != 0) {
            param_3 = (char *)0x2;
          }
          puVar1 = (undefined4 *)(*piVar6 + -0xc + iVar5);
          *puVar1 = *(undefined4 *)pcVar7;
          puVar1[1] = *(undefined4 *)(pcVar7 + 4);
          puVar1[2] = *(undefined4 *)(pcVar7 + 8);
          if (local_28 == 2) {
            puVar1 = (undefined4 *)(*piVar6 + -0xc + iVar9);
            *puVar1 = *(undefined4 *)(pcVar7 + 0xc);
            puVar1[1] = *(undefined4 *)(pcVar7 + 0x10);
            puVar1[2] = *(undefined4 *)(pcVar7 + 0x14);
          }
          local_24 = local_24 + 1;
          iVar5 = iVar5 + 0xc;
          iVar9 = iVar9 + 0xc;
        } while (local_24 <= (int)(uint)uVar2);
      }
      if ((param_3 != (char *)local_28) &&
         (piVar6 = (int *)FUN_004ad670(piVar6,((int)param_3 * (uint)uVar2 * 3 & 0x3fff) << 2),
         piVar6 == (int *)0x0)) {
        pcVar7 = (char *)FUN_004e5630(4,pcVar7);
        return pcVar7;
      }
      *(ushort *)(pcVar7 + 2) = uVar2;
      *pcVar7 = (-(param_3 != (char *)0x1) & 0x80U) + 0x20;
      *(int **)(pcVar7 + 8) = piVar6;
      return pcVar7;
    }
  }
LAB_004dca50:
  pcVar7 = (char *)FUN_004e5630(4,param_3);
  return pcVar7;
}

