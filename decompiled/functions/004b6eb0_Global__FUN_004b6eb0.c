// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b6eb0
// entry: 004b6eb0  size: 60


int FUN_004b6eb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_004b6ca0(param_1);
  puVar2 = (undefined1 *)(iVar1 + param_1);
  if (param_3 != 0) {
    iVar1 = param_2 - (int)puVar2;
    do {
      *puVar2 = puVar2[iVar1];
      puVar2 = puVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *puVar2 = 0;
    return param_2;
  }
  *puVar2 = 0;
  return param_2;
}

