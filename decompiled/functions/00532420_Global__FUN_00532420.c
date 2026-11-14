// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532420
// entry: 00532420  size: 170


void FUN_00532420(ushort param_1,ushort param_2,byte param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  if ((((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) && (DAT_005d5741 <= param_3)) &&
     (param_3 = param_3 - DAT_005d5741, param_3 < 0x39)) {
    uVar2 = (ushort)(byte)DAT_005d572c;
    if (((ushort)(uVar2 + DAT_005d5742) <= param_2) &&
       ((param_1 < (ushort)(uVar2 + DAT_005d5742) || (uVar2 = param_1 - DAT_005d5742, uVar2 < 0x80))
       )) {
      uVar1 = 0x7f;
      if ((ushort)(param_2 - DAT_005d5742) < 0x80) {
        uVar1 = param_2 - DAT_005d5742;
      }
      FUN_004125f0(uVar2,param_3,uVar1,param_3);
    }
  }
  return;
}

