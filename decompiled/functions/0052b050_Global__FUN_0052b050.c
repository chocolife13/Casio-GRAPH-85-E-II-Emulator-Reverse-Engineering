// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052b050
// entry: 0052b050  size: 408


int FUN_0052b050(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined1 local_34 [52];
  
  FUN_0052f6f0(0x1b4,local_34);
  uVar1 = FUN_00516980(0,local_40);
  iVar2 = FUN_004e4020(uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_00516980(1,local_4c);
    iVar2 = FUN_004e4020(uVar1);
    if (iVar2 == 0) {
      FUN_005237c0(5);
      FUN_00525b40(3);
      FUN_005232d0(1,3);
      FUN_00523470(local_34,0x13);
LAB_0052b0c4:
      iVar2 = 1;
switchD_0052b12e_caseD_7533:
      do {
        while( true ) {
          FUN_0052af40(iVar2,local_40,local_4c);
          iVar3 = FUN_00526620(&local_50);
          if (iVar3 == 0) break;
          iVar3 = FUN_0052ae20(iVar2 + -1,local_40,local_4c,1,local_50);
          if ((iVar3 == 1) && (iVar2 == 1)) {
            iVar2 = 2;
          }
        }
        switch(local_50) {
        case 0x7531:
        case 0x7545:
          uVar1 = 1;
          if (local_50 == 0x7531) {
            local_50 = FUN_00526040();
          }
          else if (local_50 == 0x7545) {
            uVar1 = 0;
          }
          iVar3 = FUN_0052ae20(iVar2 + -1,local_40,local_4c,uVar1,local_50);
          if (iVar3 != 1) break;
        case 0x7547:
          if (iVar2 == 1) {
            iVar2 = 2;
          }
          break;
        case 0x7532:
          FUN_00523800(5);
          return -2;
        case 0x7534:
          FUN_00523800(5);
          return 0;
        case 0x7542:
          goto switchD_0052b12e_caseD_7542;
        case 0x754d:
          goto switchD_0052b12e_caseD_754d;
        }
      } while( true );
    }
  }
  iVar2 = FUN_0052b240(iVar2);
  if (iVar2 == -0xd) {
switchD_0052b12e_caseD_754d:
    iVar2 = -1;
  }
  FUN_00523800(5);
  return iVar2;
switchD_0052b12e_caseD_7542:
  if (iVar2 == 2) goto LAB_0052b0c4;
  goto switchD_0052b12e_caseD_7533;
}

