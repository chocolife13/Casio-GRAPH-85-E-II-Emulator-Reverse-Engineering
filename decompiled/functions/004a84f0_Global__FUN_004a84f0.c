// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a84f0
// entry: 004a84f0  size: 258


void FUN_004a84f0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_34 [52];
  
  while( true ) {
    do {
      FUN_005232d0(3,3);
      uVar1 = FUN_004b1890(param_1,local_34,0x13);
      FUN_00523470(uVar1);
      FUN_005232d0(3,4);
      uVar1 = FUN_004b1b70(param_1,local_34,0x13);
      FUN_00523470(uVar1);
      FUN_005232d0(3,5);
      uVar1 = FUN_004b1d20(param_1,local_34,0x13);
      FUN_00523470(uVar1);
      FUN_005232d0(3,6);
      uVar1 = FUN_004b22b0(param_1,local_34,0x13);
      FUN_00523470(uVar1);
      FUN_005232d0(3,7);
      uVar1 = FUN_004b5030(param_1,local_34,0x13);
      FUN_00523470(uVar1);
      iVar2 = FUN_00524660(0,0x7545,2,param_1,&DAT_005be9ec);
    } while (iVar2 < -2);
    if (iVar2 < 0) break;
    if (iVar2 == 0) {
      iVar2 = FUN_004a8040(param_1);
      if (iVar2 != 1) {
        FUN_0052b240(4);
      }
    }
  }
  return;
}

