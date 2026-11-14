// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005389c0
// entry: 005389c0  size: 54


void FUN_005389c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 <= param_2) {
    iVar1 = (param_2 - param_1) + 1;
    iVar2 = param_1 * 4;
    do {
      iVar1 = iVar1 + -1;
      *(undefined4 *)((int)&DAT_005d6060 + iVar2) = *(undefined4 *)(iVar2 + param_1 * -4 + param_3);
      iVar2 = iVar2 + 4;
    } while (iVar1 != 0);
  }
  return;
}

