// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00408b40
// entry: 00408b40  size: 77


void FUN_00408b40(uint param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 & 0x80000001;
  bVar3 = uVar2 == 0;
  if ((int)uVar2 < 0) {
    bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar3) {
    pbVar1 = (byte *)((int)param_1 / 2 + param_2);
    *pbVar1 = *pbVar1 & 0xf | param_3 << 4;
    return;
  }
  pbVar1 = (byte *)((int)param_1 / 2 + param_2);
  *pbVar1 = *pbVar1 & 0xf0 | param_3;
  return;
}

