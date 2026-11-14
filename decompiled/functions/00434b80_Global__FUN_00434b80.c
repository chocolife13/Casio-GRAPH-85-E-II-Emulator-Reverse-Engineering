// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434b80
// entry: 00434b80  size: 79


void FUN_00434b80(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  if (param_3 < param_4 + 1U) {
    do {
      FUN_005232d0(param_2,param_3);
      if (param_3 == param_5) {
        FUN_00523400(*param_1);
      }
      else {
        FUN_005233e0(*param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_3 < param_4 + 1U);
  }
  return;
}

