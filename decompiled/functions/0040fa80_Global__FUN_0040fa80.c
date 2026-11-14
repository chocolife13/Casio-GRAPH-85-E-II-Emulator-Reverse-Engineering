// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040fa80
// entry: 0040fa80  size: 106


void __fastcall FUN_0040fa80(int param_1)

{
  undefined4 uVar1;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x74) = 0;
  local_10 = param_1;
  uVar1 = FUN_0040faf0(&local_10,0,0,&DAT_005cd010,0);
  local_4 = 0;
  FUN_00567485(uVar1);
  local_4 = 0xffffffff;
  FUN_00567398();
  ExceptionList = local_c;
  return;
}

