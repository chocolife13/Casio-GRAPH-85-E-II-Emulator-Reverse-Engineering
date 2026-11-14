// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00401ff0
// entry: 00401ff0  size: 200


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401ff0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00401e70(DAT_005d958c);
  iVar2 = FUN_00401e70(DAT_005d9578);
  if (((byte)DAT_005d8cbc & 1) == 1) {
    if ((DAT_005d8cbc & 4) == 0) {
      if ((DAT_005d8cbc & 2) != 0) {
        iVar2 = iVar2 + DAT_005d8c94;
      }
    }
    else {
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar2 + iVar1;
    if (iVar1 < 100000000) {
LAB_00402092:
      _DAT_005d8cb8 = FUN_00401ee0(iVar1);
      DAT_005d8cbc = DAT_005d8cbc & 0xffffefff;
      DAT_005d8c94 = 0;
      return;
    }
    iVar1 = iVar1 + -100000000;
  }
  else {
    if ((DAT_005d8cbc & 4) == 0) {
      if ((DAT_005d8cbc & 2) != 0) {
        iVar1 = iVar1 - DAT_005d8c94;
      }
      iVar1 = iVar1 - iVar2;
    }
    else {
      iVar1 = (iVar1 - iVar2) + -1;
    }
    if (-1 < iVar1) goto LAB_00402092;
    iVar1 = iVar1 + 100000000;
  }
  _DAT_005d8cb8 = FUN_00401ee0(iVar1);
  DAT_005d8cbc = DAT_005d8cbc | 0x1000;
  DAT_005d8c94 = 1;
  return;
}

