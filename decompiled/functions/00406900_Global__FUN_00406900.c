// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00406900
// entry: 00406900  size: 82


void FUN_00406900(void)

{
  CDialog local_68 [92];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a808;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004068d0();
  local_4 = 0;
  FUN_00562b17();
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_68);
  ExceptionList = pvStack_c;
  return;
}

