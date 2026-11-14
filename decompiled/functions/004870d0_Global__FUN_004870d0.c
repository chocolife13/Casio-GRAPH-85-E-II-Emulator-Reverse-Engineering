// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004870d0
// entry: 004870d0  size: 163


int FUN_004870d0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar3 = iVar3 + *(int *)(&DAT_005835cc + (uint)(*(byte *)(iVar2 + param_3) >> 4) * 4) +
                      *(int *)(&DAT_005835cc + (*(byte *)(iVar2 + param_3) & 0xf) * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  if (param_2 != 0) {
    cVar1 = (char)(param_2 + -1);
    if (3 < param_2 + -1) {
      return (iVar3 + *(int *)(&DAT_005835cc +
                              ((*(byte *)(param_1 + param_3) & 0xf) >> (7U - cVar1 & 0x1f) & 0xf) *
                              4) +
                      *(int *)(&DAT_005835cc + (uint)(*(byte *)(param_1 + param_3) >> 4) * 4)) * 0xc
             + 0x80;
    }
    iVar3 = iVar3 + *(int *)(&DAT_005835cc +
                            (*(byte *)(param_1 + param_3) >> (7U - cVar1 & 0x1f) & 0xf) * 4);
  }
  return iVar3 * 0xc + 0x80;
}

