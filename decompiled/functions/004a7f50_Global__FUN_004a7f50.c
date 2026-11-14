// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a7f50
// entry: 004a7f50  size: 96


void FUN_004a7f50(void)

{
  int iVar1;
  uint local_4;
  
  iVar1 = 1;
  do {
    FUN_005232d0(1,iVar1);
    FUN_00523470(s_Push1_6_Push1_6_Push1_6_005c0394,0x15);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  do {
    while( true ) {
      iVar1 = FUN_00526620(&local_4);
      if (iVar1 == 0) break;
      if ((0x30 < local_4) && (local_4 < 0x37)) {
        FUN_004a80c0(local_4 - 0x30);
      }
    }
  } while ((local_4 != 0x7532) && (local_4 != 0x754d));
  return;
}

