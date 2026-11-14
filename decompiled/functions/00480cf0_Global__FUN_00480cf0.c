// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00480cf0
// entry: 00480cf0  size: 341


undefined4 FUN_00480cf0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_00480620(3,param_1,local_24);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_00480620(5,param_1,local_30);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_004e6b80(local_24,local_30,local_18);
  uVar2 = FUN_004e57a0(local_c,local_54);
  uVar2 = FUN_004e5840(local_54,uVar2);
  FUN_00481c70(uVar2);
  FUN_00481c40(local_54,local_18,local_54);
  iVar1 = FUN_004e4020(local_54);
  if (iVar1 != 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      return 0;
    }
    iVar1 = FUN_00480620(7,param_1,local_3c);
    if (iVar1 != 0) {
      return 0;
    }
    FUN_004e6b80(local_30,local_54,local_48);
    uVar2 = FUN_004e7250(local_48,local_3c);
    return uVar2;
  }
  iVar1 = FUN_00480620(1,param_1,local_3c);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_00481c70(local_24,local_54,local_48);
  uVar2 = FUN_004e7250(local_3c,local_48);
  return uVar2;
}

