// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004064c0
// entry: 004064c0  size: 85


void __fastcall FUN_004064c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057a7b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0057c918;
  local_4 = 0;
  CStatusBar::~CStatusBar((CStatusBar *)(param_1 + 0x2f));
  local_4 = 0xffffffff;
  FUN_005717eb();
  ExceptionList = local_c;
  return;
}

