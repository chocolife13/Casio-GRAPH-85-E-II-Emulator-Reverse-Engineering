// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00524830
// entry: 00524830  size: 385


undefined4
FUN_00524830(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*param_5) {
  case 0x753f:
  case 0x7544:
  case 0x7545:
  case 0x7549:
    if (param_8 == 0) {
      FUN_00524cc0(param_1,param_2);
      iVar2 = *param_3;
      if ((iVar2 != 0) && (iVar2 == *param_4)) {
        *param_3 = iVar2 + -1;
        iVar2 = FUN_004b7610(param_1,iVar2 + -1);
        if (iVar2 == 2) {
          *param_3 = *param_3 + -1;
        }
      }
      iVar2 = FUN_005252a0(param_1,*param_3,*param_4,param_6,param_7);
      *param_3 = iVar2;
      return 1;
    }
    FUN_00524cf0(param_1,param_2,param_4,param_3,*param_5);
    iVar2 = *param_3;
    if ((iVar2 != 0) && (iVar2 == *param_4)) {
      *param_3 = iVar2 + -1;
      iVar2 = FUN_004b7610(param_1,iVar2 + -1);
      if (iVar2 == 2) {
        *param_3 = *param_3 + -1;
      }
    }
    iVar2 = FUN_005252d0(param_1,*param_3,*param_4,param_6,param_7,param_9);
    *param_3 = iVar2;
    break;
  case 0x7554:
    iVar2 = FUN_005254f0(param_1,param_4,param_2);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      FUN_0052b240(iVar2);
      uVar1 = 0xfffffffe;
    }
    iVar2 = FUN_005252a0(param_1,*param_3,*param_4,param_6,param_7);
    *param_3 = iVar2;
    return uVar1;
  case 0x755a:
  case 0x755b:
    uVar1 = FUN_00525840(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_005252a0(param_1,*param_3,*param_4,param_6,param_7);
    return uVar1;
  }
  return 1;
}

