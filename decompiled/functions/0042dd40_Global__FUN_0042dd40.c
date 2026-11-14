// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042dd40
// entry: 0042dd40  size: 149


uint FUN_0042dd40(undefined4 param_1,short param_2)

{
  short sVar1;
  uint uVar2;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0(param_1);
    return uVar2;
  }
  FUN_00401000(param_1,local_20);
  FUN_00401d60(local_20);
  if (param_2 == 1) {
    FUN_0042f9b0(local_10);
  }
  else {
    if (param_2 != 0) goto LAB_0042ddb5;
    FUN_0042f970(local_10);
  }
  FUN_004012f0(local_20,local_10);
LAB_0042ddb5:
  FUN_004016b0(local_20);
  uVar2 = FUN_00401040(local_20,param_1);
  return uVar2 & 0xffff0000;
}

