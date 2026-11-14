// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00482280
// entry: 00482280  size: 270


void FUN_00482280(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_8c [24];
  undefined1 local_74 [12];
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  FUN_004b6ef0(local_68,"Start:");
  uVar1 = FUN_004e5780(local_74,local_8c);
  FUN_004e4120(param_2,uVar1);
  uVar1 = FUN_004b22b0(local_8c,local_34);
  FUN_004b6e70(local_68,uVar1);
  FUN_005232d0(3,4);
  if (param_1 == 1) {
    FUN_00523490(local_68);
  }
  else {
    FUN_00523470(local_68,0x13);
  }
  FUN_004b6ef0(local_68,"Width:");
  uVar1 = FUN_004e5780(local_74,local_8c);
  FUN_004e4120(param_3,uVar1);
  uVar1 = FUN_004b22b0(local_8c,local_34);
  FUN_004b6e70(local_68,uVar1);
  FUN_005232d0(3,5);
  if (param_1 == 2) {
    FUN_00523490(local_68);
    return;
  }
  FUN_00523470(local_68,0x13);
  return;
}

