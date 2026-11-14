// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004078c0
// entry: 004078c0  size: 180


void __fastcall FUN_004078c0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057a8a8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x10) != 0) {
    ExceptionList = &pvStack_c;
    FUN_00566960(*(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_005533e9(*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00566960(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00566960(*(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_005533e9(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00566960(*(int *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00566960(*(int *)(param_1 + 0x20));
  }
  local_4 = 0xffffffff;
  FUN_00407550();
  ExceptionList = pvStack_c;
  return;
}

