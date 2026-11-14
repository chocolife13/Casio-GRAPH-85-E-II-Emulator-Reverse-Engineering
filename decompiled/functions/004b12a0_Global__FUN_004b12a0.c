// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b12a0
// entry: 004b12a0  size: 82


void FUN_004b12a0(void)

{
  int iVar1;
  int iVar2;
  undefined1 local_20c [524];
  
  FUN_004b10d0();
  iVar2 = 1;
  do {
    FUN_004b0e10(local_20c,iVar2);
    iVar1 = FUN_0042a080(local_20c,0);
    if (iVar1 != 0) {
      FUN_0052b240(4);
      return;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x3f4);
  return;
}

