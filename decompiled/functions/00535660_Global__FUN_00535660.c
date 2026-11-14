// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535660
// entry: 00535660  size: 35


int FUN_00535660(char *param_1)

{
  byte bVar1;
  uint3 uVar2;
  
  uVar2 = (uint3)((uint)(param_1 + 1) >> 8);
  if (*param_1 != '\x7f') {
    return (uint)uVar2 << 8;
  }
  bVar1 = param_1[1];
  if (bVar1 < 0x42) {
    return (uint)uVar2 << 8;
  }
  if (0x45 < bVar1) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,bVar1) + -0x41;
}

