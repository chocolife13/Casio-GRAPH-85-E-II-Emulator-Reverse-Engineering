// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004941c0
// entry: 004941c0  size: 260


undefined4 FUN_004941c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_3c);
  iVar1 = FUN_00469e60(param_1,&local_3c);
  if (iVar1 < 1) {
    return 0x1c;
  }
  FUN_004e5780(local_c);
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  FUN_004e7620(param_1 + 6,&local_30);
  FUN_004e7620(param_1 + 9,&local_3c);
  iVar1 = FUN_00469e60(&local_30,&local_3c);
  if (iVar1 < 0) {
    local_30 = local_3c;
    local_2c = local_38;
    local_28 = local_34;
  }
  FUN_004e7620(param_1 + 0xc,&local_3c);
  iVar1 = FUN_00469e60(&local_30,&local_3c);
  if (iVar1 < 0) {
    local_30 = local_3c;
    local_2c = local_38;
    local_28 = local_34;
  }
  FUN_004e7730(&local_30,local_18);
  uVar2 = FUN_00494560(local_c,&local_24,local_18,&local_30);
  return uVar2;
}

