// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040b160
// entry: 0040b160  size: 90


undefined4 __fastcall FUN_0040b160(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a8ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00566937(0x90,param_1);
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0040b1e0(iVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

