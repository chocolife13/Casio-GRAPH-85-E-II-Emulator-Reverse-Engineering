// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560c35
// entry: 00560c35  size: 76


undefined4 * __thiscall FUN_00560c35(undefined4 *param_1,ushort *param_2,undefined4 param_3)

{
  if (*param_2 < 0x76c) {
    *param_1 = 0;
  }
  else {
    FUN_00560be9(*param_2,param_2[1],param_2[3],param_2[4],param_2[5],param_2[6],param_3);
    *param_1 = param_2;
  }
  return param_1;
}

