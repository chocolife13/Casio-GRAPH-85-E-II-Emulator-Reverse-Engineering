// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043bf70
// entry: 0043bf70  size: 77


undefined4 FUN_0043bf70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2c) == 1) {
    FUN_0043aa70(param_1);
  }
  else if (*(int *)(param_1 + 0x30) == 1) {
    iVar1 = FUN_00438c70(0x1a,param_1);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
  }
  else {
    uVar2 = FUN_00526040();
    iVar1 = FUN_00438c70(uVar2,param_1);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
  }
  return 0;
}

