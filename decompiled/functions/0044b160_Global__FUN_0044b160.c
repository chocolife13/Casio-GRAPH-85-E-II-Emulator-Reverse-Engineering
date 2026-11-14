// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044b160
// entry: 0044b160  size: 132


undefined4 FUN_0044b160(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x214) != 0) {
    uVar4 = *(uint *)(param_1 + 0x224);
    uVar1 = *(uint *)(param_1 + 0x218);
    if (uVar4 < uVar1) {
      iVar2 = FUN_004b7370(CONCAT31((int3)(uVar1 >> 8),
                                    *(undefined1 *)(*(int *)(param_1 + 0x1fc) + -1 + uVar1)));
      iVar3 = *(int *)(param_1 + 0x218);
    }
    else {
      iVar2 = FUN_004b7370(*(undefined1 *)(*(int *)(param_1 + 0x1fc) + -1 + uVar4));
      iVar3 = *(int *)(param_1 + 0x224);
      uVar4 = uVar1;
    }
    iVar3 = FUN_004b7dd0(*(int *)(param_1 + 0x1fc) + -1 + uVar4,((iVar2 + iVar3) - uVar4) + 1);
    if (iVar3 != 0) {
      FUN_0052b240(4);
    }
  }
  return 0;
}

