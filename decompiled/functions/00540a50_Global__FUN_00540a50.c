// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00540a50
// entry: 00540a50  size: 286


void FUN_00540a50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
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
  
  iVar1 = 0;
  local_5c = 0x7553;
  local_2c = 0x7553;
  local_60._0_2_ = 0x34;
  local_60._2_2_ = 2;
  local_58 = 0x69;
  local_56 = 2;
  local_54 = 0x7563;
  local_50 = 0;
  local_4e = 0;
  local_4c = 0;
  local_48 = 0;
  local_46 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3e = 0;
  local_3c = 0;
  local_38 = 0;
  local_36 = 0;
  local_34 = 0;
  local_30._0_2_ = 0x122;
  local_30._2_2_ = 2;
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
  DAT_005d03d6 = (undefined2)param_1;
  if (param_1 != 0) {
    do {
      if (param_1 == 1) {
        (&DAT_005d1cd0)[iVar1 * 2] = (&local_60)[iVar1 * 2];
        uVar2 = (&local_5c)[iVar1 * 2];
LAB_00540b4a:
        (&DAT_005d1cd4)[iVar1 * 2] = uVar2;
      }
      else if (param_1 == 2) {
        (&DAT_005d1cd0)[iVar1 * 2] = (&local_30)[iVar1 * 2];
        uVar2 = (&local_2c)[iVar1 * 2];
        goto LAB_00540b4a;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    FUN_00538860(0xea,&DAT_005d1cd0);
  }
  return;
}

