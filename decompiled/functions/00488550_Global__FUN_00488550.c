// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00488550
// entry: 00488550  size: 119


int FUN_00488550(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = param_5;
  uVar1 = param_2;
  iVar2 = FUN_00486330(param_2,1,&param_2,param_5);
  if (iVar2 != 1) {
    return -1;
  }
  iVar2 = FUN_004871e0(param_1,uVar1,&param_5,iVar4);
  iVar4 = -1;
  if (iVar2 != 0) {
    if (param_4 != (int *)0x0) {
      *param_4 = param_5;
    }
    iVar4 = param_3;
    if ((0 < param_3) || (iVar4 = param_5, 0 < param_5)) {
      psVar3 = (short *)(iVar2 + iVar4 * 4);
      do {
        if (*psVar3 != -1) {
          return iVar4;
        }
        iVar4 = iVar4 + -1;
        psVar3 = psVar3 + -2;
      } while (0 < iVar4);
    }
  }
  return iVar4;
}

