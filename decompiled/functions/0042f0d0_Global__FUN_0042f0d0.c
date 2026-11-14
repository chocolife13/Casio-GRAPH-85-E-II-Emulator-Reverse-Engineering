// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042f0d0
// entry: 0042f0d0  size: 541


uint FUN_0042f0d0(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0(param_1);
    return uVar2;
  }
  sVar1 = FUN_00401170(param_2);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0();
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    return uVar2;
  }
  uVar2 = FUN_00401560(param_2);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0042f540(3);
    return uVar2;
  }
  uVar2 = FUN_00401560(param_1);
  if ((uVar2 & 1) == 0) {
    sVar1 = FUN_0042f760(param_1);
    if (sVar1 == 1) {
      uVar2 = FUN_0042f540(3,param_1);
      return uVar2;
    }
    sVar1 = FUN_0042f760(param_2);
    if (sVar1 == 1) {
      uVar2 = FUN_0042f540(3,param_1);
      return uVar2;
    }
    FUN_0042f560(1,local_4c);
    FUN_0042f330(local_4c,0x17);
    local_58 = *param_1;
    local_54 = param_1[1];
    local_50 = param_1[2];
    FUN_0042d7e0(&local_58);
    uVar2 = FUN_0042cf20(&local_58,local_4c);
    if ((uVar2 & 5) != 0) {
      uVar2 = FUN_0042f540(3,param_1);
      return uVar2;
    }
    local_58 = *param_2;
    local_54 = param_2[1];
    local_50 = param_2[2];
    FUN_0042d7e0(&local_58);
    uVar2 = FUN_0042cf20(&local_58,local_4c);
    if ((uVar2 & 5) != 0) {
      uVar2 = FUN_0042f540(3,param_1);
      return uVar2;
    }
    FUN_00401000(param_1,local_30);
    FUN_00401000(param_1,local_40);
    FUN_00401000(param_2,local_20);
    FUN_00401000(param_2,local_10);
    FUN_0042c4f0(local_40,local_20);
    sVar1 = FUN_004011b0(local_40);
    if (sVar1 != 4) {
      FUN_00401040(local_40,param_1);
      uVar2 = FUN_0042e840(param_1);
      return uVar2;
    }
    FUN_00401400(local_40);
    FUN_0042c480(local_40,local_10);
    FUN_0042c3a0(local_30,local_40);
    FUN_004016b0(local_30);
    uVar2 = FUN_00401040(local_30,param_1);
  }
  return uVar2 & 0xffff0000;
}

