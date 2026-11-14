// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00431b10
// entry: 00431b10  size: 126


uint FUN_00431b10(char *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  
  uVar4 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar5 = ~uVar4 - 1;
  uVar4 = 0xffffffff;
  pbVar8 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (bVar2 != 0);
  iVar6 = ~uVar4 - 1;
  uVar4 = (uint)(iVar6 < iVar5);
  if (iVar5 < iVar6) {
    uVar4 = 0xffffffff;
  }
  if (iVar5 == iVar6) {
    iVar6 = 0;
    if (iVar5 < 1) {
      return 0;
    }
    iVar9 = (int)param_1 - (int)param_2;
    while( true ) {
      bVar2 = param_2[iVar9];
      bVar3 = *param_2;
      if (bVar2 >= bVar3 && bVar2 != bVar3) {
        return 1;
      }
      if (bVar2 < bVar3) break;
      iVar6 = iVar6 + 1;
      param_2 = param_2 + 1;
      if (iVar5 <= iVar6) {
        return 0;
      }
    }
    return 0xffffffff;
  }
  return uVar4;
}

