// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c88e
// entry: 0056c88e  size: 60


undefined4 __fastcall FUN_0056c88e(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = param_1;
  local_8 = (int *)(**(code **)(*param_1 + 0x54))();
  do {
    if (local_8 == (int *)0x0) {
      return 1;
    }
    piVar1 = (int *)(**(code **)(*param_1 + 0x58))(&local_8);
    iVar2 = (**(code **)(*piVar1 + 0x90))();
  } while (iVar2 != 0);
  return 0;
}

