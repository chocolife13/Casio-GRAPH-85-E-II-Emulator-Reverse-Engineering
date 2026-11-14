// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056256d
// entry: 0056256d  size: 58


undefined4 FUN_0056256d(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 == 0x110) {
    uVar1 = FUN_0056345a(param_1);
    piVar2 = (int *)FUN_00567a3e(&PTR_s_CDialog_0059a1f8,uVar1);
    if (piVar2 == (int *)0x0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)(*piVar2 + 0xbc))();
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

