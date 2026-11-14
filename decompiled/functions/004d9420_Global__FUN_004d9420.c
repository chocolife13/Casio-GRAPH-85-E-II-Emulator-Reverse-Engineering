// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d9420
// entry: 004d9420  size: 2011


int FUN_004d9420(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_004e5780(&local_78);
  FUN_004e57a0(&local_3c);
  local_54 = 0x99999969;
  uStack_50 = 0x99999999;
  uStack_4c = CONCAT31(uStack_4c._1_3_,0x99);
  FUN_0052f840();
  FUN_004d9190(0,param_1 & 0xff,local_30);
  iVar3 = FUN_004e4020(local_30);
  if (iVar3 == 0) {
    iVar3 = FUN_004e4000(local_30);
    if (iVar3 != 0) {
      FUN_004e5630(0x19,param_3);
      return 0x19;
    }
    FUN_004d9190(0,param_1 & 0xff,local_30);
    if (param_2 == 0) {
      uVar4 = FUN_00527440(0,param_1);
      iVar3 = uVar4 * 0xc;
      piVar6 = (int *)FUN_004ad630(iVar3);
      if (piVar6 == (int *)0x0) {
LAB_004d966f:
        FUN_004e5630(4,param_3);
        return 4;
      }
      if (uVar4 != 0) {
        iVar9 = 0xc;
        uVar5 = uVar4;
        do {
          puVar8 = (undefined4 *)(*piVar6 + -0xc + iVar9);
          iVar9 = iVar9 + 0xc;
          uVar5 = uVar5 - 1;
          *puVar8 = local_3c;
          puVar8[1] = local_38;
          puVar8[2] = local_34;
        } while (uVar5 != 0);
      }
    }
    else {
      FUN_004d9190(0,param_2 & 0xff,local_18);
      iVar3 = FUN_004e4020(local_18);
      if (iVar3 != 0) {
        FUN_004e5630(3,param_3);
        return 3;
      }
      iVar3 = FUN_004e4000(local_18);
      if (iVar3 != 0) {
        FUN_004e5630(0x19,param_3);
        return 0x19;
      }
      uVar4 = FUN_00527440(0,param_1);
      uVar5 = FUN_00527440(0,param_2);
      if (uVar4 != uVar5) {
        FUN_004e5630(9,param_3);
        return 9;
      }
      FUN_004c5890(local_18,&local_6c);
      iVar3 = FUN_004e71d0(&local_78,&local_6c);
      if (iVar3 == 1) goto LAB_004d95c3;
      iVar3 = uVar4 * 0xc;
      piVar6 = (int *)FUN_004ad630(iVar3);
      if (piVar6 == (int *)0x0) goto LAB_004d966f;
      uVar5 = 1;
      if (uVar4 != 0) {
        iVar9 = 0xc;
        do {
          FUN_00527570(0,param_2,uVar5,&local_6c);
          uVar5 = uVar5 + 1;
          puVar8 = (undefined4 *)(*piVar6 + -0xc + iVar9);
          iVar9 = iVar9 + 0xc;
          *puVar8 = local_6c;
          puVar8[1] = local_68;
          puVar8[2] = local_64;
        } while (uVar5 <= uVar4);
      }
    }
    iVar9 = FUN_0052f820();
    if (iVar9 != 0) {
      FUN_004ad6d0(piVar6);
      FUN_004e5630(1,param_3);
      return 1;
    }
    piVar7 = (int *)FUN_004ad630(iVar3);
    if (piVar7 == (int *)0x0) {
      FUN_004ad6d0(piVar6);
      FUN_004e5630(4,param_3);
      return 4;
    }
    uVar5 = 1;
    if (uVar4 != 0) {
      local_94 = 0xc;
      do {
        FUN_00527570(0,param_1,uVar5,&local_6c);
        uVar5 = uVar5 + 1;
        puVar8 = (undefined4 *)(local_94 + -0xc + *piVar7);
        local_94 = local_94 + 0xc;
        *puVar8 = local_6c;
        puVar8[1] = local_68;
        puVar8[2] = local_64;
      } while (uVar5 <= uVar4);
    }
    iVar3 = FUN_0052f820();
    if (iVar3 != 0) {
      FUN_004ad6d0(piVar7);
      FUN_004ad6d0(piVar6);
      FUN_004e5630(1,param_3);
      return 1;
    }
    iVar3 = FUN_004c8e60(uVar4,piVar7,piVar6);
    if (iVar3 != 0) {
      FUN_004ad6d0(piVar7);
      FUN_004ad6d0(piVar6);
      FUN_004e5630(iVar3,param_3);
      return iVar3;
    }
    local_94 = uVar4 - 1;
    if (local_94 != 0) {
      iVar3 = local_94 * 0xc;
      do {
        puVar8 = (undefined4 *)(iVar3 + *piVar7);
        local_90 = *puVar8;
        local_8c = puVar8[1];
        local_88 = puVar8[2];
        iVar9 = iVar3 + -0xc + *piVar7;
        local_84 = *(undefined4 *)(iVar3 + -0xc + *piVar7);
        local_80 = *(undefined4 *)(iVar9 + 4);
        local_7c = *(undefined4 *)(iVar9 + 8);
        FUN_004e5640(&local_90,&local_90);
        FUN_004e5640(&local_84,&local_84);
        iVar9 = FUN_004e71d0(&local_90,&local_84);
        if (iVar9 != 0) {
          puVar8 = (undefined4 *)(*piVar6 + iVar3);
          local_90 = *puVar8;
          local_8c = puVar8[1];
          local_88 = puVar8[2];
          iVar9 = *piVar6 + -0xc + iVar3;
          local_84 = *(undefined4 *)(*piVar6 + -0xc + iVar3);
          local_80 = *(undefined4 *)(iVar9 + 4);
          local_7c = *(undefined4 *)(iVar9 + 8);
          FUN_004e6a00(&local_90,&local_84,&local_48);
          iVar9 = FUN_004e4020(&local_48);
          if (iVar9 != 0) {
            FUN_004ad6d0(piVar7);
            FUN_004ad6d0(piVar6);
            return 3;
          }
          iVar9 = *piVar6 + -0xc + iVar3;
          *(undefined4 *)(*piVar6 + -0xc + iVar3) = local_48;
          *(undefined4 *)(iVar9 + 4) = local_44;
          *(undefined4 *)(iVar9 + 8) = local_40;
          puVar8 = (undefined4 *)(*piVar6 + iVar3);
          *puVar8 = local_54;
          puVar8[1] = uStack_50;
          puVar8[2] = uStack_4c;
        }
        iVar3 = iVar3 + -0xc;
        local_94 = local_94 + -1;
      } while (local_94 != 0);
    }
    iVar3 = FUN_0052f820();
    if (iVar3 != 0) {
      FUN_004ad6d0();
      FUN_004ad6d0(piVar6);
      FUN_004e5630(1,param_3);
      return 1;
    }
    iVar3 = FUN_004c9300(uVar4,piVar6,piVar7);
    if (iVar3 != 0) {
      FUN_004ad6d0(piVar7);
      FUN_004ad6d0(piVar6);
      FUN_004e5630(iVar3,param_3);
      return iVar3;
    }
    puVar8 = (undefined4 *)*piVar6;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    *param_3 = *puVar8;
    param_3[1] = uVar1;
    param_3[2] = uVar2;
    param_3[3] = local_78;
    param_3[4] = local_74;
    param_3[5] = local_70;
    puVar8 = (undefined4 *)*piVar6;
    local_90 = *puVar8;
    local_8c = puVar8[1];
    local_88 = puVar8[2];
    FUN_004e5640(&local_90,&local_90);
    uVar5 = 2;
    if (1 < uVar4) {
      local_94 = 0x18;
      do {
        iVar3 = *piVar6 + -0xc + local_94;
        local_84 = *(undefined4 *)(*piVar6 + -0xc + local_94);
        local_80 = *(undefined4 *)(iVar3 + 4);
        local_7c = *(undefined4 *)(iVar3 + 8);
        FUN_004e5640(&local_84,&local_84);
        iVar3 = FUN_004e7210(&local_90,&local_84);
        if (iVar3 != 0) goto LAB_004d9ab1;
        uVar5 = uVar5 + 1;
        local_94 = local_94 + 0xc;
      } while (uVar5 <= uVar4);
    }
    iVar3 = FUN_0052f820();
    if (iVar3 != 0) {
      FUN_004ad6d0(piVar7);
      FUN_004ad6d0(piVar6);
      FUN_004e5630(1,param_3);
      return 1;
    }
    uVar5 = uVar4 + 1;
LAB_004d9ab1:
    uVar5 = uVar5 - 1;
    if (uVar5 <= uVar4) {
      FUN_004ad670(piVar7,uVar5 * 0x6c);
    }
    iVar3 = FUN_004c9110(uVar5,piVar7);
    if (iVar3 != 0) {
      FUN_004ad6d0(piVar7);
      FUN_004e5630(iVar3,param_3);
      return iVar3;
    }
    puVar8 = (undefined4 *)*piVar6;
    local_90 = *puVar8;
    local_8c = puVar8[1];
    local_88 = puVar8[2];
    *param_3 = local_90;
    param_3[1] = local_8c;
    param_3[3] = local_78;
    param_3[2] = local_88;
    param_3[4] = local_74;
    param_3[5] = local_70;
    FUN_004ad6d0(piVar6);
    iVar3 = FUN_005284b0(0,0,uVar5);
    if (iVar3 != 0) {
      FUN_004ad6d0(piVar7);
      FUN_004e5630(4,param_3);
      return 4;
    }
    uVar4 = 1;
    if (uVar5 != 0) {
      iVar3 = 0xc;
      do {
        iVar9 = iVar3 + -0xc + *piVar7;
        local_6c = *(undefined4 *)(iVar3 + -0xc + *piVar7);
        local_68 = *(undefined4 *)(iVar9 + 4);
        local_64 = *(undefined4 *)(iVar9 + 8);
        FUN_005278d0(0,0,uVar4,&local_6c);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0xc;
      } while (uVar4 <= uVar5);
    }
    FUN_004ad6d0(piVar7);
    iVar3 = FUN_0052f820();
    if (iVar3 == 0) {
      return 0;
    }
    FUN_004e5630(1,param_3);
    return 1;
  }
LAB_004d95c3:
  FUN_004e5630(3,param_3);
  return 3;
}

