// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00556d5a
// entry: 00556d5a  size: 104


void FUN_00556d5a(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0059d430;
  puStack_10 = &LAB_0055a424;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)();
  }
  local_8 = 0xffffffff;
  FUN_00556dc2();
  ExceptionList = local_14;
  return;
}

