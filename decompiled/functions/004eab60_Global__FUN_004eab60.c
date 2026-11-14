// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004eab60
// entry: 004eab60  size: 889


undefined4 FUN_004eab60(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_9c;
  int local_98;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_30 [24];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar3 = FUN_004e4000(param_2);
  iVar4 = FUN_004e4000(param_3);
  if (iVar4 == 0) {
    return 1;
  }
  piVar2 = (int *)param_3[2];
  piVar5 = (int *)param_2[2];
  iVar4 = param_1 * param_1;
  local_68 = iVar4;
  if ((iVar3 != 0) ||
     (piVar5 = (int *)FUN_004ad670(piVar5,(iVar4 * 3 & 0x1fffU) << 3), piVar5 != (int *)0x0)) {
    FUN_004e5780(local_c);
    FUN_004e57a0(local_18);
    if (0 < param_1) {
      local_90 = 0xc;
      local_8c = 0xc;
      iVar6 = (param_1 * 3 + 3) * 4;
      iVar3 = param_1 * 0xc;
      local_88 = (iVar4 * 3 + 3) * 4;
      local_9c = param_1;
      local_64 = iVar3;
      do {
        puVar1 = (undefined4 *)(local_90 + -0xc + *piVar2);
        local_60 = *puVar1;
        local_5c = puVar1[1];
        local_58 = puVar1[2];
        puVar1 = (undefined4 *)(iVar6 + -0xc + *piVar2);
        local_54 = *puVar1;
        local_50 = puVar1[1];
        local_4c = puVar1[2];
        iVar7 = FUN_004e4000(&local_60);
        if (iVar7 != 0) {
          FUN_004e23b0(&local_60,&local_48,1);
          FUN_004e3900(&local_60,local_30);
          FUN_004e0ef0(local_30,&local_48,local_30,1);
          local_6c = param_1;
          iVar3 = local_8c;
          iVar4 = local_88;
          do {
            iVar7 = *piVar5 + -0xc + iVar3;
            local_84 = *(undefined4 *)(*piVar5 + -0xc + iVar3);
            local_80 = *(undefined4 *)(iVar7 + 4);
            local_7c = *(undefined4 *)(iVar7 + 8);
            iVar7 = iVar4 + -0xc + *piVar5;
            local_78 = *(undefined4 *)(iVar4 + -0xc + *piVar5);
            local_74 = *(undefined4 *)(iVar7 + 4);
            local_70 = *(undefined4 *)(iVar7 + 8);
            FUN_004e0c40(&local_84,local_30,&local_84,1);
            puVar1 = (undefined4 *)(*piVar5 + -0xc + iVar3);
            iVar3 = iVar3 + 0xc;
            *puVar1 = local_84;
            puVar1[1] = local_80;
            puVar1[2] = local_7c;
            puVar1 = (undefined4 *)(iVar4 + -0xc + *piVar5);
            iVar4 = iVar4 + 0xc;
            *puVar1 = local_78;
            puVar1[1] = local_74;
            puVar1[2] = local_70;
            local_6c = local_6c + -1;
          } while (local_6c != 0);
          puVar1 = (undefined4 *)(local_90 + -0xc + *piVar2);
          *puVar1 = local_48;
          puVar1[1] = local_44;
          puVar1[2] = local_40;
          local_6c = 0;
          iVar3 = local_64;
          iVar4 = local_68;
        }
        local_88 = local_88 + iVar3;
        local_8c = local_8c + iVar3;
        local_90 = local_90 + 0xc;
        iVar6 = iVar6 + 0xc;
        local_9c = local_9c + -1;
      } while (local_9c != 0);
    }
    local_9c = 1;
    if (0 < iVar4) {
      local_98 = 0xc;
      do {
        iVar3 = local_98 + -0xc + *piVar5;
        local_84 = *(undefined4 *)(local_98 + -0xc + *piVar5);
        local_80 = *(undefined4 *)(iVar3 + 4);
        local_7c = *(undefined4 *)(iVar3 + 8);
        iVar3 = FUN_004e4000(&local_84);
        if (iVar3 != 0) {
          *(undefined1 *)param_2 = 0xb0;
          goto LAB_004eae73;
        }
        local_9c = local_9c + 1;
        local_98 = local_98 + 0xc;
      } while (local_9c <= iVar4);
    }
    piVar5 = (int *)FUN_004ad670(piVar5,(iVar4 * 3 & 0x3fffU) << 2);
    if (piVar5 != (int *)0x0) {
      *(undefined1 *)param_2 = 0x30;
LAB_004eae73:
      param_2[2] = piVar5;
      iVar3 = FUN_004ad670(piVar2,(param_1 * 3 & 0x3fffU) << 2);
      if (iVar3 != 0) {
        *(undefined1 *)param_3 = 0x30;
        param_3[2] = iVar3;
        return 1;
      }
    }
  }
  FUN_004e5630(4,param_2);
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
  }
  return 0;
}

