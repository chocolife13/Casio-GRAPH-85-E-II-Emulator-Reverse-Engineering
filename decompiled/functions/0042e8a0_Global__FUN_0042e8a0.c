// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042e8a0
// entry: 0042e8a0  size: 452


undefined4 FUN_0042e8a0(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined1 local_2c [12];
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
  FUN_0042f940(local_2c);
  uVar3 = FUN_00401460(param_1,local_2c);
  if ((uVar3 & 5) != 0) {
    FUN_0042f540(0x10);
    return 0x10;
  }
  sVar1 = FUN_0042f760(param_1);
  if (sVar1 == 1) {
    FUN_0042f540(0x10,param_1);
    return 0x10;
  }
  sVar1 = FUN_0042f7b0(CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 10)));
  if (sVar1 == 1) {
    FUN_0042f540(0x10,param_1);
    return 0x10;
  }
  sVar1 = FUN_0042f760(param_2);
  if (sVar1 == 1) {
    FUN_0042f540(0x10,param_1);
    return 0x10;
  }
  sVar1 = FUN_0042f7b0(CONCAT22(extraout_var_00,*(undefined2 *)((int)param_2 + 10)));
  if (sVar1 == 1) {
    FUN_0042f540(0x10,param_1);
    return 0x10;
  }
  uVar3 = FUN_00401460(param_1,param_2);
  if ((uVar3 & 2) != 0) {
    FUN_0042f540(0x10,param_1);
    return 0x10;
  }
  uVar3 = FUN_004014a0(param_2);
  if ((uVar3 & 1) != 0) {
    FUN_0042f560(1,param_1);
    return 0;
  }
  if ((uVar3 & 2) != 0) {
    FUN_0042f540(0x10,param_1);
    return 0x10;
  }
  FUN_00401000(param_1,local_20);
  FUN_00401000(param_2,local_10);
  FUN_004018e0(local_20,local_10);
  FUN_004016b0(local_20);
  FUN_00401040(local_20,param_1);
  return 0;
}

