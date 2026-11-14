// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050ae30
// entry: 0050ae30  size: 145


void FUN_0050ae30(byte *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte local_400 [1024];
  
  pbVar6 = param_1 + 0x400;
  if ((param_2 & 0x80) == 0) {
    iVar3 = 0x400;
    pbVar7 = local_400;
    do {
      bVar1 = *pbVar6;
      bVar2 = *param_1;
      pbVar6 = pbVar6 + 1;
      param_1 = param_1 + 1;
      *pbVar7 = bVar1 | bVar2;
      iVar3 = iVar3 + -1;
      pbVar7 = pbVar7 + 1;
    } while (iVar3 != 0);
  }
  else {
    pbVar7 = param_1;
    if ((param_2 & 0x40) != 0) {
      pbVar7 = param_1 + 8;
      pbVar6 = param_1 + 0x408;
    }
    uVar4 = 0;
    do {
      uVar5 = uVar4 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      iVar3 = ((int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3) * 0x10 + uVar5;
      uVar5 = uVar4 + 1;
      local_400[uVar4] = pbVar6[iVar3] | pbVar7[iVar3];
      uVar4 = uVar5;
    } while ((int)uVar5 < 0x200);
  }
  FUN_00515d40(local_400,param_2);
  return;
}

