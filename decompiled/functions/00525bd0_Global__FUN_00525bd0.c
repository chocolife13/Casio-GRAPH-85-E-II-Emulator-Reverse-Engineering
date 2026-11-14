// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00525bd0
// entry: 00525bd0  size: 157


undefined4 FUN_00525bd0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005234d0(&local_10);
  FUN_00523740();
  FUN_005237c0(4);
  FUN_00525b40(param_1);
  FUN_005232d0(1,*(undefined4 *)(&DAT_00597fe8 + param_1 * 4));
  FUN_005233e0(param_2);
  do {
    do {
      iVar1 = FUN_00526620(&local_14);
    } while (iVar1 != 0);
    switch(local_14) {
    case 0x7532:
    case 0x753f:
    case 0x7544:
    case 0x7545:
    case 0x754d:
      FUN_005232d0(local_c,local_8);
      if (local_10 != -1) {
        FUN_00527030();
      }
      FUN_00523800(4);
      return 0;
    }
  } while( true );
}

