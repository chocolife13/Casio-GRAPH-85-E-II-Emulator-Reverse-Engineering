// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dff60
// entry: 004dff60  size: 641


char * FUN_004dff60(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4,
                   undefined4 param_5)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_40;
  int local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_40 = 1;
  iVar6 = FUN_004e4000(param_2);
  if (iVar6 != 0) {
    local_40 = 2;
  }
  piVar4 = *(int **)(param_2 + 8);
  cVar5 = FUN_004ada20(piVar4);
  if (cVar5 != '\x02') {
    uVar2 = *(ushort *)(param_2 + 4);
    uVar3 = *(ushort *)(param_2 + 2);
    uVar10 = (uint)uVar2 * (uint)uVar3;
    if (cVar5 != '\x01' && param_2 == param_3) {
      piVar7 = piVar4;
      if (cVar5 == '\x01' || param_2 != param_3) goto LAB_004e0005;
    }
    else {
      piVar7 = (int *)FUN_004ad630((local_40 * uVar10 * 3 & 0x3fff) << 2);
    }
    if (piVar7 != (int *)0x0) {
      local_3c = 1;
      uVar10 = uVar10 & 0xffff;
      if (uVar10 != 0) {
        iVar6 = 0xc;
        iVar11 = (uVar10 * 3 + 3) * 4;
        do {
          iVar9 = *piVar4 + -0xc + iVar6;
          local_30 = *(undefined4 *)(*piVar4 + -0xc + iVar6);
          local_2c = *(undefined4 *)(iVar9 + 4);
          local_28 = *(undefined4 *)(iVar9 + 8);
          if ((local_40 == 2) && (iVar9 = FUN_004e4000(&local_30), iVar9 == 1)) {
            iVar9 = *piVar4 + -0xc + iVar11;
            local_24 = *(undefined4 *)(*piVar4 + -0xc + iVar11);
            local_20 = *(undefined4 *)(iVar9 + 4);
            local_1c = *(undefined4 *)(iVar9 + 8);
          }
          switch(param_1) {
          case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e3e70(&local_30,param_3);
            break;
          default:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e5630(3,param_3);
            break;
          case 6:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e26b0(&local_30,param_3,param_4);
            break;
          case 7:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e56c0(&local_30,param_3);
            break;
          case 0xb:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e3900(&local_30,param_3);
            break;
          case 0x12:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e3f30(&local_30,param_3,param_5);
            break;
          case 0x13:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e3720(&local_30,param_3,local_18);
          }
          iVar9 = FUN_004e4020(param_3);
          if (iVar9 != 0) {
            FUN_004ad6d0(piVar7);
            return param_3;
          }
          puVar1 = (undefined4 *)(*piVar7 + -0xc + iVar6);
          *puVar1 = *(undefined4 *)param_3;
          puVar1[1] = *(undefined4 *)(param_3 + 4);
          puVar1[2] = *(undefined4 *)(param_3 + 8);
          if (local_40 == 2) {
            puVar1 = (undefined4 *)(*piVar7 + -0xc + iVar11);
            *puVar1 = *(undefined4 *)(param_3 + 0xc);
            puVar1[1] = *(undefined4 *)(param_3 + 0x10);
            puVar1[2] = *(undefined4 *)(param_3 + 0x14);
          }
          iVar6 = iVar6 + 0xc;
          local_3c = local_3c + 1;
          iVar11 = iVar11 + 0xc;
        } while (local_3c <= (int)uVar10);
      }
      *(ushort *)(param_3 + 2) = uVar3;
      *(ushort *)(param_3 + 4) = uVar2;
      *param_3 = (-(local_40 != 1) & 0x80U) + 0x30;
      *(int **)(param_3 + 8) = piVar7;
      return param_3;
    }
  }
LAB_004e0005:
  pcVar8 = (char *)FUN_004e5630(4,param_3);
  return pcVar8;
}

