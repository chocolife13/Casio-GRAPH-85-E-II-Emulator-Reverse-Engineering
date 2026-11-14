// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055be15
// entry: 0055be15  size: 97


int FUN_0055be15(uint param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_005d95a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      puVar2 = (undefined4 *)FUN_005542c1();
      *puVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_005d95a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}

