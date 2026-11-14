// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044afa0
// entry: 0044afa0  size: 300


int FUN_0044afa0(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x214) == 1) {
    FUN_0044ab00(param_1);
    return 0;
  }
  if (*(int *)(param_1 + 0x204) == 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x204) != *(int *)(param_1 + 0x200)) {
    iVar3 = FUN_005262f0();
    if (iVar3 != 2) goto LAB_0044afed;
  }
  FUN_0044a900(0x7544,iVar1);
LAB_0044afed:
  iVar3 = FUN_004b7370(*(undefined1 *)(*(int *)(iVar1 + 0x1fc) + -1 + *(int *)(iVar1 + 0x200)));
  iVar5 = (iVar3 != 0) + 1;
  uVar2 = FUN_004ac8b0(1,*(undefined4 *)(param_2 + 4),iVar5,*(int *)(iVar1 + 0x200) + 9);
  iVar3 = FUN_0044e3e0(iVar1,uVar2);
  if (iVar3 == -1) {
    return 0;
  }
  *(int *)(iVar1 + 0x204) = *(int *)(iVar1 + 0x204) - iVar5;
  FUN_0044dfc0(iVar1,*(undefined4 *)(iVar1 + 0x200),*(undefined4 *)(iVar1 + 0x208),
               *(undefined4 *)(iVar1 + 0x20c));
  uVar4 = 0;
  iVar3 = iVar1;
  do {
    FUN_005232d0(1,uVar4 + 2);
    FUN_00523470(iVar3,0x15);
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x2a;
  } while (uVar4 < 6);
  FUN_005232d0(*(undefined4 *)(iVar1 + 0x208),*(int *)(iVar1 + 0x20c) + 1);
  iVar1 = param_2;
  FUN_004ad2a0(1,*(undefined4 *)(param_2 + 4),&param_1);
  *(int *)(*(int *)(iVar1 + 4) + 0x14) = param_1;
  return iVar5;
}

