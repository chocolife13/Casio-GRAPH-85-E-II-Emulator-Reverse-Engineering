// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004940c0
// entry: 004940c0  size: 243


void FUN_004940c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  local_24 = *param_1;
  local_20 = param_1[1];
  local_30 = param_1[6];
  local_1c = param_1[2];
  local_2c = param_1[7];
  local_28 = param_1[8];
  FUN_004e7620(&local_30,&local_30);
  FUN_004e7620(&param_2,&param_2);
  FUN_004e7620(&param_5,&param_5);
  iVar1 = FUN_00469e60(&local_30,&param_2);
  if (iVar1 < 0) {
    local_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
  }
  iVar1 = FUN_00469e60(&local_30,&param_5);
  if (iVar1 < 0) {
    local_30 = param_5;
    local_2c = param_6;
    local_28 = param_7;
  }
  FUN_004e7730(&local_30,local_18);
  FUN_00494560(local_c,&local_24,local_18,&local_30);
  return;
}

