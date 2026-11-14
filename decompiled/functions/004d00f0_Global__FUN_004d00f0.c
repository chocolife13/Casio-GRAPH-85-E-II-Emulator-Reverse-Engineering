// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d00f0
// entry: 004d00f0  size: 175


void FUN_004d00f0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5
                 )

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e5780(&local_24);
  local_18 = *(undefined4 *)(param_1 + 0x18);
  local_14 = *(undefined4 *)(param_1 + 0x1c);
  local_c = local_24;
  local_10 = *(undefined4 *)(param_1 + 0x20);
  local_8 = local_20;
  local_4 = local_1c;
  FUN_0052f780(param_3,&local_18);
  FUN_004e5630(0x1b,param_2);
  *(undefined4 *)(param_2 + 0xc) = local_24;
  *(undefined4 *)(param_2 + 0x10) = local_20;
  *(undefined4 *)(param_2 + 0x14) = local_1c;
  param_4[3] = local_24;
  *param_4 = local_24;
  param_4[4] = local_20;
  param_4[1] = local_20;
  param_4[5] = local_1c;
  param_4[2] = local_1c;
  *param_5 = local_24;
  param_5[3] = local_24;
  param_5[1] = local_20;
  param_5[4] = local_20;
  param_5[2] = local_1c;
  param_5[5] = local_1c;
  return;
}

