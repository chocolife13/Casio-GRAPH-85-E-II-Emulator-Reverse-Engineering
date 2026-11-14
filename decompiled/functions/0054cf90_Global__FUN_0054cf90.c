// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054cf90
// entry: 0054cf90  size: 182


void FUN_0054cf90(int param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar3 = 0;
  uVar2 = 1;
  if (param_2 == 3) {
    iVar3 = 7;
  }
  if ((param_4 == 1) || (param_4 == 3)) {
    uVar2 = 0;
  }
  if ((((0 < param_2) && (param_2 < 5)) && (0 < param_3)) && ((param_3 < 6 && (uVar2 < 8)))) {
    iVar5 = 8 - uVar2;
    pbVar4 = (byte *)((uVar2 + param_3 * 8) * 0x10 + iVar3 + 1 + param_1);
    do {
      if ((param_4 == 2) || (param_4 == 3)) {
        *pbVar4 = *pbVar4 ^ 1;
      }
      iVar3 = 0;
      do {
        iVar1 = iVar3 + 1;
        iVar3 = iVar3 + 1;
        pbVar4[iVar3] = ~pbVar4[iVar1];
      } while (iVar3 < 3);
      iVar5 = iVar5 + -1;
      pbVar4[4] = pbVar4[4] & 0x1f;
      pbVar4 = pbVar4 + 0x10;
    } while (iVar5 != 0);
  }
  return;
}

