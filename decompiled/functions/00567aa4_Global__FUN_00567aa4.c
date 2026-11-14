// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567aa4
// entry: 00567aa4  size: 25


undefined4 __thiscall FUN_00567aa4(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == param_2) break;
    param_1 = *(int *)(param_1 + 0x10);
  }
  return 1;
}

