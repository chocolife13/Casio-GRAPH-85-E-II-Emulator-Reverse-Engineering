// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056bb18
// entry: 0056bb18  size: 67


undefined4 __thiscall
FUN_0056bb18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00566555(param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    if (*(int **)(param_1 + 0x24) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))(param_2,param_3,param_4,param_5);
      if (iVar1 != 0) goto LAB_0056bb4f;
    }
    uVar2 = 0;
  }
  else {
LAB_0056bb4f:
    uVar2 = 1;
  }
  return uVar2;
}

