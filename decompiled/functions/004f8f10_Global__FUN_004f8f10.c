// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f8f10
// entry: 004f8f10  size: 109


undefined4 FUN_004f8f10(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 1) == '\x13') {
    iVar1 = FUN_004300c0();
    if (iVar1 != 0) {
      uVar2 = FUN_004f58f0(iVar1,param_3);
      return uVar2;
    }
  }
  else {
    iVar1 = FUN_004300c0();
    if (iVar1 != 0) {
      uVar2 = FUN_004f58f0(iVar1,param_3);
      return uVar2;
    }
  }
  FUN_004fe330(param_2,param_1);
  iVar1 = FUN_004f9b40(param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_004f58f0(2,param_3);
    return uVar2;
  }
  return 1;
}

