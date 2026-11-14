// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00418cd0
// entry: 00418cd0  size: 378


undefined4 FUN_00418cd0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_8;
  uint local_4;
  
  DAT_005d8b40 = 0;
  DAT_005d8b44 = 0;
  DAT_005d8b48 = 0;
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)&DAT_005d8b4c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)&DAT_005d8b6c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  local_4 = 0xffffffff;
  DAT_005d8b8c._0_2_ = 0xffff;
  if (2 < param_1) {
    DAT_005d8b8c._0_2_ = 0xffff;
    return 0xfffffffe;
  }
  iVar3 = 1;
  uVar4 = DAT_0057dc50;
  uVar2 = DAT_0057dc50;
  if (1 < param_1) {
    do {
      iVar1 = FUN_004197b0(uVar4 + 0xffe8,&local_4,4);
      if (iVar1 != 4) {
        return 0xffffffe1;
      }
      uVar2 = (local_4 & 0xff0000 | local_4 >> 0x10) >> 8 |
              (local_4 & 0xff00 | local_4 << 0x10) << 8;
      if (uVar2 == 0xffffffff) {
        local_8 = uVar2;
        iVar1 = FUN_004197b0(uVar4 + 0xffe4,&local_8,4);
        if (iVar1 != 4) {
          return 0xffffffe1;
        }
        uVar2 = (local_8 & 0xff0000 | local_8 >> 0x10) >> 8 |
                (local_8 & 0xff00 | local_8 << 0x10) << 8;
        if (uVar2 == 0xffffffff) {
          return 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar2;
      local_8 = uVar2;
    } while (iVar3 < param_1);
    if (2 < iVar3) {
      return 0xfffffffa;
    }
  }
  iVar3 = FUN_004197b0(uVar2 + 0xffe0,&DAT_005d8b4c,0x20);
  if (iVar3 != 0x20) {
    return 0xffffffe1;
  }
  FUN_0042a3b0(&DAT_005d8b6c,&DAT_005d8b4c,0x18);
  DAT_005d8b40 = param_1;
  return 0;
}

