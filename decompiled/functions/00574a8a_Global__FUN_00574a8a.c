// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00574a8a
// entry: 00574a8a  size: 61


undefined4 * __fastcall FUN_00574a8a(undefined4 *param_1)

{
  FUN_00576730();
  *param_1 = &PTR_LAB_0059b6f4;
  param_1[0x12] = 2;
  if (DAT_005d5104 == 0) {
    param_1[0x10] = 2;
    param_1[0x11] = 2;
    param_1[0x13] = 1;
  }
  else {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x13] = 0;
  }
  param_1[0x1e] = 0;
  return param_1;
}

