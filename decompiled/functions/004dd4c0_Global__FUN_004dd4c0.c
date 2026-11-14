// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004dd4c0
// entry: 004dd4c0  size: 720


undefined4 *
FUN_004dd4c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
            undefined4 param_5)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_28;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = 1;
  iVar4 = FUN_004e4000(param_2);
  if (iVar4 != 0) {
    local_28 = 2;
  }
  bVar9 = param_2 == param_3;
  piVar2 = (int *)param_2[2];
  cVar3 = FUN_004ada20(piVar2);
  if (cVar3 != '\x02') {
    uVar1 = *(ushort *)((int)param_2 + 2);
    param_2 = (undefined4 *)param_4;
    if (local_28 == 2) {
      param_2 = (undefined4 *)0x1;
    }
    if (cVar3 != '\x01' && bVar9) {
      piVar5 = piVar2;
      if (cVar3 == '\x01' || !bVar9) goto LAB_004dd568;
    }
    else {
      piVar5 = (int *)FUN_004ad630((local_28 * (uint)uVar1 * 3 & 0x3fff) << 2);
    }
    if (piVar5 != (int *)0x0) {
      local_24 = 1;
      param_4 = 1;
      iVar4 = 1;
      if (uVar1 != 0) {
        iVar7 = 0xc;
        iVar8 = ((uint)uVar1 * 3 + 3) * 4;
        do {
          iVar4 = iVar7 + -0xc + *piVar2;
          local_18 = *(undefined4 *)(iVar7 + -0xc + *piVar2);
          local_14 = *(undefined4 *)(iVar4 + 4);
          local_10 = *(undefined4 *)(iVar4 + 8);
          if ((local_28 == 2) && (iVar4 = FUN_004e4000(&local_18), iVar4 == 1)) {
            iVar4 = iVar8 + -0xc + *piVar2;
            local_c = *(undefined4 *)(iVar8 + -0xc + *piVar2);
            local_8 = *(undefined4 *)(iVar4 + 4);
            local_4 = *(undefined4 *)(iVar4 + 8);
          }
          switch(param_1) {
          case 0xf:
            FUN_004e1be0(&local_18,param_3,param_2,param_5);
            break;
          case 0x10:
            FUN_004e1c60(&local_18,param_3,param_2,param_5);
            break;
          case 0x11:
            FUN_004e1ce0(&local_18,param_3,param_2,param_5);
            break;
          default:
            FUN_004e5630(3,param_3);
            break;
          case 0x14:
            FUN_004e1f40(&local_18,param_3,param_2,param_5);
          }
          iVar4 = FUN_004e4020(param_3);
          if (iVar4 != 0) {
            FUN_004ad6d0(piVar5);
            return param_3;
          }
          iVar4 = FUN_004e4000(param_3);
          if (iVar4 != 0) {
            local_24 = 2;
          }
          puVar6 = (undefined4 *)(*piVar5 + -0xc + iVar7);
          *puVar6 = *param_3;
          puVar6[1] = param_3[1];
          puVar6[2] = param_3[2];
          if (local_28 == 2) {
            puVar6 = (undefined4 *)(*piVar5 + -0xc + iVar8);
            *puVar6 = param_3[3];
            puVar6[1] = param_3[4];
            puVar6[2] = param_3[5];
          }
          param_4 = param_4 + 1;
          iVar7 = iVar7 + 0xc;
          iVar8 = iVar8 + 0xc;
          iVar4 = local_24;
        } while (param_4 <= (int)(uint)uVar1);
      }
      if (local_28 == 2) {
        if (iVar4 != 1) {
LAB_004dd77c:
          *(undefined1 *)param_3 = 0xa0;
          *(ushort *)((int)param_3 + 2) = uVar1;
          param_3[2] = piVar5;
          return param_3;
        }
        piVar5 = (int *)FUN_004ad670(piVar5,((uint)uVar1 * 3 & 0x3fff) << 2);
        if (piVar5 == (int *)0x0) {
          puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
          return puVar6;
        }
      }
      else if (iVar4 != 1) goto LAB_004dd77c;
      *(undefined1 *)param_3 = 0x20;
      *(ushort *)((int)param_3 + 2) = uVar1;
      param_3[2] = piVar5;
      return param_3;
    }
  }
LAB_004dd568:
  puVar6 = (undefined4 *)FUN_004e5630(4,param_3);
  return puVar6;
}

