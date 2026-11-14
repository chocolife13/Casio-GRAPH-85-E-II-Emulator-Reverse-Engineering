// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00501010
// entry: 00501010  size: 105


undefined4 FUN_00501010(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  
  pbVar2 = param_2;
  bVar4 = *param_2;
  if (bVar4 == 0x1a) {
    return 0;
  }
  iVar3 = FUN_004b7370(*param_1);
  if (iVar3 != 0) {
    if (bVar4 == 0x19) {
      return 0;
    }
    uVar1 = (uint)bVar4;
    bVar4 = bVar4 + 1;
    param_2[uVar1 + 1] = param_1[1];
  }
  param_2 = (byte *)(uint)bVar4;
  pbVar2[(int)param_2 + 1] = *param_1;
  *pbVar2 = bVar4 + 1;
  return 1;
}

