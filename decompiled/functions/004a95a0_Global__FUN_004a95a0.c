// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a95a0
// entry: 004a95a0  size: 185


undefined4 FUN_004a95a0(undefined4 param_1)

{
  int iVar1;
  
  switch(param_1) {
  case 2:
    FUN_004a9a10();
    return param_1;
  case 3:
    FUN_004a9ae0();
    return param_1;
  case 4:
    FUN_004a9e00();
    FUN_004a9d10();
    DAT_005d6c29 = DAT_005d6806;
                    /* WARNING: Subroutine does not return */
    _longjmp((int *)&DAT_005d6c80,5);
  case 5:
  case 7:
    DAT_005d6c32 = 1;
    return param_1;
  case 6:
    DAT_005d6c32 = 0;
    FUN_004ab470();
    return param_1;
  case 8:
    DAT_005d6c32 = 0;
    FUN_004aa080();
                    /* WARNING: Subroutine does not return */
    _longjmp((int *)&DAT_005d6c80,9);
  case 9:
    break;
  case 10:
    DAT_005d6c32 = 1;
    FUN_004aaa80();
                    /* WARNING: Subroutine does not return */
    _longjmp(&DAT_005d6c40,0xb);
  case 0xb:
    DAT_005d6c32 = 0;
  default:
    return param_1;
  }
  iVar1 = FUN_0040ad00();
  if (iVar1 != 1) {
    DAT_005d6c32 = 1;
    return param_1;
  }
  FUN_005265f0(0x7536,0);
  DAT_005d6c32 = 1;
  return param_1;
}

