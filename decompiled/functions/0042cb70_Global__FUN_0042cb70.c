// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042cb70
// entry: 0042cb70  size: 159


uint FUN_0042cb70(undefined4 *param_1,undefined4 *param_2)

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
  sVar1 = FUN_00401170(param_2);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0(param_2);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    return uVar2;
  }
  FUN_00401000(param_1,local_20);
  FUN_00401000(param_2,local_10);
  FUN_00401230(local_20,local_10);
  FUN_004016b0(local_20);
  uVar2 = FUN_00401040(local_20,param_1);
  return uVar2 & 0xffff0000;
}

