// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aaf90
// entry: 004aaf90  size: 153


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aaf90(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_004aaf30(0);
    if (iVar1 <= DAT_005d6e50) {
      DAT_005d6e50 = 0;
    }
    DAT_005d6e24 = FUN_004aaf60(0,DAT_005d6e50);
    DAT_005d6e1c = 0xffff;
    _DAT_005d6e40 = 0;
    _DAT_005d6e44 = 0;
    DAT_005d6e48 = 0;
    return;
  }
  iVar1 = FUN_004aaf30(1);
  if (iVar1 <= DAT_005d6e4c) {
    DAT_005d6e4c = 0;
  }
  DAT_005d6e20 = FUN_004aaf60(1,DAT_005d6e4c);
  _DAT_005d6e30 = 0;
  _DAT_005d6e34 = 0;
  DAT_005d6e3a = 0xffff;
  DAT_005d6e38 = 0;
  return;
}

