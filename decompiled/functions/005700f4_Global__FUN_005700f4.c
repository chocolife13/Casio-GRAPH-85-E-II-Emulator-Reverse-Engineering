// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005700f4
// entry: 005700f4  size: 59


undefined4 __fastcall FUN_005700f4(int param_1)

{
  int iVar1;
  
  FUN_0056339a();
  iVar1 = FUN_0057497f();
  if (((*(int **)(iVar1 + 0x1038) != (int *)0x0) && (*(int *)(param_1 + 0x80) != 0)) &&
     (iVar1 = (**(code **)(**(int **)(iVar1 + 0x1038) + 0x20))
                        (param_1,*(undefined4 *)(param_1 + 0x84),*(int *)(param_1 + 0x80)),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

