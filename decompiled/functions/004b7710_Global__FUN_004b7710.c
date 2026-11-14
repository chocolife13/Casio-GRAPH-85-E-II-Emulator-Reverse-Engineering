// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7710
// entry: 004b7710  size: 56


int FUN_004b7710(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_004b7550(param_2);
  iVar2 = FUN_004b7550(param_1);
  puVar3 = (undefined1 *)(iVar2 + param_1);
  if (iVar1 != 0) {
    param_2 = param_2 - (int)puVar3;
    do {
      *puVar3 = puVar3[param_2];
      puVar3 = puVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *puVar3 = 0;
  return param_1;
}

