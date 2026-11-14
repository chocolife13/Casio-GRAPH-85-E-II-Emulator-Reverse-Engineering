// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049a720
// entry: 0049a720  size: 857


undefined4 FUN_0049a720(int param_1)

{
  short sVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 local_50;
  undefined1 local_4c [24];
  undefined1 local_34 [52];
  
  psVar5 = DAT_005d6db8;
  FUN_00497820(5,local_4c);
  if (((param_1 == 1) || (param_1 == 9)) || (param_1 == 0x7533)) {
    uVar6 = 4;
  }
  else {
    uVar6 = 5;
  }
  FUN_00525b40(uVar6);
  FUN_005232d0(1,2);
  if (param_1 == 1) {
    uVar6 = FUN_0052f6f0(0x223,local_34);
    FUN_005233e0(uVar6);
    FUN_005232d0(1,3);
    uVar6 = FUN_0052f6f0(0x224,local_34);
    FUN_005233e0(uVar6);
  }
  else if (param_1 == 9) {
    uVar6 = FUN_0052f6f0(0x279,local_34);
    FUN_005233e0(uVar6);
  }
  else if (param_1 == 0x7533) {
    uVar6 = FUN_0052f6f0(0x2b2,local_34);
    FUN_005233e0(uVar6);
    FUN_005232d0(1,3);
    uVar6 = FUN_0052f6f0(0x2b3,local_34);
    FUN_005233e0(uVar6);
  }
  else {
    if ((param_1 != 0x7532) && (param_1 != 0x754d)) {
      FUN_004b6ef0(local_34,&DAT_005bfd48);
      sVar1 = *psVar5;
      while (sVar1 != 0) {
        psVar5 = psVar5 + 1;
        sVar1 = *psVar5;
      }
      sVar1 = *psVar5;
      while (sVar1 != 0x5c) {
        psVar5 = psVar5 + -1;
        sVar1 = *psVar5;
      }
      psVar5 = psVar5 + 1;
      iVar4 = FUN_004b6ca0(local_34);
      puVar2 = local_34 + iVar4;
      sVar1 = *psVar5;
      while (sVar1 != 0) {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
        *puVar2 = (char)sVar1;
        puVar2 = puVar2 + 1;
        sVar1 = *psVar5;
      }
      puVar2[-4] = 0;
      uVar3 = FUN_004b6bd0(local_34);
      while (uVar3 < 0xb) {
        FUN_004b6e70(local_34,&DAT_005ad48c);
        uVar3 = FUN_004b6bd0(local_34);
      }
      FUN_004b6e70(local_34,&DAT_005a8df8);
      FUN_005233e0(local_34);
      FUN_005232d0(1,3);
      uVar6 = FUN_0052f6f0(0x201,local_34);
      FUN_005233e0(uVar6);
      FUN_005232d0(1,4);
      uVar6 = FUN_0052f6f0(0x202,local_34);
      FUN_005233e0(uVar6);
      FUN_005232d0(1,5);
      uVar6 = FUN_0052f6f0(2,local_34);
      FUN_005233e0(uVar6);
      FUN_005232d0(1,6);
      uVar6 = FUN_0052f6f0(3,local_34);
      FUN_005233e0(uVar6);
      goto switchD_0049aa11_caseD_7533;
    }
    uVar6 = FUN_0052f6f0(0x2b2,local_34);
    FUN_005233e0(uVar6);
    FUN_005232d0(1,3);
    uVar6 = FUN_0052f6f0(0x2b3,local_34);
    FUN_005233e0(uVar6);
    FUN_005232d0(1,6);
    uVar6 = FUN_0052f6f0(0x2b4,local_34);
    FUN_005233e0(uVar6);
  }
  FUN_005232d0(1,4);
  uVar6 = FUN_0052f6f0(2,local_34);
  FUN_005233e0(uVar6);
  FUN_005232d0(1,5);
  uVar6 = FUN_0052f6f0(3,local_34);
  FUN_005233e0(uVar6);
switchD_0049aa11_caseD_7533:
  do {
    iVar4 = FUN_00526620(&local_50);
    while (iVar4 != 0) {
      iVar4 = FUN_00526620(&local_50);
    }
    switch(local_50) {
    case 0x7532:
    case 0x754d:
      if (param_1 != 0x7533) {
        if ((param_1 == 0x7532) || (param_1 == 0x754d)) {
          local_50 = 0x753f;
        }
        goto LAB_0049aa60;
      }
      break;
    case 0x7539:
      local_50 = 0x7534;
LAB_0049aa60:
      FUN_00497860(5,local_4c);
      return local_50;
    case 0x753e:
      local_50 = 0x7532;
      goto LAB_0049aa60;
    case 0x753f:
      if ((param_1 == 0x7532) || (param_1 == 0x754d)) goto LAB_0049aa60;
    }
  } while( true );
}

