// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2500
// entry: 004a2500  size: 229


undefined4 FUN_004a2500(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  local_38 = 0;
  FUN_00525b70(4);
  if (param_1 != 0) {
    FUN_005232d0(1,2);
    uVar1 = FUN_0052f6f0(param_1,local_34);
    FUN_005233e0(uVar1);
  }
  if (param_2 != 0) {
    FUN_005232d0(1,3);
    uVar1 = FUN_0052f6f0(param_2,local_34);
    FUN_005233e0(uVar1);
  }
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(2,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,5);
  uVar1 = FUN_0052f6f0(3,local_34);
  FUN_005233e0(uVar1);
  do {
    do {
      iVar2 = FUN_00526620(&local_38);
      uVar1 = local_38;
    } while (iVar2 != 0);
    switch(local_38) {
    case 0x7532:
    case 0x753e:
    case 0x754d:
      FUN_00525bc0();
      return 0xffffffff;
    case 0x7539:
      FUN_00525bc0();
      return uVar1;
    }
  } while( true );
}

