// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005683d2
// entry: 005683d2  size: 75


undefined4 * __thiscall FUN_005683d2(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 & 2) == 0) {
    FUN_00567398();
    puVar1 = param_1;
    if ((param_2 & 1) != 0) {
      FUN_00566960(param_1);
    }
  }
  else {
    puVar1 = param_1 + -1;
    FUN_00556d5a(param_1,4,*puVar1,FUN_00567398);
    if ((param_2 & 1) != 0) {
      FUN_00566960(puVar1);
    }
  }
  return puVar1;
}

