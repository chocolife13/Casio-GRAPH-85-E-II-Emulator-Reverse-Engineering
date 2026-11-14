// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005324d0
// entry: 005324d0  size: 181


void FUN_005324d0(ushort param_1,byte param_2,byte param_3)

{
  if ((((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) &&
      ((DAT_005d572c & 0xff) + (uint)DAT_005d5742 <= (uint)param_1)) &&
     ((param_1 = param_1 - DAT_005d5742, param_1 < 0x80 && (DAT_005d5741 <= param_3)))) {
    if (param_2 < DAT_005d5741) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 - DAT_005d5741;
      if (0x38 < param_2) {
        return;
      }
    }
    param_3 = param_3 - DAT_005d5741;
    if (0x38 < param_3) {
      param_3 = 0x38;
    }
    FUN_004125f0(param_1,param_2,param_1,param_3);
  }
  return;
}

