// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00497f90
// entry: 00497f90  size: 87


undefined4 FUN_00497f90(void)

{
  byte *pbVar1;
  int local_8 [2];
  
  FUN_00496700(DAT_005d6d88 + -1,local_8);
  if (local_8[0] == 0x4000000) {
    pbVar1 = (byte *)FUN_00496880(DAT_005d6d88 + -1);
    if ((*pbVar1 & 0x70) == 0x20) {
      return 0x7f51;
    }
    if ((*pbVar1 & 0x70) == 0x30) {
      return 0x7f40;
    }
  }
  return 0;
}

