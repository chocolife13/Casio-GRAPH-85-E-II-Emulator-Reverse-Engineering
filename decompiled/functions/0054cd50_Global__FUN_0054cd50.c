// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054cd50
// entry: 0054cd50  size: 185


void FUN_0054cd50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6 [3];
  
  local_8 = 0;
  local_6[0] = 0;
  local_6[1] = 0;
  local_c = (short)param_1;
  local_a = (short)param_2;
  if ((short)param_2 < (short)param_1) {
    FUN_00488d30(&local_c,&local_a);
  }
  local_8 = param_1._2_2_;
  local_6[0] = param_2._2_2_;
  if (param_2._2_2_ < param_1._2_2_) {
    FUN_00488d30(&local_8,local_6);
  }
  FUN_0054cc90(&local_c,param_4);
  uVar1 = FUN_004138b0();
  local_10 = local_c;
  local_14 = local_a;
  local_e = local_8;
  local_12 = local_6[0];
  FUN_0054d1f0(uVar1,&local_10,&local_14);
  return;
}

