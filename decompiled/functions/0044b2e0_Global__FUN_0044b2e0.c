// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044b2e0
// entry: 0044b2e0  size: 274


undefined4 FUN_0044b2e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x214) == 0) {
    return 0;
  }
  uVar6 = *(uint *)(param_1 + 0x224);
  uVar1 = *(uint *)(param_1 + 0x218);
  if (uVar6 < uVar1) {
    iVar2 = FUN_004b7370(CONCAT31((int3)(uVar1 >> 8),
                                  *(undefined1 *)(*(int *)(param_1 + 0x1fc) + -1 + uVar1)));
    iVar3 = *(int *)(param_1 + 0x218);
  }
  else {
    iVar2 = FUN_004b7370(*(undefined1 *)(*(int *)(param_1 + 0x1fc) + -1 + uVar6));
    iVar3 = *(int *)(param_1 + 0x224);
    uVar6 = uVar1;
  }
  iVar3 = ((iVar2 + iVar3) - uVar6) + 1;
  FUN_00523740();
  FUN_0052f840();
  thunk_FUN_0040add0();
  uVar6 = *(uint *)(param_1 + 0x224);
  uVar1 = *(uint *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x214) = 0;
  uVar4 = FUN_005262f0();
  FUN_00526300(1);
  if (0 < iVar3) {
    do {
      if ((uVar1 < uVar6) && (iVar5 != 0)) {
        FUN_0044a900(0x7544,param_1);
      }
      iVar2 = FUN_0044afa0(param_1,param_2);
      if (iVar2 == 2) {
        iVar5 = iVar5 + 1;
      }
      iVar2 = FUN_0052f820();
    } while ((iVar2 != 1) && (iVar5 = iVar5 + 1, iVar5 < iVar3));
  }
  FUN_00526300(uVar4);
  iVar5 = 0;
  do {
    FUN_005232d0(1,iVar5 + 2);
    FUN_00523470(param_1,0x15);
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 0x2a;
  } while (iVar5 < 6);
  return 0;
}

