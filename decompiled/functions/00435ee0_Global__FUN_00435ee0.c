// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00435ee0
// entry: 00435ee0  size: 42


void FUN_00435ee0(int param_1)

{
  int iVar1;
  
  iVar1 = 0x10;
  if (param_1 != 0) {
    do {
      FUN_004125f0(iVar1,7,iVar1 + 0x17,7);
      iVar1 = iVar1 + 0x1c;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

