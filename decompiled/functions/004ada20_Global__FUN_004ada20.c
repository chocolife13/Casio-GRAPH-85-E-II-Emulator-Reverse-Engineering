// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ada20
// entry: 004ada20  size: 86


int FUN_004ada20(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint3 uVar3;
  ushort *puVar4;
  uint *puVar5;
  
  uVar1 = *param_1;
  if ((DAT_005d67e8 <= uVar1) && (uVar1 <= DAT_005d67e8 + 0x10000)) {
    return CONCAT31((int3)(DAT_005d67e8 + 0x10000 >> 8),1);
  }
  puVar5 = &DAT_005d5b80;
  puVar4 = &DAT_005d5880;
  while( true ) {
    uVar2 = *puVar5;
    uVar3 = (uint3)(uVar2 >> 8);
    if (((uVar2 != 0) && (uVar2 <= uVar1)) && (uVar1 <= *puVar4 + uVar2)) break;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    if (0x5d5a7f < (int)puVar4) {
      return CONCAT31(uVar3,2);
    }
  }
  return (uint)uVar3 << 8;
}

