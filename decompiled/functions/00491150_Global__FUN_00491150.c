// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00491150
// entry: 00491150  size: 82


undefined4 FUN_00491150(void)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5860(local_18);
  FUN_004e5890(local_c);
  iVar1 = FUN_00469e60(&stack0x00000004,local_18);
  if (iVar1 < 1) {
    iVar1 = FUN_00469e60(&stack0x00000004,local_c);
    if (-1 < iVar1) {
      return 0;
    }
  }
  return 3;
}

