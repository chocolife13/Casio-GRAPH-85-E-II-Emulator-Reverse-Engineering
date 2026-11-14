// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00497260
// entry: 00497260  size: 253


void FUN_00497260(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((DAT_005d6dbc == 0) ||
      ((iVar1 = FUN_004956d0(DAT_005d6d88 + -1), iVar1 == 0x7000000 && (DAT_005d6d90 == 8)))) ||
     ((iVar1 = FUN_00495970(DAT_005d6d88), 0x38 < iVar1 &&
      ((0x37 < DAT_005d6d90 + iVar1 && (DAT_005d6d90 < 1)))))) {
    return;
  }
  iVar4 = DAT_005d6d88;
  if (DAT_005d6d90 + iVar1 < 0x39) {
    iVar1 = DAT_005d6d90;
    if (-1 < DAT_005d6d90) goto LAB_004972e4;
  }
  else if (iVar1 < 0x39) {
    iVar1 = 0x38 - iVar1;
    DAT_005d6d90 = iVar1;
    goto LAB_004972e4;
  }
  iVar1 = 0;
  DAT_005d6d90 = iVar1;
LAB_004972e4:
  while ((iVar4 != DAT_005d6dbc + -1 || (iVar2 = FUN_00495970(iVar4), 0x37 < iVar1 + iVar2))) {
    iVar2 = FUN_00495970(iVar4);
    iVar1 = iVar1 + iVar2;
    iVar4 = iVar4 + 1;
    iVar2 = DAT_005d6d88;
    iVar3 = DAT_005d6d90;
    if (0x37 < iVar1) {
joined_r0x00497338:
      while( true ) {
        if (iVar2 < 0) {
          return;
        }
        if (iVar3 < 1) break;
        if (iVar2 == 0) {
          DAT_005d6d90 = DAT_005d6d90 - iVar3;
          return;
        }
        iVar1 = FUN_00495970(iVar2 + -1);
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 - iVar1;
      }
      return;
    }
  }
  iVar3 = DAT_005d6d90 + ((0x38 - iVar1) - iVar2);
  iVar2 = DAT_005d6d88;
  DAT_005d6d90 = iVar3;
  goto joined_r0x00497338;
}

