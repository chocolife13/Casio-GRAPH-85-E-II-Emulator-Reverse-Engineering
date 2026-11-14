// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a440
// entry: 0042a440  size: 70


undefined4 FUN_0042a440(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0042a410(param_1);
  iVar2 = FUN_0042a410(param_2);
  if (iVar1 == iVar2) {
    iVar1 = FUN_0042a410(param_1);
    iVar1 = FUN_0042a3d0(param_1,param_2,iVar1 << 1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

