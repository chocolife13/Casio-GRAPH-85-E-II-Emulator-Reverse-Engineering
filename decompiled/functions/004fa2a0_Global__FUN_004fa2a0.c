// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fa2a0
// entry: 004fa2a0  size: 79


undefined4 FUN_004fa2a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004f9ac0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004fa240(param_1);
  }
  if (iVar1 == 1) {
    return 0;
  }
  iVar1 = FUN_004fa050(param_1);
  if (iVar1 == 1) {
    return 1;
  }
  iVar1 = FUN_004f9e70(param_1);
  if (iVar1 == 1) {
    return 1;
  }
  uVar2 = FUN_004fa350(param_1);
  return uVar2;
}

