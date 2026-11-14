// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004955a0
// entry: 004955a0  size: 77


void FUN_004955a0(int param_1,byte param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x13);
  if (param_3 == 0) {
    bVar1 = bVar1 & 0x3f | param_2 << 6;
  }
  else {
    if (param_3 == 1) {
      *(byte *)(param_1 + 0x13) = (param_2 & 7) << 3 | bVar1 & 199;
      return;
    }
    if (param_3 == 2) {
      *(byte *)(param_1 + 0x13) = bVar1 ^ (bVar1 ^ param_2) & 7;
      return;
    }
  }
  *(byte *)(param_1 + 0x13) = bVar1;
  return;
}

