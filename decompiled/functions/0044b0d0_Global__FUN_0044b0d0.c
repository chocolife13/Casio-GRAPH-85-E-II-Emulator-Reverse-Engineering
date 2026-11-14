// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044b0d0
// entry: 0044b0d0  size: 136


undefined4 FUN_0044b0d0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x214) == 1) {
    FUN_0044ab00(param_2);
    return 0;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 0x12) == '\x01') {
    uVar3 = 0x1a;
  }
  else {
    uVar3 = FUN_00526040();
  }
  FUN_0044ab70(uVar3,param_2,param_3);
  uVar1 = 0;
  iVar2 = param_2;
  do {
    FUN_005232d0(1,uVar1 + 2);
    FUN_00523470(iVar2,0x15);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x2a;
  } while (uVar1 < 6);
  FUN_005232d0(*(undefined4 *)(param_2 + 0x208),*(int *)(param_2 + 0x20c) + 1);
  return uVar3;
}

