// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00406450
// entry: 00406450  size: 77


undefined4 * __fastcall FUN_00406450(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057170d();
  local_4 = 0;
  FUN_00574a8a();
  *param_1 = &PTR_LAB_0057c918;
  ExceptionList = local_c;
  return param_1;
}

