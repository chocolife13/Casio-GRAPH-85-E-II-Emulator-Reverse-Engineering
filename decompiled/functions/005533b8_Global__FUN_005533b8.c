// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005533b8
// entry: 005533b8  size: 49


uint FUN_005533b8(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_005572ad(param_1);
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_0055759b(param_1);
  }
  else {
    uVar2 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  FUN_005572ff(param_1);
  return uVar2;
}

