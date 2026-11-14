// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515d40
// entry: 00515d40  size: 87


void FUN_00515d40(undefined4 param_1,uint param_2)

{
  uint local_18 [5];
  undefined1 local_4;
  undefined1 local_3;
  
  if ((param_2 & 0x80) == 0) {
    local_18[0] = 0;
    local_18[2] = 0x80;
  }
  else {
    local_18[2] = 0x40;
    local_18[0] = param_2 & 0x40;
  }
  local_18[1] = 0;
  local_18[4] = param_1;
  local_18[3] = 0x40;
  local_4 = 1;
  local_3 = 1;
  FUN_004121a0(local_18);
  return;
}

