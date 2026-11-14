// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532620
// entry: 00532620  size: 224


void FUN_00532620(char *param_1,ushort param_2,char param_3)

{
  short sVar1;
  
  if ((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) {
    if ((uint)param_2 < (DAT_005d572c & 0xff) + (uint)DAT_005d5742) {
      do {
        param_1 = (char *)FUN_004b7080(param_1);
        if (*param_1 == '\0') {
          return;
        }
        param_2 = param_2 + 6;
      } while ((uint)param_2 < (DAT_005d572c & 0xff) + (uint)DAT_005d5742);
    }
    if ((((ushort)(param_2 - DAT_005d5742) < 0x80) &&
        (sVar1 = (ushort)(byte)(param_3 - 3) - (ushort)DAT_005d5741, -0xb < sVar1)) &&
       (sVar1 < 0x39)) {
      FUN_00413e50(param_2 - DAT_005d5742,(int)sVar1,param_1,0);
      return;
    }
  }
  return;
}

