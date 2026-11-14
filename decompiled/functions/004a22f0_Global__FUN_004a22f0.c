// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a22f0
// entry: 004a22f0  size: 315


undefined4 FUN_004a22f0(char *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_438;
  undefined1 local_434 [52];
  undefined1 local_400 [1024];
  
  uVar2 = FUN_00538390();
  uVar3 = FUN_00523790(5);
  FUN_00538350(uVar3);
  FUN_00502110(local_400);
  FUN_00525b40(5);
  FUN_005232d0(3,2);
  uVar5 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004b7b40(param_1,local_434,~uVar5 - 1);
  FUN_005233e0(local_434);
  FUN_005232d0(1,3);
  uVar3 = FUN_0052f6f0(0x201,local_434);
  FUN_005233e0(uVar3);
  FUN_005232d0(1,4);
  uVar3 = FUN_0052f6f0(0x202,local_434);
  FUN_005233e0(uVar3);
  FUN_005232d0(1,5);
  uVar3 = FUN_0052f6f0(2,local_434);
  FUN_005233e0(uVar3);
  FUN_005232d0(1,6);
  uVar3 = FUN_0052f6f0(3,local_434);
  FUN_005233e0(uVar3);
  do {
    do {
      iVar4 = FUN_00526620(&local_438);
    } while (iVar4 != 0);
    uVar3 = local_438;
    switch(local_438) {
    case 0x7532:
    case 0x753e:
    case 0x754d:
      uVar3 = 0xffffffff;
    case 0x7539:
switchD_004a23f7_caseD_7539:
      FUN_00502140(local_400);
      FUN_00538340();
      FUN_00538350(uVar2);
      return uVar3;
    case 0x753f:
      if (param_2 != 0) goto switchD_004a23f7_caseD_7539;
    }
  } while( true );
}

