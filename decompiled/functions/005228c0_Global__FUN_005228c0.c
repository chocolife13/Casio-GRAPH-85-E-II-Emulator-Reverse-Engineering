// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005228c0
// entry: 005228c0  size: 99


void FUN_005228c0(int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar3 = -(int)param_1;
  pbVar7 = (byte *)(param_1 + 3);
  do {
    iVar6 = -3;
    do {
      cVar4 = FUN_00515da0(*param_1 + iVar6,pbVar7 + param_1[1] + iVar3 + -0xf);
      if (cVar4 == '\0') {
        bVar5 = *pbVar7 & 0xfe;
      }
      else {
        bVar5 = *pbVar7 | 1;
      }
      *pbVar7 = bVar5;
      iVar6 = iVar6 + 1;
      *pbVar7 = bVar5 << 1;
    } while (iVar6 < 4);
    pbVar1 = pbVar7 + iVar3;
    pbVar2 = pbVar7 + iVar3;
    pbVar7 = pbVar7 + 1;
    pbVar2[(int)param_1] = pbVar1[(int)param_1] >> 1;
  } while ((int)(pbVar7 + iVar3 + -0xf) < 4);
  return;
}

