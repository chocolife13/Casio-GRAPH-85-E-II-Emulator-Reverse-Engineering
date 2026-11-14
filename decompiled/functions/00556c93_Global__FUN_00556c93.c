// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00556c93
// entry: 00556c93  size: 69


SIZE_T FUN_00556c93(LPCVOID param_1)

{
  int iVar1;
  SIZE_T SVar2;
  
  FUN_00558590(9);
  iVar1 = FUN_00558644(param_1);
  if (iVar1 == 0) {
    FUN_005585f1(9);
    SVar2 = HeapSize(DAT_005d96bc,0,param_1);
  }
  else {
    SVar2 = *(int *)((int)param_1 + -4) - 9;
    FUN_005585f1(9);
  }
  return SVar2;
}

