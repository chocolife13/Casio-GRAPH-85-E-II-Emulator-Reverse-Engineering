// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482010
// entry: 00482010  size: 64


void FUN_00482010(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_005274d0(0,param_1);
  if (iVar1 == 1) {
    iVar1 = 1;
    if (param_2 != 0) {
      iVar1 = FUN_005274d0(0,param_2);
    }
    if ((param_3 != 0) && (iVar1 == 1)) {
      FUN_005274d0(0,param_3);
    }
  }
  return;
}

