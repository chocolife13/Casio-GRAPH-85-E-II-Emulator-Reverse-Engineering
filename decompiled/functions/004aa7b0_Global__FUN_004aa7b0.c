// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aa7b0
// entry: 004aa7b0  size: 579


void FUN_004aa7b0(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  sbyte sVar8;
  sbyte sVar9;
  byte *pbVar10;
  int local_50;
  byte local_4c [55];
  byte local_15;
  byte local_11;
  byte local_d;
  byte local_9;
  byte local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  pbVar7 = param_1 + (uint)DAT_005d6d72 * 4;
  if ((int)pbVar7 <= param_3) {
    pbVar10 = local_4c;
    for (iVar6 = 0x13; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
      pbVar10 = pbVar10 + 4;
    }
    pbVar10 = param_1;
    if ((int)pbVar7 < 0xf) {
      pbVar10 = (&PTR_DAT_0058658c)[(int)pbVar7 * 4];
    }
    pbVar4 = local_4c + 5;
    iVar6 = 0x11;
    do {
      pbVar4[-1] = *pbVar10;
      *pbVar4 = pbVar10[1];
      pbVar4[1] = pbVar10[2];
      pbVar4[2] = pbVar10[3];
      pbVar4 = pbVar4 + 4;
      iVar6 = iVar6 + -1;
      pbVar10 = pbVar10 + 4;
    } while (iVar6 != 0);
    local_4 = 0x7f;
    local_3 = 0xff;
    local_2 = 0xff;
    local_1 = 0xfc;
    if (0x23 < (int)pbVar7) {
      pbVar7 = (byte *)0x23;
    }
    local_15 = local_15 & (&UNK_00586ba0)[(int)pbVar7 * 5];
    local_11 = local_11 & (&UNK_00586ba1)[(int)pbVar7 * 5];
    local_d = local_d & (&UNK_00586ba2)[(int)pbVar7 * 5];
    local_5 = local_5 & (&UNK_00586ba4)[(int)pbVar7 * 5];
    local_9 = local_9 & (&UNK_00586ba3)[(int)pbVar7 * 5];
    iVar6 = FUN_004138b0();
    pbVar7 = (byte *)(iVar6 + 0x70 + ((int)(param_1 + ((int)param_1 >> 0x1f & 3)) >> 2) * 0x130);
    uVar5 = (uint)param_1 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if (uVar5 == 0) {
      sVar8 = 0;
      sVar9 = 8;
      local_50 = 0x13;
      pbVar10 = local_4c + 1;
    }
    else if (uVar5 == 1) {
      sVar8 = 6;
      sVar9 = 2;
      local_50 = 0x13;
      pbVar7 = pbVar7 + 3;
      pbVar10 = local_4c + 1;
    }
    else if (uVar5 == 2) {
      sVar8 = 4;
      sVar9 = 4;
      local_50 = 0x13;
      pbVar7 = pbVar7 + 7;
      pbVar10 = local_4c + 1;
    }
    else {
      sVar8 = 2;
      sVar9 = 6;
      local_50 = 0x13;
      pbVar7 = pbVar7 + 0xb;
      pbVar10 = local_4c + 1;
    }
    do {
      if (param_2 == 0) {
        pbVar10[-1] = ~pbVar10[-1];
        *pbVar10 = ~*pbVar10;
        pbVar10[1] = ~pbVar10[1];
        pbVar10[2] = ~pbVar10[2] & 0xfc;
      }
      bVar1 = pbVar10[-1];
      bVar2 = *pbVar10;
      *pbVar7 = *pbVar7 | bVar1 >> sVar8;
      bVar3 = pbVar10[1];
      pbVar7[1] = pbVar7[1] | (bVar1 << sVar9) + (bVar2 >> sVar8);
      pbVar7[2] = pbVar7[2] | (bVar3 >> sVar8) + (bVar2 << sVar9);
      bVar1 = pbVar10[2];
      pbVar7[3] = pbVar7[3] | (bVar1 >> sVar8) + (bVar3 << sVar9);
      local_50 = local_50 + -1;
      pbVar7[4] = pbVar7[4] | bVar1 << sVar9;
      pbVar7 = pbVar7 + 0x10;
      pbVar10 = pbVar10 + 4;
    } while (local_50 != 0);
  }
  return;
}

