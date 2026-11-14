// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562d9d
// entry: 00562d9d  size: 101


undefined4 __fastcall FUN_00562d9d(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = FUN_00565976(*(undefined4 *)(param_1 + 0x40));
  }
  else {
    iVar1 = FUN_005659c6(*(int *)(param_1 + 0x4c));
  }
  if (iVar1 != 0) {
    iVar1 = FUN_00565709(0);
    if (iVar1 != 0) {
      iVar1 = FUN_00566152(0xe146);
      if (iVar1 != 0) {
        iVar1 = FUN_00562d47();
        FUN_00566342(-(iVar1 != 0) & 5);
      }
      return 1;
    }
  }
  FUN_00562c77(0xffffffff);
  return 0;
}

