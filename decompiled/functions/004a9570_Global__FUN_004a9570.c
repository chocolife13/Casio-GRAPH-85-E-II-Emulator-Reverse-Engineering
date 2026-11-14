// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9570
// entry: 004a9570  size: 43


void FUN_004a9570(void)

{
  undefined4 uVar1;
  
  uVar1 = __setjmp3(&DAT_005d6d20,0);
  DAT_005d6c32 = 1;
  FUN_004a95a0(uVar1);
                    /* WARNING: Subroutine does not return */
  _longjmp((int *)&DAT_005d6ce0,1);
}

