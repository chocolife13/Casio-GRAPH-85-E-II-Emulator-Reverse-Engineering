// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538d50
// entry: 00538d50  size: 187


void FUN_00538d50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  
  local_30._2_2_ = 1;
  local_26 = 1;
  local_1e = 1;
  local_30._0_2_ = 0x18e;
  local_2c = 0x27;
  local_28 = 399;
  local_24 = 0x22;
  local_20 = 400;
  local_1c = 0x7e;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_10 = 0;
  local_e = 0;
  local_c = 0;
  local_8 = 0;
  local_6 = 0;
  local_4 = 0;
  DAT_005d03d2 = (undefined2)param_1;
  if (param_1 != 0) {
    puVar2 = &local_30;
    puVar3 = &DAT_005d1310;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00538860(0xed,&DAT_005d1310);
    return;
  }
  FUN_00538860(0xed,0);
  return;
}

