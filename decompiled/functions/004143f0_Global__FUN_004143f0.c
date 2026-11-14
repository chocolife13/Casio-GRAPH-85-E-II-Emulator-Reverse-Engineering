// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004143f0
// entry: 004143f0  size: 127


void FUN_004143f0(uint param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  uVar2 = param_3;
  if ((int)param_3 < (int)param_1) {
    param_3 = param_1;
    param_1 = uVar2;
  }
  iVar5 = param_2;
  if (param_4 < param_2) {
    iVar5 = param_4;
    param_4 = param_2;
  }
  for (; (int)param_1 <= (int)param_3; param_1 = param_1 + 1) {
    if (iVar5 <= param_4) {
      uVar2 = param_1 & 0x80000007;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
      }
      bVar1 = (&DAT_0057d65c)[uVar2];
      iVar3 = (param_4 - iVar5) + 1;
      pbVar4 = (byte *)((int)&DAT_005d8280 +
                       iVar5 * 0x10 + ((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3));
      do {
        iVar3 = iVar3 + -1;
        *pbVar4 = *pbVar4 ^ bVar1;
        pbVar4 = pbVar4 + 0x10;
      } while (iVar3 != 0);
    }
  }
  return;
}

