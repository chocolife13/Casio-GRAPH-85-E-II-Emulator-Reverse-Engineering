// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aefb0
// entry: 004aefb0  size: 171


undefined4 FUN_004aefb0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  byte local_24 [8];
  char local_1c [2];
  char local_1a;
  byte local_18 [24];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0;
  local_18[5] = 0;
  local_18[6] = 0;
  local_18[7] = 0;
  local_18[8] = 0;
  local_18[9] = 0;
  local_18[10] = 0;
  local_18[0xb] = 0;
  local_24._4_4_ = s_NormalMode_005c07b0._4_4_;
  local_18[0xc] = 0;
  local_18[0xd] = 0;
  local_18[0xe] = 0;
  local_18[0xf] = 0;
  local_24._0_4_ = s_NormalMode_005c07b0._0_4_;
  local_18[0x10] = 0;
  local_18[0x11] = 0;
  local_18[0x12] = 0;
  local_18[0x13] = 0;
  local_18[0x14] = 0;
  local_18[0x15] = 0;
  local_1c = (char  [2])s_NormalMode_005c07b0._8_2_;
  local_1a = s_NormalMode_005c07b0[10];
  iVar2 = FUN_0042a1f0(local_18,0xb,0x1ffea);
  if (-1 < iVar2) {
    pbVar4 = local_24;
    pbVar3 = local_18;
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_004af044:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_004af049;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_004af044;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_004af049:
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

