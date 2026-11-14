// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00498110
// entry: 00498110  size: 178


bool FUN_00498110(uint param_1)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  
  uVar3 = (ushort)DAT_005d5730;
  if ((short)uVar3 < 0) {
    DAT_005d6d90 = DAT_005d6d90 - (short)uVar3;
  }
  if (0x30 < (short)uVar3) {
    DAT_005d6d90 = DAT_005d6d90 + (0x30 - (short)uVar3);
  }
  bVar2 = 0x30 < uVar3;
  if (((short)uVar3 < 9) && (DAT_005d6d90 < 0)) {
    if (DAT_005d6d90 == -9 || -DAT_005d6d90 < 9) {
      DAT_005d6d90 = 0;
    }
    else {
      DAT_005d6d90 = DAT_005d6d90 + 9;
    }
    bVar2 = true;
  }
  if (0x26 < (short)uVar3) {
    iVar1 = (param_1 & 0xff) + DAT_005d6d90;
    if (0x38 < iVar1) {
      if (10 < iVar1 + -0x38) {
        DAT_005d6d90 = DAT_005d6d90 + -10;
        return true;
      }
      bVar2 = true;
      DAT_005d6d90 = 0x38 - (param_1 & 0xff);
    }
  }
  return bVar2;
}

