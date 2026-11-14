// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040f230
// entry: 0040f230  size: 60


void __fastcall FUN_0040f230(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057abf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0059c3d4;
  local_4 = 0;
  FUN_00567a0d(param_1);
  ExceptionList = local_c;
  return;
}

