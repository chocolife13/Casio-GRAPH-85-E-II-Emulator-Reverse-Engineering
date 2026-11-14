// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00500950
// entry: 00500950  size: 72


undefined4 FUN_00500950(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  bVar1 = *param_1 - 1;
  *param_2 = *(undefined4 *)(param_1 + (uint)bVar1 * 4 + 0x18);
  *param_1 = bVar1;
  if (bVar1 == 0) {
    FUN_0052f6b0(0x3b);
    FUN_0052f6c0(0x3b,0);
  }
  return 1;
}

