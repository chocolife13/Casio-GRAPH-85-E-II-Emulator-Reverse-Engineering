// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005008e0
// entry: 005008e0  size: 103


undefined4 FUN_005008e0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  
  pbVar3 = param_1;
  bVar1 = *param_1;
  if (bVar1 == 0) {
    return 0;
  }
  bVar5 = bVar1 - 1;
  bVar2 = param_1[bVar5 + 1];
  *param_2 = bVar2;
  if (bVar2 == 0x20) {
    *param_1 = bVar5;
    return 0;
  }
  iVar4 = FUN_004b7370(bVar2);
  if (iVar4 != 0) {
    bVar5 = bVar1 - 2;
    param_1 = (byte *)(uint)bVar5;
    param_2[1] = pbVar3[(int)param_1 + 1];
  }
  *pbVar3 = bVar5;
  return 1;
}

