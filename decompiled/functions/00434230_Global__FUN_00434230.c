// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434230
// entry: 00434230  size: 274


undefined1 FUN_00434230(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined2 local_8;
  undefined2 local_6;
  undefined4 local_4;
  
  uVar3 = 0;
  local_30._0_2_ = 0;
  local_30._2_2_ = 0;
  local_2c = 0;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1e = 0;
  local_1c = 0;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_c = 0;
  local_8 = 0;
  local_6 = 0;
  local_4 = 0;
  FUN_00538980(0,0,local_44);
  puVar4 = &local_30;
  puVar5 = &DAT_005cdf70;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00538860(0,&DAT_005cdf70);
  FUN_00538a00(local_3c);
  FUN_0053c6f0(6);
  local_40 = FUN_00526410();
  FUN_00526420(0xe6);
  FUN_005387f0(0);
  iVar2 = FUN_00527440(param_1,param_2);
  if (iVar2 == 0) {
    uVar3 = 4;
  }
  else {
    uVar1 = FUN_00433f80(param_1,param_2);
    *param_3 = uVar1;
  }
  FUN_00538810();
  FUN_005389c0(0,0,local_44);
  FUN_00538a50(local_3c);
  FUN_00526420(local_40);
  return uVar3;
}

