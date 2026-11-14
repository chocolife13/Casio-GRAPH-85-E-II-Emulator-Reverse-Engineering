// decompiled from GRAPH85emulator.exe
// function: FUN_00407860 @ 00407860


int __thiscall FUN_00407860(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00407260();
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_00407a80(param_2);
  ExceptionList = local_c;
  return param_1;
}

