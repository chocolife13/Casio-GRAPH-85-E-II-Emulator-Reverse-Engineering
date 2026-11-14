// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a94c0
// entry: 004a94c0  size: 72


void FUN_004a94c0(void)

{
  int iVar1;
  
  thunk_FUN_00407100();
  FUN_004aac30();
  FUN_004aaaa0();
  iVar1 = __setjmp3(&DAT_005d6ce0,0);
  DAT_005d6c32 = 0;
  FUN_004a95a0(iVar1);
  if (iVar1 == 0) {
    FUN_004a9520();
  }
  do {
    DAT_005d6c29 = 3;
    FUN_004a9d10();
  } while( true );
}

