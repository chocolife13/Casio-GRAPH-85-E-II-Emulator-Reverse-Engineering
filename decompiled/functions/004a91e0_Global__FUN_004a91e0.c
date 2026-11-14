// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a91e0
// entry: 004a91e0  size: 189


void FUN_004a91e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_38;
  undefined1 local_34 [52];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar1 = FUN_0052f6f0(param_1,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(param_2,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(param_3,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,5);
  uVar1 = FUN_0052f6f0(1,local_34);
  FUN_005233e0(uVar1);
  do {
    do {
      iVar2 = FUN_00526620(&local_38);
    } while (iVar2 != 0);
  } while (((local_38 != 0x7532) && (local_38 != 0x753f)) && (local_38 != 0x754d));
  FUN_00523800(5);
  return;
}

