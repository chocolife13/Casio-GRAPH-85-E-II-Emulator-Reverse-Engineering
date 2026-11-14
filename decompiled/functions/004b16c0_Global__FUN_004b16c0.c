// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b16c0
// entry: 004b16c0  size: 356


void FUN_004b16c0(void)

{
  int iVar1;
  int local_4;
  
  do {
    while( true ) {
      FUN_00414240();
      FUN_005232d0(1,1);
      FUN_00523470(s_Optimaize_Check_Mode_005c09d4,0x15);
      FUN_005232d0(1,2);
      FUN_00523470(s_Select_Check_Type_005c09c0,0x15);
      FUN_005232d0(1,3);
      FUN_00523470(s__0___9___A___Z__005c09ac,0x15);
      FUN_005232d0(1,5);
      FUN_00523470(s_X_Flash_System_Check_005c0994,0x15);
      iVar1 = FUN_00526620(&local_4);
      if (iVar1 == 0) break;
      switch(local_4) {
      case 0x30:
        FUN_004b10e0();
        break;
      case 0x31:
        FUN_004b1120();
        break;
      case 0x32:
        FUN_004b1160();
        break;
      case 0x33:
        FUN_004b11a0();
        break;
      case 0x34:
        FUN_004b11e0();
        break;
      case 0x35:
        FUN_004b1240();
        break;
      case 0x36:
        FUN_004b12a0();
        break;
      case 0x37:
        FUN_004b1300();
        break;
      case 0x38:
        FUN_004b1360();
        break;
      case 0x39:
        FUN_004b1400();
        break;
      case 0x41:
        FUN_004b1490();
        break;
      case 0x42:
        FUN_004b1580();
        break;
      case 0x58:
        iVar1 = FUN_0041c2d0();
        if (iVar1 < 0) {
          FUN_0052b240(4);
        }
        else {
          FUN_005232d0(1,7);
          FUN_00523470(s_Complete__Press_EXIT_005c08a4,0x15);
          FUN_004af080();
        }
        break;
      case 0x5a:
        FUN_004b1670();
      }
    }
  } while (((local_4 != 0x7532) && (local_4 != 0x753f)) && (local_4 != 0x754d));
  return;
}

