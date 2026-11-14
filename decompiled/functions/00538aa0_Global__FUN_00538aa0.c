// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538aa0
// entry: 00538aa0  size: 132


void FUN_00538aa0(int param_1,undefined4 param_2)

{
  int local_28 [5];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  undefined1 local_3;
  
  if (param_1 == 0) {
    local_28[0] = param_1;
    local_28[2] = 1;
    local_28[1] = 0x38;
    local_28[3] = 0x3f;
    FUN_004143b0(local_28);
  }
  local_8 = param_2;
  local_14 = 0x38;
  local_28[4] = param_1 * 0x15 + 2;
  local_10 = 0x15;
  local_c = 8;
  local_4 = 1;
  local_3 = 1;
  FUN_004121a0(local_28 + 4);
  return;
}

