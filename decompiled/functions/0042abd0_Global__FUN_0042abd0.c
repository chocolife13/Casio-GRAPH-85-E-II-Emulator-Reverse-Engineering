// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042abd0
// entry: 0042abd0  size: 60


short * FUN_0042abd0(short *param_1,short param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_0042a410(param_1);
  psVar2 = param_1;
  if (-1 < iVar1) {
    do {
      if (*psVar2 == param_2) break;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_0042a410(param_1);
      psVar2 = psVar2 + 1;
    } while (iVar3 <= iVar1);
  }
  return param_1 + iVar3;
}

