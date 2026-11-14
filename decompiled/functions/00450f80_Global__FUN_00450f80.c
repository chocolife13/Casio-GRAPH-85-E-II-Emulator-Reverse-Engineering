// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00450f80
// entry: 00450f80  size: 1895


uint FUN_00450f80(int *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined2 local_9a;
  uint local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  uint local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_60 [12];
  undefined1 local_30 [48];
  
  local_86 = DAT_005bec26;
  local_68 = DAT_005bec54;
  local_88 = DAT_005bec24;
  puVar6 = &DAT_00580ca0;
  puVar7 = local_60;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_9a = DAT_005ad48c;
  local_6c = DAT_005bec50;
  local_b0 = 0;
  local_af = 0;
  local_ae = 0;
  local_ad = 0;
  local_ac = 0;
  local_ab = 0;
  local_aa = 0;
  local_a9 = 0;
  local_a8 = 0;
  local_94 = 0;
  local_93 = 0;
  local_92 = 0;
  local_91 = 0;
  local_90 = 0;
  local_8f = 0;
  local_8e = 0;
  local_8d = 0;
  local_8c = 0;
  local_80 = 0;
  local_7f = 0;
  local_7e = 0;
  local_7d = 0;
  local_7c = 0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  local_64 = DAT_005bec58;
  local_62 = DAT_005bec5a;
  FUN_00538860(4,local_60);
  FUN_005387f0(4);
  FUN_00414240();
  FUN_00523740();
  FUN_005232d0(1,1);
  FUN_0052f6f0(0xf2,local_30);
  FUN_00523470(local_30,0x15);
  FUN_005232d0(1,2);
  uVar3 = FUN_004b6bd0(&local_6c);
  FUN_00523470(&local_6c,uVar3);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
  iVar5 = 2;
  local_84 = local_84 & 0xffffff00;
  local_a0 = 0;
  local_a4 = 0;
switchD_004512f7_caseD_7540:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          FUN_00538b30();
          uVar3 = FUN_0040ad00();
          iVar4 = FUN_00526620(&local_98);
          if (iVar4 == 0) break;
          iVar4 = FUN_00450420(local_98);
          if (iVar4 != 0) {
            local_a0 = FUN_005254d0(&local_b0,8,local_a0,local_98);
            FUN_00527030();
            iVar5 = local_a0 + 2;
            local_a4 = FUN_005252d0(&local_b0,local_a4,local_a0,2,2,9);
          }
        }
        if (local_98 < 0x7535) break;
        switch(local_98) {
        case 0x753f:
          FUN_00524a50(&local_b0,8,&local_a4,&local_a0,&local_98,2,2);
          FUN_005262e0(0x84);
          FUN_00527030();
          iVar5 = local_a0 + 2;
          local_a4 = FUN_005252d0(&local_b0,local_a4,local_a0,2,2,9);
          break;
        case 0x7544:
        case 0x7545:
        case 0x7549:
          FUN_00524a50(&local_b0,8,&local_a4,&local_a0,&local_98,2,2);
          FUN_00527030();
          iVar5 = local_a0 + 2;
          local_a4 = FUN_005252d0(&local_b0,local_a4,local_a0,2,2,9);
          break;
        case 0x754d:
          goto switchD_004512f7_caseD_754d;
        }
      }
      if (local_98 != 0x7534) break;
      iVar4 = FUN_004b7550(&local_b0);
      if (iVar4 == 0) {
        FUN_00450f60(uVar3);
      }
      else {
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        cVar2 = FUN_004acd20(1,&local_b0,1);
        if (cVar2 != '\0') goto LAB_0045166e;
        cVar2 = FUN_004ad250(&local_78);
        if (cVar2 == '\0') {
          iVar5 = FUN_004b7550(&local_b0);
          iVar5 = FUN_004b79b0(&local_78,&local_b0,iVar5 + 1);
          if (iVar5 == 0) {
            FUN_0044e6f0(&local_b0,param_1,0);
            iVar5 = param_1[2];
            param_1[1] = iVar5;
            iVar4 = FUN_004b79b0(iVar5 + 9,&local_80,8);
            if (iVar4 != 0) {
              FUN_005232d0(0xc,2);
              if (*(char *)(iVar5 + 0x12) == '\x01') {
                puVar8 = &local_88;
              }
              else {
                puVar8 = &local_9a;
              }
              FUN_005233e0(puVar8);
              iVar5 = FUN_00450be0(&local_94,iVar5);
              uVar1 = local_84;
              if ((iVar5 == 0x754d) || (iVar5 == 0x7532)) {
                FUN_00538810();
                return uVar1;
              }
            }
            FUN_0044bfa0(0,param_1);
            FUN_00538810();
            return 0;
          }
LAB_0045166e:
          iVar5 = FUN_0044ea10(&local_b0,&local_94,local_84,param_1);
          if (iVar5 != 0) {
            FUN_0052b240(4);
            FUN_00538810();
            return 0x50;
          }
          param_1[1] = param_1[2];
          FUN_0044bfa0(0,param_1);
          FUN_00538810();
          return 0;
        }
      }
    }
    if (3 < local_98) {
      if (local_98 == 0x7531) {
        local_98 = FUN_00526040();
        local_a0 = FUN_005254d0(&local_b0,8,local_a0,local_98);
        FUN_00527030();
        iVar5 = local_a0 + 2;
        local_a4 = FUN_005252d0(&local_b0,local_a4,local_a0,2,2,9);
      }
      else if (local_98 == 0x7532) goto LAB_00451582;
      goto switchD_004512f7_caseD_7540;
    }
    if (local_98 != 3) {
      if (local_98 == 1) {
        local_84 = (uint)local_84._1_3_ << 8;
        FUN_00523740();
        FUN_005232d0(0xc,2);
        puVar8 = &local_9a;
      }
      else {
        if (local_98 != 2) goto switchD_004512f7_caseD_7540;
        local_84 = CONCAT31(local_84._1_3_,1);
        FUN_00523740();
        FUN_005232d0(0xc,2);
        puVar8 = &local_88;
      }
      FUN_005233e0(puVar8);
      FUN_005232d0(iVar5,2);
      FUN_00527030();
      goto switchD_004512f7_caseD_7540;
    }
    iVar4 = FUN_004b7550(&local_b0);
  } while (iVar4 == 0);
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  cVar2 = FUN_004acd20(1,&local_b0,1);
  if (cVar2 == '\0') {
    cVar2 = FUN_004ad250(&local_78);
    if (cVar2 != '\0') goto switchD_004512f7_caseD_7540;
    iVar5 = FUN_004b7550(&local_b0);
    iVar5 = FUN_004b79b0(&local_78,&local_b0,iVar5 + 1);
    if (iVar5 == 0) {
      FUN_0044e6f0(0,param_1,0);
      iVar5 = *param_1;
      iVar4 = FUN_004b7550(&local_b0);
      iVar4 = FUN_004b79b0(iVar5,&local_b0,iVar4 + 1);
      if (iVar4 != 0) goto LAB_004514ed;
      goto LAB_00451512;
    }
  }
  iVar5 = FUN_00450be0(&local_94,0);
  if (iVar5 == 0x754d) {
    FUN_00538810();
    return 0x754d;
  }
  if (iVar5 == 0x7532) {
    FUN_00538810();
    return 0x7532;
  }
  iVar5 = FUN_0044ea10(&local_b0,&local_94,local_84,param_1);
  if (iVar5 != 0) {
    FUN_0052b240(4);
    FUN_00538810();
    return 0x754d;
  }
  iVar5 = *param_1;
  iVar4 = FUN_004b7550(&local_b0);
  iVar4 = FUN_004b79b0(iVar5,&local_b0,iVar4 + 1);
  if (iVar4 != 0) goto LAB_0045146d;
  goto LAB_00451492;
  while( true ) {
    iVar5 = *(int *)(iVar5 + 0x1c);
    iVar4 = FUN_004b7550(&local_b0);
    iVar4 = FUN_004b79b0(iVar5,&local_b0,iVar4 + 1);
    if (iVar4 == 0) break;
LAB_004514ed:
    if (iVar5 == 0) break;
  }
LAB_00451512:
  iVar4 = FUN_004b79b0(iVar5 + 9,&local_80,8);
  if (iVar4 != 0) {
    FUN_005232d0(0xc,2);
    if (*(char *)(iVar5 + 0x12) == '\x01') {
      puVar8 = &local_88;
    }
    else {
      puVar8 = &local_9a;
    }
    FUN_005233e0(puVar8);
    iVar4 = FUN_00450be0(&local_94,iVar5);
    if (iVar4 == 0x754d) {
switchD_004512f7_caseD_754d:
      FUN_00538810();
      return 0x754d;
    }
    if (iVar4 == 0x7532) {
LAB_00451582:
      FUN_00538810();
      return 0x7532;
    }
  }
  param_1[1] = iVar5;
  FUN_0044bfa0(0,param_1);
  FUN_00538810();
  return 0;
  while( true ) {
    iVar5 = *(int *)(iVar5 + 0x1c);
    iVar4 = FUN_004b7550(&local_b0);
    iVar4 = FUN_004b79b0(iVar5,&local_b0,iVar4 + 1);
    if (iVar4 == 0) break;
LAB_0045146d:
    if (iVar5 == 0) break;
  }
LAB_00451492:
  param_1[1] = iVar5;
  FUN_004b7750(iVar5 + 9,&local_94);
  FUN_0044bfa0(0,param_1);
  FUN_00538810();
  return 0;
}

