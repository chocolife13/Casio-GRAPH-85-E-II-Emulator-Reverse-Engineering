// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040ad90
// entry: 0040ad90  size: 51


void FUN_0040ad90(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = &DAT_005cd76b;
  do {
    if (param_1 == 1) {
      bVar2 = *pbVar1 & 0xf0;
    }
    else {
      bVar2 = *pbVar1 | 0xf;
    }
    *pbVar1 = bVar2;
    pbVar1 = pbVar1 + 0x10;
  } while ((int)pbVar1 < 0x5cd79c);
  FUN_0040ad30(0,0xffffffff,0xffffffff);
  return;
}

