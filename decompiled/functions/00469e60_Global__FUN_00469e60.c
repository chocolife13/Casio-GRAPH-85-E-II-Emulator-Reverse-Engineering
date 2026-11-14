// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00469e60
// entry: 00469e60  size: 52


int FUN_00469e60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004e71d0(param_1,param_2);
  if (iVar1 == 1) {
    return 0;
  }
  iVar1 = FUN_004e7250(param_1,param_2);
  return (-(uint)(iVar1 != 1) & 2) - 1;
}

