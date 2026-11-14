// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049ab60
// entry: 0049ab60  size: 688


int FUN_0049ab60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined1 local_4c [24];
  undefined1 local_34 [52];
  
  iVar1 = FUN_00429c40(DAT_005d6db8,&local_50);
  if (iVar1 != 0) {
    FUN_0052b240(4);
    return 0x7532;
  }
  if (0xffff < local_50) {
    return 0x7534;
  }
  FUN_00497820(5,local_4c);
  if (param_1 == 0) {
    FUN_00414240();
    FUN_005232d0(1,1);
    uVar2 = FUN_0052f6f0(0x218,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,2);
    uVar2 = FUN_0052f6f0(0x219,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,3);
    uVar2 = FUN_0052f6f0(0x21a,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,4);
    uVar2 = FUN_0052f6f0(0x21b,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,5);
    uVar2 = FUN_0052f6f0(0x21c,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,6);
    uVar2 = FUN_0052f6f0(0x21d,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,7);
    uVar2 = FUN_0052f6f0(0x21e,local_34);
    FUN_005233e0(uVar2);
    FUN_00543d90(10,&local_54);
    FUN_00538aa0(0,local_54);
    FUN_00543d90(0x29,&local_54);
    FUN_00538aa0(5,local_54);
  }
  else {
    FUN_00525b40(6);
    FUN_005232d0(1,2);
    uVar2 = FUN_0052f6f0(0x1d0,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,3);
    uVar2 = FUN_0052f6f0(0x1d1,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,4);
    uVar2 = FUN_0052f6f0(0x1d2,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,5);
    uVar2 = FUN_0052f6f0(0x1d3,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,6);
    uVar2 = FUN_0052f6f0(0x1d4,local_34);
    FUN_005233e0(uVar2);
    FUN_005232d0(1,7);
    uVar2 = FUN_0052f6f0(1,local_34);
    FUN_005233e0(uVar2);
  }
  do {
    while( true ) {
      iVar1 = FUN_00526620(&local_58);
      while (iVar1 != 0) {
        iVar1 = FUN_00526620(&local_58);
      }
      if (param_1 != 0) break;
      switch(local_58) {
      case 0x7532:
        goto switchD_0049addf_caseD_7532;
      case 0x7539:
        local_58 = 0x7534;
        goto switchD_0049addf_caseD_7532;
      case 0x753e:
      case 0x754d:
        goto switchD_0049addf_caseD_753e;
      }
    }
    if (local_58 == 0x7532) goto switchD_0049addf_caseD_7532;
  } while (local_58 != 0x754d);
switchD_0049addf_caseD_753e:
  local_58 = 0x7532;
switchD_0049addf_caseD_7532:
  FUN_00497860(5,local_4c);
  return local_58;
}

