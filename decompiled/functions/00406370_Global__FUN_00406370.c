// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00406370
// entry: 00406370  size: 60


void __fastcall FUN_00406370(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057a758;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0059aee4;
  local_4 = 0;
  FUN_0056a73c(param_1);
  ExceptionList = local_c;
  return;
}

