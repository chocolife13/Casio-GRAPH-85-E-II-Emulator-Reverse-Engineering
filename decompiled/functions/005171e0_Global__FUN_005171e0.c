// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005171e0
// entry: 005171e0  size: 38


void FUN_005171e0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00517250(param_1);
  if (iVar1 == 0) {
    *param_2 = 0;
    return;
  }
  *param_2 = *(undefined4 *)(iVar1 + -4);
  return;
}

