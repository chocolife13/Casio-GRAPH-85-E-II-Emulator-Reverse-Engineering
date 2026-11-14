// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00418fd0
// entry: 00418fd0  size: 331


uint FUN_00418fd0(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  uint local_4;
  
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  pbVar1 = &DAT_005d8b6c;
  uVar4 = 0;
  do {
    if ((pbVar1[-0x20] & *pbVar1) != *pbVar1) break;
    uVar4 = uVar4 + 1;
    pbVar1 = pbVar1 + 1;
  } while (uVar4 < 0x20);
  if (uVar4 != 0x20) {
    return 0xffffffdd;
  }
  uVar5 = 1;
  uVar4 = DAT_0057dc50;
  uVar3 = DAT_0057dc50;
  if (1 < DAT_005d8b40) {
    do {
      iVar2 = FUN_004197b0(uVar4 + 0xffe8,&local_4,4);
      if (iVar2 != 4) {
        return 0xffffffe1;
      }
      uVar3 = (local_4 & 0xff0000 | local_4 >> 0x10) >> 8 |
              (local_4 & 0xff00 | local_4 << 0x10) << 8;
      if (uVar3 == 0xffffffff) {
        local_8 = uVar3;
        iVar2 = FUN_004197b0(uVar4 + 0xffe4,&local_8,4);
        if (iVar2 != 4) {
          return 0xffffffe1;
        }
        uVar3 = (local_8 & 0xff0000 | local_8 >> 0x10) >> 8 |
                (local_8 & 0xff00 | local_8 << 0x10) << 8;
        if (uVar3 == 0xffffffff) {
          return 0xfffffffe;
        }
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar3;
      local_8 = uVar3;
    } while (uVar5 < DAT_005d8b40);
    if (2 < uVar5) {
      return 0xfffffffa;
    }
  }
  iVar2 = FUN_004197f0(uVar3 + 0xffe0,&DAT_005d8b6c,0x20);
  return -(uint)(iVar2 != 0x20) & 0xffffffe1;
}

