// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f57b0
// entry: 004f57b0  size: 154


undefined4
FUN_004f57b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [24];
  
  iVar1 = FUN_004f5850(param_1,param_2,local_18,2);
  if (iVar1 != 0) {
    iVar1 = FUN_004f5330(param_1,param_2,local_18,param_4,param_5);
    if (iVar1 == 0) {
      uVar2 = FUN_004f58f0(8,param_3);
      return uVar2;
    }
    return 1;
  }
  iVar1 = FUN_004e4020(local_18);
  if (iVar1 == 1) {
    uVar2 = FUN_004f58f0(1,param_3);
    return uVar2;
  }
  uVar2 = FUN_004f58f0(8,param_3);
  return uVar2;
}

