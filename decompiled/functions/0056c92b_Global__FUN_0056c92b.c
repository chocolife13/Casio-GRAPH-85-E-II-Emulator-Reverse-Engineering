// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c92b
// entry: 0056c92b  size: 75


void __thiscall
FUN_0056c92b(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00567a3e(&PTR_s_CCmdTarget_0059a9d8,*(undefined4 *)(param_1 + 0x20));
  if ((param_3 == -4) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0xc))(param_2,0xfffffffc,param_4,param_5);
  }
  else {
    FUN_00566555(param_2,param_3,param_4,param_5);
  }
  return;
}

