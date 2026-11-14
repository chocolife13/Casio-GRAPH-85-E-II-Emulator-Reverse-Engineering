// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055be87
// entry: 0055be87  size: 49


undefined4 FUN_0055be87(byte param_1,uint param_2,byte param_3)

{
  if (((&DAT_005da801)[param_1] & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_005cc4b2 + (uint)param_1 * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}

