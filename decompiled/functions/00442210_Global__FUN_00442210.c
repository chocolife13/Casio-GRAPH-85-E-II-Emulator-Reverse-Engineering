// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442210
// entry: 00442210  size: 89


int FUN_00442210(void)

{
  int iVar1;
  undefined1 local_4 [4];
  
  FUN_00414db0(local_4);
  thunk_FUN_0040add0();
  iVar1 = FUN_00442270();
  if (iVar1 == 0) {
    iVar1 = FUN_004408d0();
    if (iVar1 != 0) {
      FUN_00518200();
      FUN_00414db0(local_4);
      FUN_0052b240(iVar1);
      return iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  FUN_00414db0(local_4);
  return iVar1;
}

