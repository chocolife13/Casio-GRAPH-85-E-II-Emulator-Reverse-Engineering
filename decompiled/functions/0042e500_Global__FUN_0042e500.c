// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042e500
// entry: 0042e500  size: 237


undefined4 FUN_0042e500(undefined4 param_1)

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
  FUN_0042f560(1,local_28);
  FUN_00401080(param_1,local_1c);
  FUN_004013a0(local_12);
  uVar3 = FUN_00401460(local_1c,local_28);
  if ((uVar3 & 4) != 0) {
    FUN_0042f540(0x11,param_1);
    return 0x11;
  }
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_0042f540(3,param_1);
    return uVar2;
  }
  FUN_0042f9f0(local_28);
  uVar3 = FUN_00401460(local_1c,local_28);
  FUN_00401000(param_1,local_10);
  if ((uVar3 & 4) == 0) {
    FUN_00401b70(local_10);
  }
  else {
    FUN_00401ab0(local_10);
  }
  FUN_004016b0(local_10);
  FUN_00401040(local_10,param_1);
  return 0;
}

