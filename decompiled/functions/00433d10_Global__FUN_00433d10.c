// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00433d10
// entry: 00433d10  size: 253


undefined4 FUN_00433d10(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(7,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(8,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(2,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,5);
  uVar1 = FUN_0052f6f0(3,local_34);
  FUN_005233e0(uVar1);
  do {
    do {
      iVar2 = FUN_00526620(&local_38);
    } while (iVar2 != 0);
    switch(local_38) {
    case 0x7532:
    case 0x753e:
      FUN_00523800(5);
      return 0xfffffffe;
    case 0x7539:
      FUN_00517880(param_1);
      FUN_00523800(5);
      return 0;
    case 0x754d:
      FUN_00523800(5);
      return 0xffffffff;
    }
  } while( true );
}

