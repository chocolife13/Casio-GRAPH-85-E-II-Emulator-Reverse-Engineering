// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aec20
// entry: 004aec20  size: 136


undefined4 FUN_004aec20(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_400 [1024];
  
  uVar1 = FUN_00531b30(0x8000);
  iVar2 = thunk_FUN_0041d810();
  if (-1 < iVar2) {
    iVar2 = FUN_0042a210(DAT_005d67e8,0x10000,0);
    if (-1 < iVar2) {
      FUN_00531ca0(0x8000,local_400,0);
      iVar2 = FUN_0042a210(local_400,uVar1,0x10000);
      if (-1 < iVar2) {
        return 0;
      }
    }
  }
  return 4;
}

