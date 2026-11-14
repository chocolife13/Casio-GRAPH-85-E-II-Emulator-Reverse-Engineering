// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab6a0
// entry: 004ab6a0  size: 78


bool FUN_004ab6a0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  
  pbVar2 = &DAT_005d6cd0;
  while( true ) {
    bVar1 = *param_1;
    bVar3 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return true;
    }
    bVar1 = param_1[1];
    bVar3 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    param_1 = param_1 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return true;
    }
  }
  return 1 - bVar3 == (uint)(bVar3 != 0);
}

