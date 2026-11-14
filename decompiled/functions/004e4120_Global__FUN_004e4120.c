// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e4120
// entry: 004e4120  size: 246


void FUN_004e4120(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18 [4];
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return;
  }
  iVar1 = FUN_004e4020(param_2);
  if (iVar1 != 0) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    return;
  }
  FUN_004e5780(&local_24);
  local_18[0] = *param_1;
  local_18[1] = param_1[1];
  local_18[2] = param_1[2];
  local_18[3] = local_24;
  local_8 = local_20;
  local_4 = local_1c;
  iVar1 = FUN_004e71d0(param_2,&local_24);
  if (iVar1 == -1) {
    FUN_004e5630(3,param_3);
    return;
  }
  if (iVar1 == 0) {
    local_18[3] = *param_2;
    local_8 = param_2[1];
    local_4 = param_2[2];
    local_18[0] = local_18[0] | 0x80;
  }
  puVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

