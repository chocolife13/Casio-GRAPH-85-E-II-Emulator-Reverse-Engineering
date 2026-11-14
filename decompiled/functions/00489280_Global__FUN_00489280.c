// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00489280
// entry: 00489280  size: 232


undefined4 FUN_00489280(short *param_1,undefined4 param_2)

{
  short sVar1;
  byte *pbVar2;
  byte local_102 [2];
  byte local_100 [256];
  
  local_102[0] = 0x31;
  FUN_004fe330(local_102,param_2);
  if (local_102[0] == 0x24) {
    FUN_004fe330(local_102,param_2);
  }
  if ((0x40 < local_102[0]) && (local_102[0] < 0x5b)) {
    *param_1 = local_102[0] - 0x40;
    FUN_004fe330(local_102,param_2);
    if (local_102[0] == 0x24) {
      FUN_004fe330(local_102,param_2);
    }
    if ((0x2f < local_102[0]) && (local_102[0] < 0x3a)) {
      pbVar2 = local_100;
      do {
        if (0x39 < local_102[0]) break;
        *pbVar2 = local_102[0];
        pbVar2 = pbVar2 + 1;
        *pbVar2 = 0;
        FUN_004fe330(local_102,param_2);
      } while (0x2f < local_102[0]);
      sVar1 = FUN_0055401d(local_100);
      param_1[1] = sVar1;
      return 1;
    }
  }
  FUN_0052b240(2);
  return 0;
}

