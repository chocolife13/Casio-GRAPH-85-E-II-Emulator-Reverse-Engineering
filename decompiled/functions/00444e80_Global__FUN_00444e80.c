// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00444e80
// entry: 00444e80  size: 85


char FUN_00444e80(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((((byte)param_1 & 0xf0) == 0xf0) && (param_1._1_1_ != '\0')) {
    FUN_0052b240(param_1._1_1_);
    return param_1._1_1_;
  }
  if (((param_1 & 0x80) != 0) && ((((byte)param_4 & 0xf0) == 0xf0 && (param_4._1_1_ != '\0')))) {
    FUN_0052b240(param_4._1_1_);
    return param_4._1_1_;
  }
  return '\0';
}

