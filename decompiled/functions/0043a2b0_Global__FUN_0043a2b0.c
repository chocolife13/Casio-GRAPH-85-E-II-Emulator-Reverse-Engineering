// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043a2b0
// entry: 0043a2b0  size: 65


undefined4 FUN_0043a2b0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  if (*(int *)(param_4 + 0x24) != 1) {
    return 0;
  }
  switch(param_1) {
  case 0x7542:
    bVar1 = *(int *)(param_4 + 0x28) == 1;
    break;
  default:
    goto switchD_0043a2cb_caseD_7543;
  case 0x7544:
    return 0;
  case 0x7545:
    goto switchD_0043a2cb_caseD_7545;
  case 0x7547:
    bVar1 = *(int *)(param_4 + 0x28) == param_2;
  }
  if ((bVar1) && (param_3 == -1)) {
switchD_0043a2cb_caseD_7545:
    return 0xffffffff;
  }
switchD_0043a2cb_caseD_7543:
  return 0;
}

