// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a0160
// entry: 004a0160  size: 138


bool FUN_004a0160(uint param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint local_4;
  
  iVar3 = param_1;
  if (*(char *)(param_1 + 0x10) != '\0') {
    return false;
  }
  bVar4 = 0;
  local_4 = 0;
  do {
    sVar1 = *(short *)(iVar3 + 0x12 + local_4 * 2);
    bVar2 = bVar4;
    if (sVar1 != -1) {
      while (bVar2 = bVar2 + 1, bVar2 < 6) {
        param_1 = (uint)bVar2;
        if (sVar1 == *(short *)(iVar3 + 0x12 + param_1 * 2)) {
          return false;
        }
      }
    }
    bVar4 = bVar4 + 1;
    local_4 = (uint)bVar4;
  } while (bVar4 < 5);
  if (*(ushort *)(iVar3 + 0x1e) != 0) {
    if (*(ushort *)(iVar3 + 0x1e) < 0x3e9) {
      return *(byte *)(iVar3 + 0x29) < 7;
    }
    return false;
  }
  return false;
}

