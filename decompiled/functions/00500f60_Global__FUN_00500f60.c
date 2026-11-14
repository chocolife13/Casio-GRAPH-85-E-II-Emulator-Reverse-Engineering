// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00500f60
// entry: 00500f60  size: 171


undefined4 FUN_00500f60(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  byte *pbVar6;
  
  pbVar2 = param_2;
  bVar1 = *param_2;
  param_2 = (byte *)(uint)bVar1;
  uVar3 = (uint)param_2;
  if (bVar1 == 10) {
    return 0;
  }
  bVar4 = bVar1 + 1;
  param_2 = (byte *)(uint)bVar4;
  pbVar6 = pbVar2 + uVar3 * 0xc + 4;
  *(undefined4 *)pbVar6 = *(undefined4 *)param_1;
  *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(pbVar6 + 8) = *(undefined4 *)(param_1 + 8);
  if ((*param_1 & 0x80) != 0) {
    if (bVar4 == 10) {
      return 0;
    }
    if ((*param_1 & 0xf0) == 0xf0) {
      uVar5 = 0;
      pbVar6 = pbVar2 + (int)param_2 * 0xc + 4;
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6[4] = 0;
      pbVar6[5] = 0;
      pbVar6[6] = 0;
      pbVar6[7] = 0;
    }
    else {
      pbVar6 = pbVar2 + (int)param_2 * 0xc + 4;
      *(undefined4 *)pbVar6 = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(pbVar6 + 4) = *(undefined4 *)(param_1 + 0x10);
      uVar5 = *(undefined4 *)(param_1 + 0x14);
    }
    *(undefined4 *)(pbVar6 + 8) = uVar5;
    bVar4 = bVar1 + 2;
    *pbVar6 = *pbVar6 | 0x80;
  }
  *pbVar2 = bVar4;
  return 1;
}

