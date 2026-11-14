// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9690
// entry: 004a9690  size: 91


void FUN_004a9690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_005d6c29 = 3;
  iVar1 = FUN_004a96f0(param_1,param_2,param_3,param_4,1);
  if (iVar1 != 0) {
    DAT_005d6c29 = DAT_005d6806;
    return;
  }
  FUN_004aaa00(0);
  if (DAT_005d6d68 == 2) {
    FUN_004ab2a0();
  }
                    /* WARNING: Subroutine does not return */
  _longjmp((int *)&DAT_005d6ce0,2);
}

