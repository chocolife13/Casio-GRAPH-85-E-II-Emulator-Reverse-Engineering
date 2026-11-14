// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005470a0
// entry: 005470a0  size: 134


int FUN_005470a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00546ee0(param_1,param_2,param_3,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00546ee0(param_1,param_2,param_3,2);
    if (iVar1 != 0) {
      FUN_00546d00(param_1,param_2,param_3,0,0);
      return iVar1;
    }
    iVar1 = FUN_00546ee0(param_1,param_2,param_3,1);
    if (iVar1 != 0) {
      FUN_00546d00(param_1,param_2,param_3,0,0);
      FUN_00546d00(param_1,param_2,param_3,0,2);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

