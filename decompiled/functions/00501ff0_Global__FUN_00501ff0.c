// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00501ff0
// entry: 00501ff0  size: 235


undefined4 FUN_00501ff0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(0x134,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0x135,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(2,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,5);
  uVar1 = FUN_0052f6f0(3,local_34);
  FUN_005233e0(uVar1);
  do {
    iVar2 = FUN_00526620(&local_38);
    while (iVar2 != 0) {
      iVar2 = FUN_00526620(&local_38);
    }
    switch(local_38) {
    case 0x7532:
    case 0x753e:
    case 0x754d:
      FUN_00523800(5);
      return 0xfffffffe;
    case 0x7539:
      FUN_00523800(5);
      return 0;
    }
  } while( true );
}

