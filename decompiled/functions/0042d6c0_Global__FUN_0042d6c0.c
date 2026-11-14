// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042d6c0
// entry: 0042d6c0  size: 121


uint FUN_0042d6c0(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0();
    return uVar2;
  }
  uVar2 = FUN_00401560(param_1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0042f560(0,param_1);
    return uVar2 & 0xffff0000;
  }
  FUN_00401000(param_1,local_10);
  FUN_004019f0(local_10);
  FUN_004016b0(local_10);
  uVar2 = FUN_00401040(local_10,param_1);
  return uVar2 & 0xffff0000;
}

