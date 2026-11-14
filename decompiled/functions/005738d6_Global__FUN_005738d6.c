// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005738d6
// entry: 005738d6  size: 42


int __fastcall FUN_005738d6(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xd0))();
  if (iVar1 != 0) {
    return param_1[0x1e];
  }
  if ((param_1[0x1c] != 0) && (*(int *)(param_1[0x1c] + 0x78) != 0)) {
    return 1;
  }
  return 0;
}

