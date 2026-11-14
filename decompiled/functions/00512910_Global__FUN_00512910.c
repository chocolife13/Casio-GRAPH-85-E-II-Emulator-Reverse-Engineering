// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00512910
// entry: 00512910  size: 64


void FUN_00512910(int param_1,int param_2)

{
  byte bVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x8dc) + 0x18 + param_2 * 0x20) & 0x80) != 0) {
    bVar1 = *(byte *)(param_1 + 0x8e0);
    if ((bVar1 & 3) == 0) {
      *(byte *)(param_1 + 0x8e0) = bVar1 & 0xfd | 1;
      return;
    }
    if ((bVar1 & 3) == 1) {
      *(byte *)(param_1 + 0x8e0) = bVar1 & 0xfe | 2;
    }
  }
  return;
}

