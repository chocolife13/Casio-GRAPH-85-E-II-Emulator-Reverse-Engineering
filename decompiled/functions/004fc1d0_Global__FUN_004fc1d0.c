// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fc1d0
// entry: 004fc1d0  size: 264


bool FUN_004fc1d0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  
  bVar1 = param_2[1];
  bVar4 = (bVar1 & 0xf) + (param_1[1] & 0xf);
  if (9 < bVar4) {
    bVar4 = bVar4 + 6;
  }
  bVar2 = param_1[1];
  bVar3 = (byte)((bVar1 >> 4) + (bVar2 >> 4) + (bVar4 >> 4)) < 10;
  if (bVar3) {
    param_1[1] = (bVar1 & 0xf0) + (bVar2 & 0xf0) + bVar4;
  }
  else {
    param_1[1] = (bVar1 & 0xf0) + (bVar2 & 0xf0) + bVar4 + 0x60;
  }
  bVar1 = *param_2;
  bVar4 = (bVar1 & 0xf) + (*param_1 & 0xf) + !bVar3;
  if (9 < bVar4) {
    bVar4 = bVar4 + 6;
  }
  bVar2 = *param_1;
  if (9 < (byte)((bVar1 >> 4) + (bVar2 >> 4) + (bVar4 >> 4))) {
    *param_1 = (bVar1 & 0xf0) + (bVar2 & 0xf0) + bVar4 + 0x60;
    return false;
  }
  bVar4 = (bVar1 & 0xf0) + (bVar2 & 0xf0) + bVar4;
  *param_1 = bVar4;
  if (bVar4 < 0x20) {
    return true;
  }
  return (bVar4 & 0xf0) != 0x20;
}

