// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8270
// entry: 004a8270  size: 596


void FUN_004a8270(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 local_80;
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [24];
  undefined1 local_34 [52];
  
  iVar4 = 1;
  FUN_004e5780(local_70);
  FUN_004e5780(local_64);
  FUN_004e5780(local_7c);
switchD_004a8499_caseD_7533:
  FUN_005232d0(3,2);
  FUN_00523470(&DAT_005c03f0,6);
  FUN_004e6a00(local_70,local_64,local_58);
  FUN_004e4120(local_58,local_7c,local_4c);
  uVar1 = FUN_004b22b0(local_4c,local_34,0x13);
  FUN_00523470(uVar1);
  if (iVar4 == 1) {
    uVar5 = 4;
    puVar6 = local_70;
    puVar3 = &DAT_005c03ec;
    FUN_005232d0(3,4);
    FUN_00523490(&DAT_005c03ec,4);
    FUN_004e4120(local_70,local_7c,local_4c);
    uVar1 = FUN_004b22b0(local_4c,local_34,0x13);
    FUN_00523490(uVar1);
    FUN_005232d0(3,5);
    FUN_00523470(&DAT_005c03e8,4);
    FUN_004e4120(local_64,local_7c,local_4c);
    uVar1 = FUN_004b22b0(local_4c,local_34,0x13);
    FUN_00523470(uVar1);
  }
  else {
    uVar5 = 5;
    puVar6 = local_64;
    puVar3 = &DAT_005c03e8;
    FUN_005232d0(3,4);
    FUN_00523470(&DAT_005c03e8,2);
    FUN_005232d0(3,4);
    FUN_00523470(&DAT_005c03ec,4);
    FUN_004e4120(local_70,local_7c,local_4c);
    uVar1 = FUN_004b22b0(local_4c,local_34,0x13);
    FUN_00523470(uVar1);
    FUN_005232d0(3,5);
    FUN_00523490(&DAT_005c03e8,4);
    FUN_004e4120(local_64,local_7c,local_4c);
    uVar1 = FUN_004b22b0(local_4c,local_34,0x13);
    FUN_00523490(uVar1);
  }
  iVar2 = FUN_00526620(&local_80);
  if (iVar2 == 0) goto code_r0x004a8491;
  uVar7 = 1;
  uVar1 = local_80;
  goto LAB_004a8462;
code_r0x004a8491:
  switch(local_80) {
  case 0x7532:
  case 0x754d:
    return;
  case 0x7542:
  case 0x7547:
    iVar4 = 2 - (uint)(iVar4 != 1);
    break;
  case 0x7545:
    uVar1 = 0x7545;
    uVar7 = 0;
LAB_004a8462:
    iVar2 = FUN_005245e0(uVar7,uVar1,uVar5,puVar6,puVar3);
    if (iVar2 == 0) {
      iVar4 = 2 - (uint)(iVar4 != 1);
    }
  }
  goto switchD_004a8499_caseD_7533;
}

