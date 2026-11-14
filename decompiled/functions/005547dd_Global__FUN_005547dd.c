// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005547dd
// entry: 005547dd  size: 125


undefined4 FUN_005547dd(DWORD *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0059d2c0;
  puStack_10 = &LAB_0055a424;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  BVar1 = TlsSetValue(DAT_005cc3d0,param_1);
  if (BVar1 == 0) {
    __amsg_exit(0x10);
  }
  DVar2 = GetCurrentThreadId();
  *param_1 = DVar2;
  if (DAT_005da90c != (code *)0x0) {
    (*DAT_005da90c)();
  }
  local_8 = 0;
  uVar3 = (*(code *)param_1[0x12])(param_1[0x13]);
  FUN_00554879(uVar3);
  ExceptionList = local_14;
  return 0;
}

