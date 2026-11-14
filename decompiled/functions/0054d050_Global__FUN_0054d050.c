// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054d050
// entry: 0054d050  size: 200


void FUN_0054d050(int param_1,short param_2,short param_3,short param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar4 = 1;
  if (param_2 == 4) {
    iVar6 = 7;
  }
  if ((param_4 == 1) || (param_4 == 3)) {
    uVar4 = 0;
  }
  if ((((0 < param_2) && (param_2 < 5)) && (0 < param_3)) && ((param_3 < 6 && (uVar4 < 8)))) {
    iVar7 = 8 - uVar4;
    pbVar3 = (byte *)((uVar4 + param_3 * 8) * 0x10 + iVar6 + 5 + param_1);
    do {
      if ((param_4 == 2) || (param_4 == 3)) {
        bVar1 = *pbVar3;
        bVar5 = 0x1f;
      }
      else {
        bVar1 = *pbVar3;
        bVar5 = 0xf;
      }
      iVar6 = 0;
      *pbVar3 = bVar5 ^ bVar1;
      do {
        iVar2 = iVar6 + 1;
        iVar6 = iVar6 + 1;
        pbVar3[iVar6] = ~pbVar3[iVar2];
      } while (iVar6 < 2);
      iVar7 = iVar7 + -1;
      pbVar3[3] = pbVar3[3] & 1;
      pbVar3 = pbVar3 + 0x10;
    } while (iVar7 != 0);
  }
  return;
}

