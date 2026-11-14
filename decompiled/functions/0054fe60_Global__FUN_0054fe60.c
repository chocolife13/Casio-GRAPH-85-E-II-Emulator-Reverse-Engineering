// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054fe60
// entry: 0054fe60  size: 360


undefined4 FUN_0054fe60(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c;
  undefined1 local_2b [43];
  
  FUN_005234d0(&local_3c);
  FUN_00523740();
  FUN_005237c0(5);
  FUN_00525b40(5);
  FUN_004b6ef0(&local_2c,&DAT_005bff10);
  FUN_004b7b40(param_1,local_2b,8);
  FUN_004b6e70(&local_2c,&DAT_005a8df8);
  FUN_005232d0(3,2);
  FUN_00523470(&local_2c,0x13);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0x201,&local_2c,0x13);
  FUN_00523470(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(0x202,&local_2c,0x13);
  FUN_00523470(uVar1);
  FUN_005232d0(1,5);
  uVar1 = FUN_0052f6f0(2,&local_2c,0x13);
  FUN_00523470(uVar1);
  FUN_005232d0(1,6);
  uVar1 = FUN_0052f6f0(3,&local_2c,0x13);
  FUN_00523470(uVar1);
  do {
    do {
      iVar2 = FUN_00526620(&local_40);
    } while (iVar2 != 0);
    switch(local_40) {
    case 0x7532:
    case 0x753e:
      uVar1 = 0xfffffffe;
LAB_0054ff97:
      FUN_00523800(5);
      if (local_3c != -1) {
        FUN_005232d0(local_38,local_34);
        FUN_00527030();
      }
      return uVar1;
    case 0x7539:
      uVar1 = 0;
      goto LAB_0054ff97;
    case 0x754d:
      uVar1 = 0xffffffff;
      goto LAB_0054ff97;
    }
  } while( true );
}

