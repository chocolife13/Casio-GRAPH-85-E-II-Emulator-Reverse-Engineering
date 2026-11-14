// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00402180
// entry: 00402180  size: 37


undefined4 FUN_00402180(uint param_1,byte param_2,int param_3)

{
  if (param_3 != 0xf) {
    return 0;
  }
  *(ushort *)(&DAT_005d8d68 + (param_1 & 0xfffffffc)) = (ushort)param_2;
  return 1;
}

