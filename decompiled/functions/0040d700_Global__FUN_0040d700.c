// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040d700
// entry: 0040d700  size: 517


void FUN_0040d700(void)

{
  int iVar1;
  bool bVar2;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00526330();
  if (iVar1 == 0) {
    FUN_0040e4a0(0,0x4500);
  }
  FUN_0042fea0();
  if (DAT_005cdba4 != 1) {
    iVar1 = FUN_00413ad0(&local_20);
    if (iVar1 == 0) {
      DAT_005cdb64 = 0;
    }
    else {
      bVar2 = DAT_005cdb64 == 0;
      if (bVar2) {
        DAT_005cdb60 = local_20;
        DAT_005cd740 = local_1c;
      }
      DAT_005cdb64 = (uint)bVar2;
      local_20 = DAT_005cdb60 * 6;
      local_1c = DAT_005cd740 << 3;
      FUN_0040d4e0(bVar2,local_18,local_20,local_1c,local_18,local_14);
      FUN_0040d300(0,0xffffffff,0xffffffff);
    }
  }
  iVar1 = FUN_00413ad0(&local_10);
  if ((iVar1 == 0) || (DAT_005cdba4 != 1)) {
    DAT_005cdb6c = 0;
  }
  else {
    bVar2 = DAT_005cdb6c == 0;
    if (bVar2) {
      DAT_005cdb5c = DAT_005cd744;
      DAT_005cd74c = DAT_005cd748;
    }
    DAT_005cdb6c = (uint)bVar2;
    local_10 = DAT_005cdb5c;
    local_c = DAT_005cd74c;
    FUN_0040d4e0(bVar2,local_8,DAT_005cdb5c,DAT_005cd74c,local_8,local_4);
    FUN_0040d300(0,0xffffffff,0xffffffff);
  }
  iVar1 = FUN_0042fe80(local_24,&DAT_005cd750,&DAT_005cd758);
  if (iVar1 == 0) {
    DAT_005cdb68 = 0;
    FUN_0056339a();
    return;
  }
  bVar2 = DAT_005cdb68 != 0;
  if (bVar2) {
    DAT_005cd758 = DAT_005cd73c;
  }
  else {
    DAT_005cd754 = DAT_005cd750;
  }
  DAT_005cdb68 = (uint)!bVar2;
  DAT_005cd73c = DAT_005cd758;
  DAT_005cd750 = DAT_005cd754;
  FUN_0040d670(!bVar2,DAT_005cd754,DAT_005cd758);
  FUN_0040d300(0,0xffffffff,0xffffffff);
  FUN_0056339a();
  return;
}

