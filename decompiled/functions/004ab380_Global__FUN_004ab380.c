// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab380
// entry: 004ab380  size: 226


undefined4 FUN_004ab380(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_004aa010();
  if (uVar1 < 0x3c01) {
    return 0;
  }
  FUN_00531ca0(0x2000,DAT_005d6cc4,0);
  iVar2 = FUN_004aeef0(0x800,0);
  if (iVar2 != 0) {
    FUN_004ab1c0(iVar2);
    return 0;
  }
  iVar2 = FUN_004aef40(0x1000,0);
  if (iVar2 != 0) {
    FUN_004ab1c0(iVar2);
    return 0;
  }
  FUN_00531ca0(0x2000,DAT_005d6db4,1);
  FUN_00538e10((int)DAT_005d03cc);
  FUN_0053edf0((int)DAT_005d03ce);
  FUN_0053c6f0((int)DAT_005d03d0);
  FUN_00538d50((int)DAT_005d03d2);
  FUN_0053c690((int)DAT_005d03d4);
  FUN_00540a50((int)DAT_005d03d6);
  iVar2 = FUN_0040ad00();
  if (iVar2 == 1) {
    FUN_005265f0(0x7536,0);
  }
  return 1;
}

