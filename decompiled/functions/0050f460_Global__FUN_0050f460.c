// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050f460
// entry: 0050f460  size: 90


undefined2 FUN_0050f460(byte *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if ((*param_1 & 0xf0) == 0x20) {
    puVar1 = (undefined4 *)(**(int **)(param_1 + 8) + -0xc + param_3 * 0xc);
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    FUN_004fd9e0(param_1);
    return *(undefined2 *)(param_1 + 2);
  }
  *param_2 = *(undefined4 *)param_1;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  return 0;
}

