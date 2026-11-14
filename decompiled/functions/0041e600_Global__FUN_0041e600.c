// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041e600
// entry: 0041e600  size: 68


undefined4 FUN_0041e600(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041bf40(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00419fc0(0xfffffffe);
    return uVar2;
  }
  iVar1 = FUN_0041e440(param_1,param_2,param_3);
  if (iVar1 < 0) {
    uVar2 = FUN_00419fc0(iVar1);
    return uVar2;
  }
  return 0;
}

