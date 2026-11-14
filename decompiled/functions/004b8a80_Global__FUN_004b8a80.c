// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b8a80
// entry: 004b8a80  size: 213


byte FUN_004b8a80(undefined4 param_1)

{
  byte bVar1;
  char local_18 [4];
  char local_14 [4];
  char local_10 [4];
  char local_c [2];
  char local_a;
  
  local_18 = (char  [4])s_RANGE_005be200._0_4_;
  local_10 = (char  [4])s__TABLE_005be208._0_4_;
  local_c = (char  [2])s__TABLE_005be208._4_2_;
  local_14._0_2_ = s_RANGE_005be200._4_2_;
  local_a = s__TABLE_005be208[6];
  bVar1 = FUN_004aceb0(local_10,local_18,1);
  if (bVar1 == 0) {
    bVar1 = FUN_004ac130(local_10,local_18,0x24,param_1,0);
    if (0xf < bVar1) {
      return bVar1;
    }
  }
  else {
    if (((bVar1 != 0x41) && (bVar1 != 0x40)) && (bVar1 != 0x42)) {
      return bVar1;
    }
    bVar1 = FUN_004abb50(local_10,local_18,0x24,param_1);
    if (bVar1 != 0) {
      return bVar1;
    }
  }
  FUN_00518160();
  return 0;
}

