// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049ae40
// entry: 0049ae40  size: 588


void FUN_0049ae40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [24];
  char local_34 [52];
  
  FUN_00497820(5,local_4c);
  if (param_1 == 0x16) {
    FUN_00525b40(4);
    FUN_005232d0(1,2);
    uVar2 = FUN_0052f6f0(0x2b8,local_34);
    FUN_005233e0(uVar2);
    iVar3 = FUN_00495670(DAT_005d6d88,local_34,10);
    FUN_0055c2fe(iVar3 + 4);
    uVar4 = 0xffffffff;
    pcVar5 = local_34;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_005232d0(0xd - (~uVar4 - 1),3);
    FUN_005233e0(local_34);
    FUN_005232d0(1,3);
    uVar2 = FUN_0052f6f0(0x2b7,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,5);
  }
  else {
    FUN_00525b40(5);
    FUN_005232d0(1,2);
    uVar2 = FUN_0052f6f0(0x2b5,local_34);
    FUN_005233e0(uVar2);
    uVar2 = FUN_004aee50(DAT_005d6db8,local_34,10);
    FUN_0055c2fe(uVar2);
    uVar4 = 0xffffffff;
    pcVar5 = local_34;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_005232d0(0xd - (~uVar4 - 1),3);
    FUN_005233e0(local_34);
    FUN_005232d0(1,3);
    uVar2 = FUN_0052f6f0(0x2b7,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,4);
    uVar2 = FUN_0052f6f0(0x2b6,local_34);
    FUN_005233e0(uVar2);
    cVar1 = FUN_004ad550(local_50,local_54,&local_58);
    if (cVar1 != '\0') {
      FUN_0052b240(4);
      goto LAB_0049b078;
    }
    FUN_0055c2fe(local_58,local_34,10);
    uVar4 = 0xffffffff;
    pcVar5 = local_34;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_005232d0(0xd - (~uVar4 - 1),5);
    FUN_005233e0(local_34);
    FUN_005232d0(1,5);
    uVar2 = FUN_0052f6f0(0x2b7,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,6);
  }
  uVar2 = FUN_0052f6f0(1,local_34);
  FUN_005233e0(uVar2);
  do {
    iVar3 = FUN_00526620(&param_1);
    while (iVar3 != 0) {
      iVar3 = FUN_00526620(&param_1);
    }
  } while ((param_1 != 0x7532) && (param_1 != 0x754d));
LAB_0049b078:
  FUN_00497860(5,local_4c);
  return;
}

