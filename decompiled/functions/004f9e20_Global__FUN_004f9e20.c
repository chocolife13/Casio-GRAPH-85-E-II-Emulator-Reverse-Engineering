// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9e20
// entry: 004f9e20  size: 36


undefined4 FUN_004f9e20(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == '.') {
    return 1;
  }
  if (*param_1 == '\x0f') {
    return 1;
  }
  uVar1 = FUN_004f9d40(param_1);
  return uVar1;
}

