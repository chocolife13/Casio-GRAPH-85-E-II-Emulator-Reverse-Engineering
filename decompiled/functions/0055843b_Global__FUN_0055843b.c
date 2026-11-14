// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055843b
// entry: 0055843b  size: 79


void FUN_0055843b(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0059d4b0;
  puStack_10 = &LAB_0055a424;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_005cc3d4 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_005cc3d4)();
  }
  local_8 = 0xffffffff;
  FUN_005583da();
  return;
}

