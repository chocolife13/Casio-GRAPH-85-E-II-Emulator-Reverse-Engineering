// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00513f30
// entry: 00513f30  size: 31


undefined4 FUN_00513f30(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x14) != param_2)) {
    return 0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  return 1;
}

