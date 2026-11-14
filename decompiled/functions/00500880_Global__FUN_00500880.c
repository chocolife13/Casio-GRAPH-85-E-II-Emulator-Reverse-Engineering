// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00500880
// entry: 00500880  size: 91


undefined4 FUN_00500880(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  
  pbVar4 = param_2;
  bVar3 = *param_2;
  if (bVar3 == 0) {
    return 0;
  }
  bVar5 = bVar3 - 1;
  param_2 = (byte *)(uint)bVar5;
  iVar1 = (int)param_2 * 0xc;
  iVar2 = (int)param_2 * 0xc;
  if ((pbVar4[iVar2 + 4] & 0x80) != 0) {
    bVar5 = bVar3 - 2;
    param_2 = (byte *)(uint)bVar5;
    pbVar4[iVar1 + 4] = pbVar4[iVar2 + 4] & 0x7f;
  }
  *param_1 = (int)(pbVar4 + (int)param_2 * 0xc + 4);
  *pbVar4 = bVar5;
  return 1;
}

