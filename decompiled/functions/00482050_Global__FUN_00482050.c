// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482050
// entry: 00482050  size: 68


int FUN_00482050(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00527440(param_1,param_2);
  iVar2 = FUN_00527440(param_1,param_3);
  if (param_3 == 0) {
    iVar2 = iVar1;
  }
  if ((iVar1 != 0) && (iVar2 != 0)) {
    if (iVar2 < iVar1) {
      return iVar2;
    }
    return iVar1;
  }
  return 0;
}

