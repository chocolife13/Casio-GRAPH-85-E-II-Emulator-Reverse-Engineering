// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00435180
// entry: 00435180  size: 502


undefined4 FUN_00435180(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_c [4];
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = param_1;
switchD_004352d9_caseD_7546:
  while( true ) {
    while( true ) {
      local_8 = *(undefined4 *)(piVar1[1] + *(int *)(*piVar1 + 4) * 8);
      local_4 = *(undefined4 *)(piVar1[1] + 4 + *(int *)(*piVar1 + 4) * 8);
      FUN_00538b30();
      iVar2 = FUN_00526620(&param_1);
      if (iVar2 != 0) break;
      if ((int *)0x7542 < param_1) goto code_r0x004352d1;
      if (param_1 == (int *)0x7542) goto switchD_004352d9_caseD_7547;
      if (param_1 < (int *)0x7532) {
        if (param_1 == (int *)0x7531) {
          uVar4 = FUN_00526040();
          FUN_004353b0(piVar1[2],*piVar1,uVar4);
        }
        else {
          if (param_1 == (int *)0x1) goto switchD_004352d9_caseD_7549;
          if (param_1 == (int *)0x2) {
            iVar2 = FUN_00435c10();
            if (iVar2 == 1) {
              FUN_00435cf0(piVar1,0);
              *(undefined4 *)*piVar1 = 1;
              *(undefined4 *)(*piVar1 + 4) = 1;
              FUN_00434b80(piVar1[2] + *(int *)(*piVar1 + 4) * 4,1,2,7,2);
            }
          }
          else if (param_1 == (int *)0x3) goto switchD_004352d9_caseD_7545;
        }
      }
      else {
        if (param_1 == (int *)0x7532) {
          return 0;
        }
        if (param_1 == (int *)0x7534) {
          if (*(int *)(piVar1[1] + *(int *)(*piVar1 + 4) * 8) != 0) {
            return 1;
          }
          iVar2 = 0;
          uVar4 = 0;
          piVar5 = (int *)0x0;
          goto LAB_004351d0;
        }
      }
    }
    if (((int *)0x2f < param_1) && (param_1 < (int *)0x3a)) break;
    FUN_004353b0(piVar1[2],*piVar1,param_1);
  }
  uVar4 = 1;
  piVar5 = param_1;
  goto LAB_004351d0;
code_r0x004352d1:
  switch(param_1) {
  case (int *)0x7545:
switchD_004352d9_caseD_7545:
    iVar2 = 0;
    piVar5 = (int *)0x0;
    uVar4 = 0;
LAB_004351d0:
    iVar2 = FUN_00435560(piVar1,&local_8,uVar4,piVar5,iVar2);
    if (iVar2 == 1) {
      return 1;
    }
    break;
  case (int *)0x7547:
switchD_004352d9_caseD_7547:
    FUN_00435490(piVar1[2],*piVar1,param_1);
    break;
  case (int *)0x7549:
switchD_004352d9_caseD_7549:
    iVar2 = FUN_00435b60();
    if (iVar2 == 1) {
      FUN_00435cf0(piVar1,*(undefined4 *)(*piVar1 + 4));
      iVar2 = ((int *)*piVar1)[1];
      iVar3 = (iVar2 - *(int *)*piVar1) + 2;
      FUN_00434b80(piVar1[2] + iVar2 * 4,1,iVar3,iVar3,iVar3);
    }
    break;
  case (int *)0x754d:
    return 0;
  case (int *)0x7555:
    FUN_005237c0(1);
    FUN_0052d2d0(&DAT_005bea08,local_c);
    FUN_00523800(1);
  }
  goto switchD_004352d9_caseD_7546;
}

