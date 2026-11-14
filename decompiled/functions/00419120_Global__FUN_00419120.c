// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00419120
// entry: 00419120  size: 251


uint FUN_00419120(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_4;
  
  local_4 = 0xffffffff;
  pbVar1 = &DAT_005d8b6c;
  uVar3 = 0;
  do {
    if ((pbVar1[-0x20] & *pbVar1) != *pbVar1) break;
    uVar3 = uVar3 + 1;
    pbVar1 = pbVar1 + 1;
  } while (uVar3 < 0x20);
  if (uVar3 != 0x20) {
    return 0xffffffdd;
  }
  uVar5 = 1;
  uVar4 = 0x7ff;
  uVar3 = DAT_0057dc50;
  do {
    if (DAT_005d8b40 < uVar4) {
      if (2 < uVar5) {
        return 0xfffffffa;
      }
      iVar2 = FUN_004197f0(uVar3 + (DAT_005d8b40 % 0x7ff) * 0x20,&DAT_005d8b6c,0x20);
      return -(uint)(iVar2 != 0x20) & 0xffffffe1;
    }
    iVar2 = FUN_004197b0(uVar3 + 0xffe4,&local_4,4);
    if (iVar2 != 4) {
      return 0xffffffe1;
    }
    uVar3 = (local_4 & 0xff0000 | local_4 >> 0x10) >> 8 | (local_4 & 0xff00 | local_4 << 0x10) << 8;
    if (uVar3 == 0xffffffff) {
      return 0xfffffffe;
    }
    uVar4 = uVar4 + 0x7ff;
    uVar5 = uVar5 + 1;
    local_4 = uVar3;
  } while (uVar4 < 0xfff);
  return 0xfffffffa;
}

