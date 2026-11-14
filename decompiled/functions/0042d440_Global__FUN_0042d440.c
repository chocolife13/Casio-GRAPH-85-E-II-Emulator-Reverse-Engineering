// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042d440
// entry: 0042d440  size: 90


uint FUN_0042d440(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0(param_1);
    return uVar2;
  }
  FUN_00401000(param_1,local_10);
  FUN_00401a20(local_10);
  FUN_004016b0(local_10);
  uVar2 = FUN_00401040(local_10,param_1);
  return uVar2 & 0xffff0000;
}

