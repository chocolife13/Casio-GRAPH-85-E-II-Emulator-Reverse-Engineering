// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00571a0f
// entry: 00571a0f  size: 42


undefined4 FUN_00571a0f(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00564b13();
  if (*(int *)(iVar1 + 0x50) == 0) {
    uVar2 = FUN_0056339a();
  }
  else {
    SetCursor(DAT_005d50ec);
    uVar2 = 1;
  }
  return uVar2;
}

