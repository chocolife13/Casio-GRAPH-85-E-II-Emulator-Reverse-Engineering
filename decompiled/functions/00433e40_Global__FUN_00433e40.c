// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00433e40
// entry: 00433e40  size: 309


void FUN_00433e40(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c0 [3];
  undefined1 local_b4 [24];
  undefined1 local_9c [12];
  undefined1 local_90 [48];
  undefined1 local_60 [96];
  
  iVar3 = 1;
  do {
    FUN_004b6ef0(local_60,*(undefined4 *)(local_b4 + iVar3 * 4 + -0x10));
    if (iVar3 == 1) {
      uVar1 = FUN_004e5780(local_9c,local_b4);
      FUN_004e4120(param_2,uVar1);
      uVar1 = FUN_004b22b0(local_b4,local_90);
LAB_00433f14:
      FUN_004b6e70(local_60,uVar1);
    }
    else {
      if (iVar3 == 2) {
        uVar1 = FUN_004e5780(local_9c,local_b4);
        iVar2 = param_2 + 0xc;
LAB_00433ec3:
        FUN_004e4120(iVar2,uVar1);
        uVar1 = FUN_004b22b0(local_b4,local_90);
        goto LAB_00433f14;
      }
      if (iVar3 == 3) {
        uVar1 = FUN_004e5780(local_9c,local_b4);
        iVar2 = param_2 + 0x18;
        goto LAB_00433ec3;
      }
    }
    FUN_005232d0(1,iVar3 + 3);
    if (param_1 == iVar3) {
      FUN_00523490(local_60);
    }
    else {
      FUN_00523470(local_60,0x15);
    }
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      FUN_005232d0(1,7);
      FUN_00523470(&DAT_005cd010,0x15);
      return;
    }
  } while( true );
}

