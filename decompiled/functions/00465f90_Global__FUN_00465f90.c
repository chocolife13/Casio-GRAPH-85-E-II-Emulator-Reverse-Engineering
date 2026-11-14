// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00465f90
// entry: 00465f90  size: 345


void FUN_00465f90(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = *(int *)(*(int *)(param_3 + 0x8dc) + 0x14);
  iVar1 = iVar2 + 0xc;
  FUN_004e5780(local_30);
  iVar3 = FUN_004e72d0(param_1,local_30);
  if (iVar3 != 0) {
    FUN_004e5780(param_2);
    return;
  }
  FUN_004e5840(local_3c);
  FUN_004e6d00(iVar2,local_3c,local_24);
  FUN_004e6d00(iVar1,local_3c,local_c);
  FUN_004e6a00(iVar2,iVar1,local_48);
  FUN_004e6d00(local_48,local_3c,local_18);
  FUN_004e57a0(local_3c);
  FUN_004e6b80(local_24,local_3c,local_48);
  FUN_004e7410(param_1,local_54);
  FUN_004e6d00(local_48,local_54,local_48);
  FUN_004e6a00(iVar2 + 0x18,local_48,local_48);
  FUN_004e6d00(iVar2,param_1,local_54);
  FUN_004e6a00(local_54,iVar1,local_54);
  FUN_004e7410(local_54,local_54);
  FUN_004e6d00(local_18,local_54,local_54);
  FUN_004e6b80(local_48,local_54,local_48);
  FUN_004e73d0(local_48,param_2);
  return;
}

