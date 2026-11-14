// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00411d80
// entry: 00411d80  size: 67


undefined4 FUN_00411d80(byte param_1,int *param_2)

{
  if ((param_1 < 0x94) && (param_1 != 0)) {
    FUN_00411d40(param_2);
    *param_2 = *param_2 + (uint)param_1 * -0x10 + 0x10;
    return 0;
  }
  return 0x44;
}

