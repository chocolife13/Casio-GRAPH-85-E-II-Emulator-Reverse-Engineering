// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042db80
// entry: 0042db80  size: 224


undefined4 FUN_0042db80(undefined4 param_1,short param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_38 [10];
  undefined1 local_2e [2];
  undefined1 local_2c [12];
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0(param_1);
    return uVar2;
  }
  FUN_0042f560(1,local_2c);
  FUN_00401080(param_1,local_38);
  FUN_004013a0(local_2e);
  uVar3 = FUN_00401460(local_38,local_2c);
  if ((uVar3 & 4) != 0) {
    FUN_0042f540(0x11,param_1);
    return 0x11;
  }
  FUN_00401000(param_1,local_20);
  FUN_00401d00(local_20);
  if (param_2 == 1) {
    FUN_0042f9b0(local_10);
  }
  else {
    if (param_2 != 0) goto LAB_0042dc40;
    FUN_0042f970(local_10);
  }
  FUN_004012f0(local_20,local_10);
LAB_0042dc40:
  FUN_004016b0(local_20);
  FUN_00401040(local_20,param_1);
  return 0;
}

