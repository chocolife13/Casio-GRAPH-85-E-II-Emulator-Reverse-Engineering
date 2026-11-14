// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a7e50
// entry: 004a7e50  size: 231


undefined4 FUN_004a7e50(void)

{
  int iVar1;
  int local_30;
  int local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined1 *local_4;
  
  local_28 = s_____TEST_____005c0384;
  local_24 = s__1__Character_Code_005c0370;
  local_20 = s__2__Mini_Chara_Code_005c035c;
  local_1c = s__3__Message_Data_005c0348;
  local_18 = s__4__SETUP_005c033c;
  local_14 = s__5__Popup_test_005c032c;
  local_10 = &DAT_005cd010;
  local_c = &DAT_005cd010;
  local_8 = &DAT_005cd010;
  local_4 = &DAT_005cd010;
  do {
    while( true ) {
      local_30 = 1;
      do {
        FUN_005232d0(1,local_30);
        FUN_00523470((&local_2c)[local_30],0x15);
        local_30 = local_30 + 1;
      } while (local_30 < 9);
      iVar1 = FUN_00526620(&local_2c);
      if (iVar1 == 0) break;
      switch(local_2c) {
      case 0x31:
        FUN_004a8600();
        break;
      case 0x32:
        FUN_004a87c0();
        break;
      case 0x33:
        FUN_004a8a70();
        break;
      case 0x34:
        FUN_0052d2d0(&DAT_005c0328,&local_30);
        break;
      case 0x35:
        FUN_004a7f50();
      }
    }
  } while ((local_2c != 0x7532) && (local_2c != 0x754d));
  return 0;
}

