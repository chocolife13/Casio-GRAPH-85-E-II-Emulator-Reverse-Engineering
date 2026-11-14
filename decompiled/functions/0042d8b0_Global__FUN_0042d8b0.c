// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042d8b0
// entry: 0042d8b0  size: 237


undefined4 FUN_0042d8b0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_28 [12];
  undefined1 local_1c [10];
  undefined1 local_12 [2];
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0(param_1);
    return uVar2;
  }
  sVar1 = (short)param_2;
  if (sVar1 == 0) {
    FUN_0042f8d0(local_28);
  }
  else if (sVar1 == 1) {
    FUN_0042f900(local_28);
  }
  else {
    if (sVar1 != 2) {
      uVar2 = FUN_0042f540(8,param_1);
      return uVar2;
    }
    FUN_0042f940(local_28);
  }
  FUN_00401080(param_1,local_1c);
  FUN_004013a0(local_12);
  uVar3 = FUN_00401460(local_1c,local_28);
  if ((uVar3 & 5) != 0) {
    FUN_0042f540(0x10,param_1);
    return 0x10;
  }
  FUN_00401000(param_1,local_10);
  FUN_00401c40(local_10,param_2);
  FUN_004016b0(local_10);
  FUN_00401040(local_10,param_1);
  return 0;
}

