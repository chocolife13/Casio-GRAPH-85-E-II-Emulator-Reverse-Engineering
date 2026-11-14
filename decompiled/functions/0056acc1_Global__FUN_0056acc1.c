// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056acc1
// entry: 0056acc1  size: 124


void __thiscall FUN_0056acc1(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_208 [256];
  undefined1 local_108 [260];
  
  FUN_00569123(local_108,param_2);
  FUN_005674d5(local_108);
  param_1[0x13] = 0;
  iVar1 = FUN_0056937c(local_108,local_208,0x100);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x50))(local_208);
  }
  if (param_3 != 0) {
    iVar1 = param_1[8];
    iVar2 = FUN_0057497f();
    (**(code **)(**(int **)(iVar2 + 4) + 0x80))(iVar1);
  }
  return;
}

