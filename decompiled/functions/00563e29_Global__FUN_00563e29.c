// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00563e29
// entry: 00563e29  size: 61


void FUN_00563e29(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 1) {
    piVar1 = (int *)FUN_00567998(param_2[5]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(param_2);
      return;
    }
  }
  else {
    iVar2 = FUN_0056516f(param_2[5],0);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_0056339a();
  return;
}

