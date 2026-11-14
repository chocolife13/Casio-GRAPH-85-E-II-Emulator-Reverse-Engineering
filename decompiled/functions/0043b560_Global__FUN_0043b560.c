// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043b560
// entry: 0043b560  size: 181


undefined4 FUN_0043b560(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x54);
  if ((iVar1 != 7) || (iVar3 = FUN_0043c020(param_1), iVar3 != 1)) {
    iVar3 = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = iVar3 + -1;
    if (*(int *)(param_1 + 0x54) == 2) {
      *(int *)(param_1 + 0x1c) = iVar3 + -2;
    }
  }
  FUN_0043b620(param_1,1);
  if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x54) == 2) {
      if (iVar1 == 3) {
        *(undefined4 *)(param_1 + 0x1c) = 4;
        return 0;
      }
      if (iVar1 == 4) {
        *(undefined4 *)(param_1 + 0x1c) = 5;
        return 0;
      }
      if (iVar1 == 5) {
        *(undefined4 *)(param_1 + 0x1c) = 6;
        return 0;
      }
      if (iVar1 != 6) {
        if (iVar1 != 7) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x1c) = 7;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x1c) = 7;
      return 0;
    }
  }
  else if ((iVar2 == 2) && (*(int *)(param_1 + 0x54) == 1)) {
    return 0;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return 0;
}

