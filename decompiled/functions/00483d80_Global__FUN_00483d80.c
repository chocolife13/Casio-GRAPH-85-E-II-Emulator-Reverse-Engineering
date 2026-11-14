// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00483d80
// entry: 00483d80  size: 81


undefined4 FUN_00483d80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004e72d0(param_1,param_2);
  uVar2 = param_2;
  if (iVar1 == 1) {
    uVar2 = param_1;
    param_1 = param_2;
  }
  iVar1 = FUN_004e72d0(uVar2,param_3);
  if ((iVar1 == 1) && (iVar1 = FUN_004e72d0(param_3,param_1), iVar1 == 1)) {
    return 1;
  }
  return 0;
}

