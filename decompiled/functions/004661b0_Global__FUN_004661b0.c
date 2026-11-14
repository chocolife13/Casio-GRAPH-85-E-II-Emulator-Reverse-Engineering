// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004661b0
// entry: 004661b0  size: 140


void FUN_004661b0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 local_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  puVar1 = *(undefined4 **)(*(int *)(param_3 + 0x8dc) + 0x14);
  local_90 = *param_1;
  local_8c = param_1[1];
  local_88 = param_1[2];
  local_60 = *puVar1;
  local_5c = puVar1[1];
  local_58 = puVar1[2];
  local_54 = puVar1[3];
  local_50 = puVar1[4];
  local_4c = puVar1[5];
  FUN_00453a80(0,local_98);
  *param_2 = local_48;
  param_2[1] = local_44;
  param_2[2] = local_40;
  return;
}

