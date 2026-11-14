// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004502c0
// entry: 004502c0  size: 310


undefined4 FUN_004502c0(char param_1)

{
  int iVar1;
  undefined4 local_34;
  undefined1 local_30 [48];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  if (param_1 == '\x01') {
    FUN_005232d0(1,2);
    FUN_0052f6f0(0xf8,local_30);
    FUN_005233e0(local_30);
    FUN_005232d0(1,3);
    FUN_0052f6f0(0xf9,local_30);
  }
  else {
    FUN_005232d0(1,2);
    FUN_0052f6f0(0xfa,local_30);
    FUN_005233e0(local_30);
    FUN_005232d0(1,3);
    FUN_0052f6f0(0xfb,local_30);
  }
  FUN_005233e0(local_30);
  FUN_0052f6f0(2,local_30);
  FUN_005232d0(1,4);
  FUN_005233e0(local_30);
  FUN_0052f6f0(3,local_30);
  FUN_005232d0(1,5);
  FUN_005233e0(local_30);
  do {
    do {
      iVar1 = FUN_00526620(&local_34);
    } while (iVar1 != 0);
    switch(local_34) {
    case 0x7532:
    case 0x753e:
    case 0x754d:
      FUN_00523800(5);
      return 0x7532;
    case 0x7539:
      FUN_00523800(5);
      return 0x7534;
    }
  } while( true );
}

