// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ac75
// entry: 0056ac75  size: 73


undefined4 __fastcall FUN_0056ac75(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *local_8;
  
  local_8 = param_1;
  local_8 = (int *)(**(code **)(*param_1 + 0x60))();
  do {
    if (local_8 == (int *)0x0) {
      uVar2 = (**(code **)(*param_1 + 0x90))();
      return uVar2;
    }
    (**(code **)(*param_1 + 100))(&local_8);
    iVar1 = FUN_005649b3();
  } while ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) < 1));
  return 1;
}

