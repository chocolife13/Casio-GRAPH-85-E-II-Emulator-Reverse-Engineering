// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ef380
// entry: 004ef380  size: 128


bool FUN_004ef380(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if (*param_1 == -0x80) {
    FUN_004e2970(param_2,param_3,param_4,param_5);
    iVar1 = FUN_004e4020(param_4);
    return iVar1 == 0;
  }
  if (*param_1 != -0x60) {
    FUN_004e5630(8,param_4);
    return false;
  }
  FUN_004e2af0(param_2,param_3,param_4,param_5);
  iVar1 = FUN_004e4020(param_4);
  return iVar1 == 0;
}

