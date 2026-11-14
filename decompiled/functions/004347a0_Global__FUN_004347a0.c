// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004347a0
// entry: 004347a0  size: 59


void FUN_004347a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar1 < 5) {
      *(uint *)(param_1 + 8) = uVar1;
      return;
    }
    iVar2 = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 8) = 5;
      *(uint *)(param_1 + 4) = uVar1 - 4;
      return;
    }
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}

