// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052f480
// entry: 0052f480  size: 180


void FUN_0052f480(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(4,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0xc,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(0xd,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(3,5);
  FUN_005233e0("  V-Win[1~6]:    ");
  iVar2 = FUN_00523cc0(&local_38,0x11,5,1,6);
  if (iVar2 == 0) {
    uVar1 = FUN_00530470(local_38,param_1);
    FUN_0052b240(uVar1);
  }
  FUN_00523800(5);
  return;
}

