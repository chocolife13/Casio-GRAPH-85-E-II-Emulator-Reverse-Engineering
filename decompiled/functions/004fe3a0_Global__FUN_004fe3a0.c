// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fe3a0
// entry: 004fe3a0  size: 63


void FUN_004fe3a0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + -1;
  param_1[1] = *(undefined1 *)(iVar1 + -1);
  puVar2 = (undefined1 *)(*param_2 + -1);
  *param_2 = (int)puVar2;
  *param_1 = *puVar2;
  iVar1 = FUN_004b7370(CONCAT31((int3)((uint)puVar2 >> 8),*(undefined1 *)*param_2));
  if (iVar1 == 0) {
    *param_2 = *param_2 + 1;
    *param_1 = param_1[1];
  }
  return;
}

