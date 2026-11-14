// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e4080
// entry: 004e4080  size: 147


void FUN_004e4080(uint *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint local_18 [4];
  uint local_8;
  uint local_4;
  
  iVar1 = FUN_004e4000(param_1);
  if (iVar1 == -1) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return;
  }
  local_18[0] = *param_1;
  local_18[1] = param_1[1];
  local_18[2] = param_1[2];
  if (iVar1 == 0) {
    FUN_004e5780(local_18 + 3);
  }
  else {
    local_18[0] = local_18[0] & 0xffffff7f;
    local_18[3] = param_1[3];
    local_8 = param_1[4];
    local_4 = param_1[5];
  }
  puVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

