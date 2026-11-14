// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004063c0
// entry: 004063c0  size: 90


undefined4 __fastcall FUN_004063c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a77a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00566937(0x138,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00406450(iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

