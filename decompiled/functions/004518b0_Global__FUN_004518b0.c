// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004518b0
// entry: 004518b0  size: 92


int FUN_004518b0(undefined4 param_1)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 == 0) {
    FUN_004e5780(local_18);
    FUN_004e57a0(local_c);
    iVar1 = FUN_004e7250(param_1,local_18);
    if (iVar1 == 0) {
      iVar1 = FUN_004e7290(param_1,local_c);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = 3;
  }
  return iVar1;
}

