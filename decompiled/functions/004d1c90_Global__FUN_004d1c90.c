// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d1c90
// entry: 004d1c90  size: 43


int FUN_004d1c90(byte *param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *param_1 & 0xf0;
  iVar1 = (uint)(param_1[1] >> 4) + (*param_1 & 0xf) * 10;
  if ((bVar2 == 0x50) || (bVar2 == 0)) {
    iVar1 = iVar1 + -100;
  }
  return iVar1;
}

