// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00476ea0
// entry: 00476ea0  size: 79


void FUN_00476ea0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00526090(0x2a);
  if (cVar1 == '\x02') {
    FUN_004b1b70(param_1);
  }
  else {
    FUN_004b1890(param_1,param_2);
  }
  iVar2 = FUN_0055b770(param_2,s_ERROR_005a8cfc);
  if (iVar2 == 0) {
    FUN_004b6ef0(param_2,s_ERROR_005bf324);
  }
  return;
}

