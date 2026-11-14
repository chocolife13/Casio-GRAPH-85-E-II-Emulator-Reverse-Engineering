// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048d2e0
// entry: 0048d2e0  size: 62


undefined4 FUN_0048d2e0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x24) == '\0') && (*(char *)(param_1 + 0x25) == '\0')) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x3c) == '\0') && (*(char *)(param_1 + 0x3d) == '\0')) {
    return 1;
  }
  uVar1 = FUN_0048d320(param_1 + 0x24,param_1 + 0x3c);
  return uVar1;
}

