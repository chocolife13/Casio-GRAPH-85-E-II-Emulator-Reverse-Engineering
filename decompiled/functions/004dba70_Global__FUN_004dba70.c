// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dba70
// entry: 004dba70  size: 731


undefined4 *
FUN_004dba70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
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
  
  puVar7 = param_3;
  local_28 = 1;
  iVar5 = FUN_004e4000(param_2);
  if (iVar5 != 0) {
    local_28 = 2;
  }
  piVar3 = (int *)param_2[2];
  cVar4 = FUN_004ada20(piVar3);
  if (cVar4 != '\x02') {
    uVar2 = *(ushort *)((int)param_2 + 2);
    if (cVar4 != '\x01' && param_2 == param_3) {
      piVar6 = piVar3;
      if (cVar4 == '\x01' || param_2 != param_3) goto LAB_004dbb02;
    }
    else {
      piVar6 = (int *)FUN_004ad630((local_28 * (uint)uVar2 * 3 & 0x3fff) << 2);
    }
    if (piVar6 != (int *)0x0) {
      local_24 = 1;
      param_3 = (undefined4 *)0x1;
      iVar5 = 1;
      if (uVar2 != 0) {
        iVar8 = 0xc;
        iVar9 = ((uint)uVar2 * 3 + 3) * 4;
        do {
          iVar5 = iVar8 + -0xc + *piVar3;
          local_18 = *(undefined4 *)(iVar8 + -0xc + *piVar3);
          local_14 = *(undefined4 *)(iVar5 + 4);
          local_10 = *(undefined4 *)(iVar5 + 8);
          if ((local_28 == 2) && (iVar5 = FUN_004e4000(&local_18), iVar5 == 1)) {
            iVar5 = iVar9 + -0xc + *piVar3;
            local_c = *(undefined4 *)(iVar9 + -0xc + *piVar3);
            local_8 = *(undefined4 *)(iVar5 + 4);
            local_4 = *(undefined4 *)(iVar5 + 8);
          }
          switch(param_1) {
          case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e1880(&local_18,puVar7,param_4);
            break;
          default:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e5630(3,puVar7);
            break;
          case 9:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e1fc0(&local_18,puVar7,param_4);
            break;
          case 10:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e2050(&local_18,puVar7,param_4);
            break;
          case 0xb:
                    /* WARNING: This code block may not be properly labeled as switch case */
            FUN_004e20e0(&local_18,puVar7,param_4);
            break;
          case 0xc:
            FUN_004e2170(&local_18,puVar7,param_4);
            break;
          case 0x15:
            FUN_004e1940(&local_18,puVar7,param_4);
          }
          iVar5 = FUN_004e4020(puVar7);
          if (iVar5 != 0) {
            FUN_004ad6d0(piVar6);
            return puVar7;
          }
          iVar5 = FUN_004e4000(puVar7);
          if (iVar5 != 0) {
            local_24 = 2;
          }
          puVar1 = (undefined4 *)(*piVar6 + -0xc + iVar8);
          *puVar1 = *puVar7;
          puVar1[1] = puVar7[1];
          puVar1[2] = puVar7[2];
          if (local_28 == 2) {
            puVar1 = (undefined4 *)(*piVar6 + -0xc + iVar9);
            *puVar1 = puVar7[3];
            puVar1[1] = puVar7[4];
            puVar1[2] = puVar7[5];
          }
          param_3 = (undefined4 *)((int)param_3 + 1);
          iVar8 = iVar8 + 0xc;
          iVar9 = iVar9 + 0xc;
          iVar5 = local_24;
        } while ((int)param_3 <= (int)(uint)uVar2);
      }
      if (local_28 == 2) {
        if (iVar5 != 1) {
LAB_004dbd37:
          *(undefined1 *)puVar7 = 0xa0;
          *(ushort *)((int)puVar7 + 2) = uVar2;
          puVar7[2] = piVar6;
          return puVar7;
        }
        piVar6 = (int *)FUN_004ad670(piVar6,((uint)uVar2 * 3 & 0x3fff) << 2);
        if (piVar6 == (int *)0x0) {
          puVar7 = (undefined4 *)FUN_004e5630(4,puVar7);
          return puVar7;
        }
      }
      else if (iVar5 != 1) goto LAB_004dbd37;
      *(undefined1 *)puVar7 = 0x20;
      *(ushort *)((int)puVar7 + 2) = uVar2;
      puVar7[2] = piVar6;
      return puVar7;
    }
  }
LAB_004dbb02:
  puVar7 = (undefined4 *)FUN_004e5630(4,param_3);
  return puVar7;
}

