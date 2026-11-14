// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a6b20
// entry: 004a6b20  size: 373


void FUN_004a6b20(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [52];
  
  FUN_005237c0(5);
  FUN_00525b40(5);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(0x20f,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0x159,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,5);
  uVar1 = FUN_0052f6f0(2,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,6);
  uVar1 = FUN_0052f6f0(3,local_34);
  FUN_005233e0(uVar1);
  do {
    do {
      iVar2 = FUN_00526620(&local_3c);
    } while (iVar2 != 0);
    switch(local_3c) {
    case 0x7532:
    case 0x753e:
    case 0x754d:
      FUN_00523800(5);
      return;
    case 0x7539:
      iVar2 = FUN_004aacd0(1);
      if (iVar2 != 1) {
        FUN_00523800(5);
        FUN_0052f840();
        thunk_FUN_0040add0();
        FUN_004ab170();
        FUN_00414db0(local_38);
        FUN_005237c0(5);
        FUN_00525b40(5);
        FUN_005232d0(1,2);
        uVar1 = FUN_0052f6f0(0x213,local_34);
        FUN_005233e0(uVar1);
        FUN_005232d0(1,3);
        uVar1 = FUN_0052f6f0(0x159,local_34);
        FUN_005233e0(uVar1);
        FUN_005232d0(1,6);
        uVar1 = FUN_0052f6f0(1,local_34);
        FUN_005233e0(uVar1);
        FUN_004a5a70();
        FUN_00523800(5);
        FUN_00414db0();
        return;
      }
    }
  } while( true );
}

