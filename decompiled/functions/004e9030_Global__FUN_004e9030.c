// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e9030
// entry: 004e9030  size: 1607


undefined4 * FUN_004e9030(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  iVar1 = FUN_004e96c0(param_1);
  if (iVar1 != 0) {
    return param_2;
  }
  iVar1 = FUN_004e9680(param_1);
  if (iVar1 == 0) {
    FUN_004e5780(&local_58);
    iVar7 = -0xe;
    iVar8 = 9;
    uVar2 = FUN_004e7620(param_1,&local_d0,&local_70);
    FUN_004e76a0(uVar2);
    FUN_004e76c0(&local_d0,local_4c);
    iVar1 = FUN_004e71d0(local_4c,&local_58);
    iVar3 = FUN_004e7b60(local_4c);
    if ((iVar1 == 0) && (-0xf < iVar3)) {
      iVar1 = FUN_004e7b60(&local_70);
      iVar4 = FUN_004e7210(&local_70,&local_58);
      if (iVar4 != 0) {
        if (9 < iVar1 + 4) {
          return param_2;
        }
        iVar8 = 7 - iVar1;
        iVar7 = (iVar1 - iVar3) + -0xe;
      }
      FUN_004e57a0(&local_64);
      FUN_004e5840(&local_d0);
      local_ac = local_58;
      local_a8 = local_54;
      local_b8 = local_64;
      local_88 = local_64;
      local_94 = local_64;
      local_b4 = local_60;
      local_84 = local_60;
      local_90 = local_60;
      local_a4 = local_50;
      local_b0 = local_5c;
      local_80 = local_5c;
      local_8c = local_5c;
      iVar1 = FUN_004e7250(local_4c,&local_d0);
      if (iVar1 == 0) {
        uVar2 = FUN_004e6b80(&local_64,local_4c,&local_d0,&local_d0,&local_b8);
        uVar2 = FUN_004e6dd0(&local_64,uVar2);
        FUN_004e76a0(uVar2);
        FUN_004e6b80(&local_b8,&local_64,&local_ac);
      }
      else {
        uVar2 = FUN_004e6dd0(&local_64,local_4c,&local_d0,&local_94);
        FUN_004e76a0(uVar2);
      }
      while( true ) {
        uVar2 = FUN_004e6d00(local_4c,&local_b8,&local_c4,&local_ac,&local_c4);
        FUN_004e6b80(uVar2);
        uVar2 = FUN_004e6d00(local_4c,&local_94,&local_40,&local_40);
        FUN_004e6b80(&local_88,uVar2);
        iVar1 = FUN_004e7290(&local_c4,&local_40);
        if (iVar1 == 0) {
          local_a0 = local_ac;
          local_9c = local_a8;
          local_98 = local_a4;
          local_7c = local_b8;
          local_78 = local_b4;
          local_74 = local_b0;
          local_d0 = local_c4;
          local_cc = local_c0;
        }
        else {
          local_a0 = local_88;
          local_9c = local_84;
          local_98 = local_80;
          local_7c = local_94;
          local_78 = local_90;
          local_74 = local_8c;
          local_d0 = local_40;
          local_cc = local_3c;
        }
        iVar4 = FUN_004e7b60(&local_7c);
        iVar5 = FUN_004e7b60(&local_a0);
        if (iVar8 + -2 < iVar4 + iVar5) break;
        FUN_004e7be0(&local_7c,local_c,iVar3 + 1 + iVar7);
        iVar4 = FUN_004e72d0(&local_d0,local_c);
        if (iVar4 == 1) {
          uVar2 = 1;
          iVar1 = FUN_004e7250(param_1,&local_58);
          if (iVar1 != 0) {
            uVar2 = 0xffffffff;
          }
          iVar1 = FUN_004e71d0(&local_7c,&local_64);
          if ((iVar1 != 0) && (iVar1 = FUN_004e71d0(&local_a0,&local_64), iVar1 != 0)) {
            FUN_004e6a00(&local_70,&local_64,&local_70);
            local_a0 = local_58;
            local_9c = local_54;
            local_98 = local_50;
          }
          local_30 = local_70;
          local_2c = local_6c;
          local_24 = local_a0;
          local_20 = local_9c;
          local_28 = local_68;
          local_18 = local_7c;
          local_14 = local_78;
          local_1c = local_98;
          local_10 = local_74;
          local_34 = uVar2;
          puVar6 = (undefined4 *)FUN_004e45e0(&local_34,param_2);
          return puVar6;
        }
        if (iVar1 == 0) {
          uVar2 = FUN_004e6dd0(&local_40,&local_c4,&local_c4,&local_c4);
          FUN_004e76a0(uVar2);
          uVar2 = FUN_004e6d00(&local_c4,&local_ac,&local_d0,&local_88,&local_88);
          FUN_004e6a00(uVar2);
          uVar2 = FUN_004e6d00(&local_c4,&local_b8,&local_d0,&local_94,&local_94);
          FUN_004e6a00(uVar2);
          FUN_004e6a00(&local_ac,&local_88,&local_ac);
          FUN_004e6a00(&local_b8,&local_94,&local_b8);
        }
        else {
          uVar2 = FUN_004e6dd0(&local_c4,&local_40,&local_c4,&local_c4);
          FUN_004e76a0(uVar2);
          uVar2 = FUN_004e6d00(&local_c4,&local_88,&local_d0,&local_ac);
          FUN_004e6a00(&local_ac,uVar2);
          uVar2 = FUN_004e6d00(&local_c4,&local_94,&local_d0,&local_b8);
          FUN_004e6a00(&local_b8,uVar2);
          FUN_004e6a00(&local_ac,&local_88,&local_88);
          FUN_004e6a00(&local_b8,&local_94,&local_94);
        }
      }
    }
    else {
      iVar1 = FUN_004e7210(&local_70,&local_58);
      if (iVar1 != 0) {
        *param_2 = local_70;
        param_2[1] = local_6c;
        param_2[2] = local_68;
      }
    }
    return param_2;
  }
  return param_2;
}

