// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040e800
// entry: 0040e800  size: 79


void __fastcall FUN_0040e800(CDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057ab08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00567398();
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}

