// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9bf0
// entry: 004a9bf0  size: 264


undefined4 FUN_004a9bf0(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_005d6c29 == '\0') {
    iVar2 = *param_1;
    if ((iVar2 == 4) && (*param_2 == 9)) {
      if (DAT_005d6c30 != '\x01') {
        uVar1 = FUN_0040ad00();
        if ((uVar1 & 3) == 0) {
          DAT_005d6c29 = 3;
          if (DAT_005d6c32 != '\0') {
            DAT_005d6c32 = 0;
                    /* WARNING: Subroutine does not return */
            _longjmp(&DAT_005d6c40,4);
          }
          FUN_004a9e00();
          FUN_004a9d10();
          return 0;
        }
      }
    }
    else if ((iVar2 == 2) && ((*param_2 == 6 && (DAT_005d6c30 == '\0')))) {
      iVar2 = FUN_0040ad00();
      if (((iVar2 == 1) && (DAT_005d6d68 == 2)) && (1 < DAT_005d6cc0)) {
        if (DAT_005d6c32 == '\x01') {
                    /* WARNING: Subroutine does not return */
          _longjmp(&DAT_005d6c40,6);
        }
        iVar2 = FUN_004ab380();
        if (iVar2 == 0) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        _longjmp((int *)&DAT_005d6c80,7);
      }
    }
    else if ((iVar2 == 3) && ((*param_2 == 6 && (DAT_005d6c30 == '\0')))) {
      iVar2 = FUN_0040ad00();
      if ((iVar2 == 1) && ((DAT_005d6d68 == 2 && (DAT_005d6c32 == '\x01')))) {
                    /* WARNING: Subroutine does not return */
        _longjmp(&DAT_005d6c40,8);
      }
    }
  }
  return 1;
}

