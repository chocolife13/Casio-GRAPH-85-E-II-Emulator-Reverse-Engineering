// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b05f0
// entry: 004b05f0  size: 263


void FUN_004b05f0(void)

{
  int iVar1;
  int local_4;
  
  do {
    while( true ) {
      FUN_00414240();
      FUN_005232d0(1,1);
      FUN_00523470(s__1__Make_free_file_005c0970,0x15);
      FUN_005232d0(1,2);
      FUN_00523470(s__2__Make_some_files_005c095c,0x15);
      FUN_005232d0(1,3);
      FUN_00523470(s__3__TEST_Flash_Erase_005c0944,0x15);
      FUN_005232d0(1,4);
      FUN_00523470(s__4__Output_FLASH_DATA_005c092c,0x15);
      FUN_005232d0(1,5);
      FUN_00523470(s__5__Output_RAM_DATA_005c0918,0x15);
      FUN_005232d0(1,6);
      FUN_00523470(s__6_________________005c0904,0x15);
      FUN_005232d0(1,7);
      FUN_00523470(s__7__Optimize_Check_005c08f0,0x15);
      iVar1 = FUN_00526620(&local_4);
      if (iVar1 == 0) break;
      switch(local_4) {
      case 0x31:
        FUN_004b0280();
        break;
      case 0x32:
        FUN_004b0410();
        break;
      case 0x33:
        FUN_004b03f0();
        break;
      case 0x37:
        FUN_004b16c0();
      }
    }
  } while (((local_4 != 0x7532) && (local_4 != 0x753f)) && (local_4 != 0x754d));
  return;
}

