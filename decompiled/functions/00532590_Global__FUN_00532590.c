// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532590
// entry: 00532590  size: 132


void FUN_00532590(ushort param_1,byte param_2)

{
  if ((((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) &&
      ((DAT_005d572c & 0xff) + (uint)DAT_005d5742 <= (uint)param_1)) &&
     ((ushort)(param_1 - DAT_005d5742) < 0x80)) {
    if ((DAT_005d5741 <= param_2) && ((byte)(param_2 - DAT_005d5741) < 0x39)) {
      FUN_00414290(param_1 - DAT_005d5742,param_2 - DAT_005d5741,1);
    }
  }
  return;
}

