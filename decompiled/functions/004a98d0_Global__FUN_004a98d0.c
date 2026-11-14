// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a98d0
// entry: 004a98d0  size: 198


int FUN_004a98d0(int param_1,int param_2)

{
  int iVar1;
  
  DAT_005d6c29 = 3;
  iVar1 = FUN_004a99a0(param_1);
  if (iVar1 != 0) {
    DAT_005d6c29 = DAT_005d6806;
    return iVar1;
  }
  FUN_004a9de0();
  FUN_004aaa00(1);
  if (param_2 != 1) {
    FUN_004ab650(*(undefined4 *)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
    _longjmp((int *)&DAT_005d6d20,3);
  }
  iVar1 = __setjmp3(&DAT_005d6c40,0);
  DAT_005d6c32 = 0;
  FUN_004a95a0(iVar1);
  if (iVar1 != 0) {
    DAT_005d6c29 = DAT_005d6806;
    return 0;
  }
  DAT_005d6c29 = 0;
  iVar1 = FUN_004ab550();
  if (iVar1 == 0) {
    return 6;
  }
  DAT_005d6c29 = 3;
  FUN_004ab650(*(undefined4 *)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _longjmp((int *)&DAT_005d6d20,3);
}

