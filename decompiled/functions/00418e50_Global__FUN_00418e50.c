// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00418e50
// entry: 00418e50  size: 307


undefined4 FUN_00418e50(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_4;
  
  DAT_005d8b40 = 0;
  DAT_005d8b44 = 0;
  DAT_005d8b48 = 0;
  local_4 = 0xffffffff;
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
  DAT_005d8b8c._0_2_ = 0xffff;
  if (0xffe < param_1) {
    DAT_005d8b8c._0_2_ = 0xffff;
    return 0xfffffffe;
  }
  iVar3 = 1;
  uVar4 = 0x7ff;
  uVar2 = DAT_0057dc50;
  while( true ) {
    if (param_1 < uVar4) {
      if (2 < iVar3) {
        return 0xfffffffa;
      }
      iVar3 = FUN_004197b0(uVar2 + (param_1 % 0x7ff) * 0x20,&DAT_005d8b4c,0x20);
      if (iVar3 != 0x20) {
        return 0xffffffe1;
      }
      FUN_0042a3b0(&DAT_005d8b6c,&DAT_005d8b4c,0x20);
      DAT_005d8b40 = param_1;
      return 0;
    }
    iVar1 = FUN_004197b0(uVar2 + 0xffe4,&local_4,4);
    if (iVar1 != 4) {
      return 0xffffffe1;
    }
    uVar2 = (local_4 & 0xff0000 | local_4 >> 0x10) >> 8 | (local_4 & 0xff00 | local_4 << 0x10) << 8;
    if (uVar2 == 0xffffffff) break;
    uVar4 = uVar4 + 0x7ff;
    iVar3 = iVar3 + 1;
    local_4 = uVar2;
    if (0xffe < uVar4) {
      return 0xfffffffa;
    }
  }
  return 0xfffffffe;
}

