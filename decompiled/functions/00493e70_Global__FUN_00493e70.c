// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00493e70
// entry: 00493e70  size: 26


void FUN_00493e70(int param_1,int param_2,int param_3)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 local_9 [9];
  
  local_10 = 0x20202020;
  local_c = 0x20;
  uStack_b = 0x3d;
  uStack_a = 0;
  FUN_004b6ef0(local_9,&local_10);
  if (param_3 == 1) {
    local_10 = CONCAT13(0x50,(undefined3)local_10);
    local_c = 0x56;
    uStack_28 = *(undefined4 *)(param_1 + 0x18);
    uStack_24 = *(undefined4 *)(param_1 + 0x1c);
    uStack_20 = *(undefined4 *)(param_1 + 0x20);
  }
  else if (param_3 == 2) {
    local_10 = CONCAT13(0x53,(undefined3)local_10);
    local_c = 0x49;
    uStack_28 = *(undefined4 *)(param_2 + 0x14);
    uStack_24 = *(undefined4 *)(param_2 + 0x18);
    uStack_20 = *(undefined4 *)(param_2 + 0x1c);
  }
  else if (param_3 == 3) {
    local_10._0_3_ = CONCAT12(0x53,(undefined2)local_10);
    local_10 = CONCAT13(0x46,(undefined3)local_10);
    local_c = 0x56;
    uStack_28 = *(undefined4 *)(param_2 + 0x20);
    uStack_24 = *(undefined4 *)(param_2 + 0x24);
    uStack_20 = *(undefined4 *)(param_2 + 0x28);
  }
  FUN_00493f40(&uStack_28,0x81);
  return;
}

