// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dd160
// entry: 004dd160  size: 614


char * FUN_004dd160(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4,
                   undefined4 param_5)

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
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_3c = 1;
  iVar5 = FUN_004e4000(param_2);
  if (iVar5 != 0) {
    local_3c = 2;
  }
  piVar3 = *(int **)(param_2 + 8);
  cVar4 = FUN_004ada20(piVar3);
  if (cVar4 != '\x02') {
    uVar2 = *(ushort *)(param_2 + 2);
    if (cVar4 != '\x01' && param_2 == param_3) {
      piVar6 = piVar3;
      if (cVar4 == '\x01' || param_2 != param_3) goto LAB_004dd1f4;
    }
    else {
      piVar6 = (int *)FUN_004ad630((local_3c * (uint)uVar2 * 3 & 0x3fff) << 2);
    }
    if (piVar6 != (int *)0x0) {
      local_38 = 1;
      if (uVar2 != 0) {
        iVar5 = 0xc;
        iVar9 = ((uint)uVar2 * 3 + 3) * 4;
        do {
          iVar8 = *piVar3 + -0xc + iVar5;
          local_30 = *(undefined4 *)(*piVar3 + -0xc + iVar5);
          local_2c = *(undefined4 *)(iVar8 + 4);
          local_28 = *(undefined4 *)(iVar8 + 8);
          if ((local_3c == 2) && (iVar8 = FUN_004e4000(&local_30), iVar8 == 1)) {
            iVar8 = *piVar3 + -0xc + iVar9;
            local_24 = *(undefined4 *)(*piVar3 + -0xc + iVar9);
            local_20 = *(undefined4 *)(iVar8 + 4);
            local_1c = *(undefined4 *)(iVar8 + 8);
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
          iVar8 = FUN_004e4020(param_3);
          if (iVar8 != 0) {
            FUN_004ad6d0(piVar6);
            return param_3;
          }
          puVar1 = (undefined4 *)(*piVar6 + -0xc + iVar5);
          *puVar1 = *(undefined4 *)param_3;
          puVar1[1] = *(undefined4 *)(param_3 + 4);
          puVar1[2] = *(undefined4 *)(param_3 + 8);
          if (local_3c == 2) {
            puVar1 = (undefined4 *)(*piVar6 + -0xc + iVar9);
            *puVar1 = *(undefined4 *)(param_3 + 0xc);
            puVar1[1] = *(undefined4 *)(param_3 + 0x10);
            puVar1[2] = *(undefined4 *)(param_3 + 0x14);
          }
          iVar5 = iVar5 + 0xc;
          local_38 = local_38 + 1;
          iVar9 = iVar9 + 0xc;
        } while (local_38 <= (int)(uint)uVar2);
      }
      *(ushort *)(param_3 + 2) = uVar2;
      *param_3 = (-(local_3c != 1) & 0x80U) + 0x20;
      *(int **)(param_3 + 8) = piVar6;
      return param_3;
    }
  }
LAB_004dd1f4:
  pcVar7 = (char *)FUN_004e5630(4,param_3);
  return pcVar7;
}

