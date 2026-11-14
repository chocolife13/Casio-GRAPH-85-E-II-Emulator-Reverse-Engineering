// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040e740
// entry: 0040e740  size: 184


void __fastcall FUN_0040e740(int param_1)

{
  int iVar1;
  undefined4 uStack_210;
  CDialog local_204 [504];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aaf6;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x5c) == 0) {
    uStack_210 = 0;
    ExceptionList = &local_c;
    FUN_005603ea(1,&DAT_005a9320,s_Gy363_keys_005a8dec,0x1000,&DAT_005a9328);
    local_4 = 0;
    uStack_210 = 0x40e79a;
    iVar1 = FUN_0056054c();
    if (iVar1 == 1) {
      FUN_00560627(&uStack_210);
      FUN_0040e640();
    }
    local_4 = 1;
    uStack_210 = 0x40e7ce;
    FUN_00567398();
    local_4 = 0xffffffff;
    uStack_210 = 0x40e7e2;
    CDialog::~CDialog(local_204);
  }
  ExceptionList = local_c;
  return;
}

