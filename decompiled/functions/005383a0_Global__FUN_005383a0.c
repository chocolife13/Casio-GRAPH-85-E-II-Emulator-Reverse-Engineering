// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005383a0
// entry: 005383a0  size: 51


void FUN_005383a0(undefined4 param_1)

{
  if (0x13 < DAT_005d03d8) {
    FUN_00525bd0(4,&DAT_005c4260);
    return;
  }
  (&DAT_005d6200)[DAT_005d03d8] = param_1;
  DAT_005d03d8 = DAT_005d03d8 + 1;
  FUN_005386a0(param_1);
  return;
}

