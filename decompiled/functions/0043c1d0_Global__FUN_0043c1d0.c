// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043c1d0
// entry: 0043c1d0  size: 82


int FUN_0043c1d0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  param_1 = param_1 + -1;
  if (param_1 == 0) {
    return 0;
  }
  do {
    uVar4 = 0;
    do {
      cVar1 = *(char *)(*(int *)(param_2 + 0x2d8) + iVar3);
      if ((cVar1 == '\r') || (cVar1 == '\f')) {
        uVar4 = 0x15;
      }
      else {
        iVar2 = FUN_004b6ab0(cVar1);
        if (iVar2 != 0) {
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x15);
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return iVar3;
}

