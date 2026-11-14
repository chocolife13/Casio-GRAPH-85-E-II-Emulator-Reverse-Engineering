// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1640
// entry: 004f1640  size: 60


undefined4 FUN_004f1640(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00530340(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00530230();
    if (iVar1 != 0) {
      uVar2 = FUN_004f58f0(4,param_1);
      return uVar2;
    }
    FUN_00530340(param_2);
  }
  return 1;
}

