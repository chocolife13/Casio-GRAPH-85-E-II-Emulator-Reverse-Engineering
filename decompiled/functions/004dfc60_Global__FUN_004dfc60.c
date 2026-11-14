// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dfc60
// entry: 004dfc60  size: 675


undefined4 *
FUN_004dfc60(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  int local_2c;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_2c = 1;
  iVar6 = FUN_004e4000(param_2);
  if (iVar6 != 0) {
    local_2c = 2;
  }
  piVar3 = (int *)param_2[2];
  cVar5 = FUN_004ada20(piVar3);
  if (cVar5 != '\x02') {
    bVar4 = cVar5 != '\x01' && param_2 == param_3;
    sVar1 = *(short *)(param_2 + 1);
    sVar2 = *(short *)((int)param_2 + 2);
    uVar11 = sVar1 * sVar2;
    sVar9 = uVar11 * 0xc;
    if (bVar4) {
      if ((cVar5 == '\x01' || param_2 != param_3) || (param_2 = piVar3, piVar3 == (int *)0x0)) {
        puVar7 = (undefined4 *)FUN_004e5630(4,param_3);
        return puVar7;
      }
    }
    else {
      param_2 = (int *)FUN_004ad630(sVar9);
      if (param_2 == (int *)0x0) {
        puVar7 = (undefined4 *)FUN_004e5630(4,param_3);
        return puVar7;
      }
    }
    uVar12 = (uint)uVar11;
    local_24 = 1;
    if (uVar12 != 0) {
      iVar6 = 0xc;
      iVar10 = (uVar12 * 3 + 3) * 4;
      do {
        iVar8 = *piVar3 + -0xc + iVar6;
        local_18 = *(undefined4 *)(*piVar3 + -0xc + iVar6);
        local_14 = *(undefined4 *)(iVar8 + 4);
        local_10 = *(undefined4 *)(iVar8 + 8);
        if ((local_2c == 2) && (iVar8 = FUN_004e4000(&local_18), iVar8 == 1)) {
          iVar8 = *piVar3 + -0xc + iVar10;
          local_c = *(undefined4 *)(*piVar3 + -0xc + iVar10);
          local_8 = *(undefined4 *)(iVar8 + 4);
          local_4 = *(undefined4 *)(iVar8 + 8);
        }
        switch(param_1) {
        case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_004e23b0(&local_18,param_3,param_5);
          break;
        default:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_004e5630(3,param_3);
          break;
        case 0x19:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_004e28c0(&local_18,param_3,param_4,param_5);
          break;
        case 0x1a:
                    /* WARNING: This code block may not be properly labeled as switch case */
          FUN_004e3800(&local_18,param_3);
          break;
        case 0x1b:
          FUN_004e3870(&local_18,param_3);
        }
        iVar8 = FUN_004e4020(param_3);
        if (iVar8 != 0) {
          FUN_004ad6d0(param_2);
          return param_3;
        }
        iVar10 = iVar10 + 0xc;
        puVar7 = (undefined4 *)(iVar6 + -0xc + *param_2);
        iVar6 = iVar6 + 0xc;
        *puVar7 = *param_3;
        puVar7[1] = param_3[1];
        puVar7[2] = param_3[2];
        local_24 = local_24 + 1;
      } while (local_24 <= (int)uVar12);
    }
    if (((bVar4) && (local_2c == 2)) &&
       (param_2 = (int *)FUN_004ad670(param_2,sVar9), param_2 == (int *)0x0)) {
      puVar7 = (undefined4 *)FUN_004e5630(4,param_3);
      return puVar7;
    }
    *(short *)(param_3 + 1) = sVar1;
    *(undefined1 *)param_3 = 0x30;
    *(short *)((int)param_3 + 2) = sVar2;
    param_3[2] = param_2;
    return param_3;
  }
  puVar7 = (undefined4 *)FUN_004e5630(4,param_3);
  return puVar7;
}

