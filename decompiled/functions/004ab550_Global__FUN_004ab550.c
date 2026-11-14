// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab550
// entry: 004ab550  size: 165


undefined4 FUN_004ab550(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_4;
  
  local_4 = 1;
  uVar1 = FUN_004aa010();
  if (uVar1 < 0x3c01) {
    return 0;
  }
  FUN_00531ca0(0x2000,DAT_005d6cc4,0);
  uVar2 = FUN_00495830(4,&local_4);
  FUN_004117b0(&DAT_005bfd08,s_EACT1_005bfd10,uVar2);
  iVar3 = FUN_004aeef0(0x800,0);
  if (iVar3 != 0) {
    FUN_004ab1c0(iVar3);
    return 0;
  }
  iVar3 = FUN_004aef40(0x1000,0);
  if (iVar3 != 0) {
    FUN_004ab1c0(iVar3);
    return 0;
  }
  if (local_4 == 0) {
    FUN_00526070(0x53,0);
  }
  return 1;
}

