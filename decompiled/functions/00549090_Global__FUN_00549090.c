// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00549090
// entry: 00549090  size: 593


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00549090(short *param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_84;
  uint local_80 [2];
  byte local_78 [8];
  byte local_70 [8];
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  uVar4 = FUN_00526410();
  FUN_00526420(0xf7);
  FUN_00525b70(3);
  FUN_005232d0(3,3);
  FUN_0052f6f0(0x275,local_68);
  FUN_00523470(local_68,0x13);
  FUN_005232d0(3,4);
  FUN_0052f6f0(0x276,local_34);
  FUN_00523470(local_34,0x13);
  FUN_005232d0(8,5);
  FUN_005233e0(s_Cell__005cb454);
  local_78[0] = 0;
  iVar8 = 1;
  iVar6 = 0;
  local_80[1] = 0;
LAB_0054912e:
  local_84 = 0;
  FUN_005252d0(local_78,0,0,0xd,5,0x11);
  do {
    while (iVar5 = FUN_00526620(local_80), iVar5 != 0) {
      if (((0x2f < local_80[0]) && (local_80[0] < 0x3a)) ||
         ((0x40 < local_80[0] && (local_80[0] < 0x5b)))) {
        local_84 = FUN_005254d0(local_78,4,local_84,local_80[0]);
        FUN_005252d0(local_78,0,local_84,0xd,5,0x11);
      }
    }
    switch(local_80[0]) {
    case 0x7532:
      FUN_00523740();
      uVar7 = 0xfffffffe;
      goto LAB_005492c1;
    case 0x7534:
      goto switchD_005491ab_caseD_7534;
    case 0x753f:
    case 0x7544:
    case 0x7545:
    case 0x7549:
      FUN_00524a50(local_78,4,local_80 + 1,&local_84,local_80,0xd,5);
      break;
    case 0x754d:
      FUN_00523740();
      uVar7 = 0xffffffff;
      goto LAB_005492c1;
    }
  } while( true );
switchD_005491ab_caseD_7534:
  if ((((0x40 < local_78[0]) && (local_78[0] < 0x5b)) && (0x2f < local_78[1])) &&
     (local_78[1] < 0x3a)) {
    bVar2 = local_78[iVar8];
    while ((0x2f < bVar2 && (bVar2 < 0x3a))) {
      local_70[iVar6] = bVar2;
      bVar2 = local_78[iVar8 + 1];
      iVar8 = iVar8 + 1;
      local_70[iVar6 + 1] = 0;
      iVar6 = iVar6 + 1;
    }
    iVar5 = FUN_0055401d(local_70);
    if (((iVar5 < 1000) && (iVar5 != 0)) && (local_78[iVar8] == 0)) {
      sVar1 = local_78[0] - 0x40;
      param_1[3] = sVar1;
      sVar3 = (short)iVar5;
      param_1[4] = sVar3;
      param_1[1] = sVar1;
      param_1[2] = sVar3;
      if (param_2 == 1) {
        param_1[8] = sVar1;
        param_1[9] = sVar3;
      }
      if (0x17 < sVar1) {
        param_1[1] = 0x17;
      }
      if (1000 - *param_1 < (int)sVar3) {
        param_1[2] = 1000 - *param_1;
      }
      FUN_00523740();
      uVar7 = 0;
LAB_005492c1:
      FUN_00525bc0();
      FUN_005387a0();
      FUN_00526420(uVar4);
      return uVar7;
    }
  }
  FUN_0052b240(2);
  FUN_00523740();
  goto LAB_0054912e;
}

