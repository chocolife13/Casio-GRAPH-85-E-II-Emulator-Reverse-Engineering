// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042e290
// entry: 0042e290  size: 163


uint FUN_0042e290(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  undefined1 local_28 [10];
  undefined1 local_1e [2];
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0(param_1);
    return uVar2;
  }
  FUN_0042f9f0(local_1c);
  FUN_00401080(param_1,local_28);
  FUN_004013a0(local_1e);
  uVar2 = FUN_00401460(local_28,local_1c);
  FUN_00401000(param_1,local_10);
  if ((uVar2 & 4) == 0) {
    FUN_00401b10(local_10);
  }
  else {
    FUN_00401df0(local_10);
  }
  FUN_004016b0(local_10);
  uVar2 = FUN_00401040(local_10,param_1);
  return uVar2 & 0xffff0000;
}

