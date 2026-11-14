// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5240
// entry: 004f5240  size: 70


undefined4 FUN_004f5240(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004f9960(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_3 != 0) {
    iVar1 = FUN_004f9a00(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar2 = FUN_004f58f0(2,param_2);
  return uVar2;
}

