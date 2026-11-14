// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a48f0
// entry: 004a48f0  size: 187


void FUN_004a48f0(void)

{
  int iVar1;
  int local_38;
  undefined1 local_34 [4];
  undefined1 local_30 [48];
  
  local_38 = 0;
  thunk_FUN_0040add0();
  FUN_0052f840();
  FUN_00538980(0,0,local_34);
  FUN_004a00d0(local_30,&DAT_005852a8,1);
  FUN_005387f0(0);
  FUN_004a4220();
  do {
    while( true ) {
      while( true ) {
        do {
          FUN_00538b30();
          iVar1 = FUN_00526620(&local_38);
        } while (iVar1 != 0);
        if (local_38 != 0x302) break;
        FUN_005237c0(6);
        FUN_004a4320();
        FUN_00523800(6);
      }
      if (local_38 != 0x3b7) break;
      FUN_005237c0(6);
      FUN_004a4610();
      FUN_00523800(6);
    }
  } while (local_38 != 0x7532);
  FUN_00538810();
  FUN_005389c0(0,0,local_34);
  return;
}

