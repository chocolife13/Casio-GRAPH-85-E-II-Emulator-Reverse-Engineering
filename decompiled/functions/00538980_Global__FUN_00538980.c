// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538980
// entry: 00538980  size: 56


void FUN_00538980(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 <= param_2) {
    iVar4 = param_1 * 4;
    iVar2 = (param_2 - param_1) + 1;
    do {
      puVar1 = (undefined4 *)((int)&DAT_005d6060 + iVar4);
      iVar3 = iVar4 + param_1 * -4;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + -1;
      *(undefined4 *)(iVar3 + param_3) = *puVar1;
    } while (iVar2 != 0);
  }
  return;
}

