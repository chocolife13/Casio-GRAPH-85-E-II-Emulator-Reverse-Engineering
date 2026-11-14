// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a7590
// entry: 004a7590  size: 143


void FUN_004a7590(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_34 [52];
  
  FUN_005232d0(1,1);
  uVar1 = FUN_0052f6f0(0x148,local_34,0x15);
  FUN_00523470(uVar1);
  uVar1 = FUN_004a7620(2,param_1);
  uVar1 = FUN_004a77a0(uVar1,param_1,param_2,1);
  uVar1 = FUN_004a77a0(uVar1,param_1,param_2,2);
  uVar1 = FUN_004a77a0(uVar1,param_1,param_2,3);
  for (iVar2 = FUN_004a7920(uVar1); iVar2 < 8; iVar2 = iVar2 + 1) {
    FUN_005232d0(1,iVar2);
    FUN_00523470(&DAT_005cd010,0x15);
  }
  return;
}

