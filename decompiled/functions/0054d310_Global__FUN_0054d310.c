// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054d310
// entry: 0054d310  size: 38


void FUN_0054d310(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 2;
  do {
    iVar2 = 8;
    pbVar1 = param_1;
    do {
      *pbVar1 = ~*pbVar1;
      iVar2 = iVar2 + -1;
      pbVar1 = pbVar1 + 0x10;
    } while (iVar2 != 0);
    param_1 = param_1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

