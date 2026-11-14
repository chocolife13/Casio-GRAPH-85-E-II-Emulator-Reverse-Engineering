// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5110
// entry: 004f5110  size: 79


undefined4 FUN_004f5110(undefined1 *param_1,undefined4 param_2,int param_3,char *param_4)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 0:
    goto switchD_004f5125_caseD_0;
  default:
    uVar1 = FUN_004f58f0(2,param_2);
    return uVar1;
  case 0xc:
  case 0xd:
  case 0x3a:
    if (*param_4 != *(char *)(param_3 + 0x11)) {
      *param_4 = *param_4 + -1;
      return 2;
    }
switchD_004f5125_caseD_0:
    return 1;
  }
}

