// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004449f0
// entry: 004449f0  size: 194


undefined4 FUN_004449f0(void)

{
  int iVar1;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  FUN_0052f6f0(7,local_34);
  FUN_005233e0(local_34);
  FUN_005232d0(1,3);
  FUN_0052f6f0(8,local_34);
  FUN_005233e0(local_34);
  FUN_005232d0(1,4);
  FUN_0052f6f0(2,local_34);
  FUN_005233e0(local_34);
  FUN_005232d0(1,5);
  FUN_0052f6f0(3,local_34);
  FUN_005233e0(local_34);
  do {
    do {
      iVar1 = FUN_00526620(&local_38);
    } while (iVar1 != 0);
    switch(local_38) {
    case 0x7532:
    case 0x753e:
    case 0x754d:
      FUN_00523800(5);
      return 0;
    case 0x7539:
      FUN_00523800(5);
      return 1;
    }
  } while( true );
}

