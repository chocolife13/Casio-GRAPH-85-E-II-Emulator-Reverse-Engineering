// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00492550
// entry: 00492550  size: 196


void FUN_00492550(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9 [9];
  
  local_10 = 0x20202020;
  local_c = 0x20;
  local_b = 0x3d;
  local_a = 0;
  FUN_004b6ef0(local_9,&local_10);
  if (param_3 == 1) {
    local_10 = CONCAT13(0x50,(undefined3)local_10);
    local_c = 0x56;
    local_28 = *(undefined4 *)(param_1 + 0x18);
    local_24 = *(undefined4 *)(param_1 + 0x1c);
    local_20 = *(undefined4 *)(param_1 + 0x20);
  }
  else if (param_3 == 2) {
    local_10._0_3_ = CONCAT12(0x50,(undefined2)local_10);
    local_10 = CONCAT13(0x4d,(undefined3)local_10);
    local_c = 0x54;
    local_28 = *(undefined4 *)(param_1 + 0x24);
    local_24 = *(undefined4 *)(param_1 + 0x28);
    local_20 = *(undefined4 *)(param_1 + 0x2c);
  }
  else if (param_3 == 3) {
    local_10 = CONCAT13(0x46,(undefined3)local_10);
    local_c = 0x56;
    local_28 = *(undefined4 *)(param_1 + 0x30);
    local_24 = *(undefined4 *)(param_1 + 0x34);
    local_20 = *(undefined4 *)(param_1 + 0x38);
  }
  FUN_00493f40(&local_28,0x81);
  return;
}

