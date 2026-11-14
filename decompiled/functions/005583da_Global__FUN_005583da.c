// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005583da
// entry: 005583da  size: 86


void FUN_005583da(void)

{
  int iVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0059d498;
  puStack_10 = &LAB_0055a424;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_005582d3();
  if (*(int *)(iVar1 + 0x60) != 0) {
    local_8 = 1;
    iVar1 = FUN_005582d3();
    (**(code **)(iVar1 + 0x60))();
  }
  local_8 = 0xffffffff;
  FUN_0055bc4a();
  return;
}

