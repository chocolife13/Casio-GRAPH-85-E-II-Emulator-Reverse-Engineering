// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dce50
// entry: 004dce50  size: 604


undefined4 *
FUN_004dce50(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int local_28;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = 1;
  iVar5 = FUN_004e4000(param_2);
  if (iVar5 != 0) {
    local_28 = 2;
  }
  bVar10 = param_2 == param_3;
  piVar2 = (int *)param_2[2];
  cVar4 = FUN_004ada20(piVar2);
  if (cVar4 != '\x02') {
    bVar3 = cVar4 != '\x01' && bVar10;
    uVar1 = *(ushort *)((int)param_2 + 2);
    uVar8 = (uint)uVar1;
    if (bVar3) {
      param_2 = piVar2;
      if (cVar4 == '\x01' || !bVar10) goto LAB_004dceee;
    }
    else {
      param_2 = (int *)FUN_004ad630(uVar8 * 0xc & 0xffff);
    }
    if (param_2 != (int *)0x0) {
      local_24 = 1;
      if (uVar1 != 0) {
        iVar9 = 0xc;
        iVar5 = (uVar8 * 3 + 3) * 4;
        do {
          iVar7 = *piVar2 + -0xc + iVar9;
          local_18 = *(undefined4 *)(*piVar2 + -0xc + iVar9);
          local_14 = *(undefined4 *)(iVar7 + 4);
          local_10 = *(undefined4 *)(iVar7 + 8);
          if ((local_28 == 2) && (iVar7 = FUN_004e4000(&local_18), iVar7 == 1)) {
            iVar7 = *piVar2 + -0xc + iVar5;
            local_c = *(undefined4 *)(*piVar2 + -0xc + iVar5);
            local_8 = *(undefined4 *)(iVar7 + 4);
            local_4 = *(undefined4 *)(iVar7 + 8);
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
          iVar7 = FUN_004e4020(param_3);
          if (iVar7 != 0) {
            FUN_004ad6d0(param_2);
            return param_3;
          }
          iVar5 = iVar5 + 0xc;
          puVar6 = (undefined4 *)(*param_2 + -0xc + iVar9);
          iVar9 = iVar9 + 0xc;
          *puVar6 = *param_3;
          puVar6[1] = param_3[1];
          puVar6[2] = param_3[2];
          local_24 = local_24 + 1;
        } while (local_24 <= (int)uVar8);
      }
      if (((bVar3) && (local_28 == 2)) &&
         (param_2 = (int *)FUN_004ad670(param_2,uVar8 * 0xc & 0xffff), param_2 == (int *)0x0)) {
        puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
        return puVar6;
      }
      *(undefined1 *)param_3 = 0x20;
      *(ushort *)((int)param_3 + 2) = uVar1;
      param_3[2] = param_2;
      return param_3;
    }
  }
LAB_004dceee:
  puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
  return puVar6;
}

