// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004820a0
// entry: 004820a0  size: 86


int FUN_004820a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00527440(param_1,param_2);
  iVar2 = FUN_00527440(param_1,param_3);
  iVar3 = FUN_00527440(param_1,param_4);
  if (param_3 == 0) {
    iVar2 = iVar1;
  }
  if (param_4 == 0) {
    iVar3 = iVar1;
  }
  if ((iVar1 == iVar2) && (iVar1 == iVar3)) {
    return iVar1;
  }
  return 0;
}

