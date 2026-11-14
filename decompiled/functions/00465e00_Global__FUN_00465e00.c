// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00465e00
// entry: 00465e00  size: 248


void FUN_00465e00(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = *(int *)(*(int *)(param_3 + 0x8dc) + 0x14);
  FUN_004e5780(local_c);
  iVar2 = FUN_004e72d0(param_1,local_c);
  if (iVar2 != 0) {
    FUN_004e5780(param_2);
    return;
  }
  uVar3 = FUN_004e57c0(local_18,local_30);
  FUN_004e6dd0(iVar1,uVar3);
  uVar3 = FUN_004e57a0(local_18,local_30);
  FUN_004e6b80(local_30,uVar3);
  FUN_004e7410(param_1,local_24);
  FUN_004e6d00(local_30,local_24,local_30);
  FUN_004e6a00(iVar1 + 0xc,local_30,local_30);
  uVar3 = FUN_004e57c0(local_18,local_24);
  FUN_004e6dd0(param_1,uVar3);
  FUN_004e6b80(local_30,local_24,local_30);
  FUN_004e73d0(local_30,param_2);
  return;
}

