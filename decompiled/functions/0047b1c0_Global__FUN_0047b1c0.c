// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047b1c0
// entry: 0047b1c0  size: 329


void FUN_0047b1c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_cc [2];
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined1 local_a0 [4];
  undefined4 auStack_9c [39];
  
  iVar1 = FUN_004ab6a0(s__SSHEET_005be210);
  if (iVar1 != 1) {
    FUN_00531110(param_1);
    return;
  }
  FUN_00489440(local_a0);
  FUN_00489400(local_cc);
  if (param_3 == 1) {
    local_ca = auStack_9c[param_2 * 8];
    local_c6 = auStack_9c[param_2 * 8 + 1];
    if (*(short *)(param_1 + 4) == 0) {
      local_c2 = 0;
      local_be = 0;
      FUN_00489560(local_cc);
      return;
    }
    local_c2 = auStack_9c[param_2 * 8 + 4];
    local_be = auStack_9c[param_2 * 8 + 5];
    FUN_00489560(local_cc);
    return;
  }
  local_b6 = auStack_9c[param_2 * 8 + 1];
  local_ba = auStack_9c[param_2 * 8];
  local_ae = auStack_9c[param_2 * 8 + 3];
  local_b2 = auStack_9c[param_2 * 8 + 2];
  if (*(short *)(param_1 + 10) == 0) {
    local_aa = 0;
    local_a6 = 0;
    FUN_00489560(local_cc);
    return;
  }
  local_aa = auStack_9c[param_2 * 8 + 4];
  local_a6 = auStack_9c[param_2 * 8 + 5];
  FUN_00489560(local_cc);
  return;
}

