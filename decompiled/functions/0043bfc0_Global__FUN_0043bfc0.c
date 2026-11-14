// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043bfc0
// entry: 0043bfc0  size: 85


undefined4 FUN_0043bfc0(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 1) {
    FUN_00526090(0x22);
    FUN_005237c0(1);
    FUN_0052eb10(0);
    FUN_00523800(1);
    FUN_00523740();
    if (*(int *)(param_1 + 0x24) != 1) {
      FUN_005232d0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      if (*(int *)(param_1 + 0x34) == 0) {
        FUN_00527030();
      }
    }
  }
  return 0;
}

