// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00529b70
// entry: 00529b70  size: 43


int FUN_00529b70(int param_1)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_004b78f0(param_1);
    if (iVar1 == 0) {
      return param_1;
    }
    if (iVar1 == 0xf6) break;
    param_1 = FUN_004b7840(param_1);
  }
  return param_1 + 1;
}

