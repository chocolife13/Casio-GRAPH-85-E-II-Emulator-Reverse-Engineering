// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051c390
// entry: 0051c390  size: 137


void FUN_0051c390(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_20 [2];
  undefined4 local_18;
  uint local_8;
  undefined1 local_4;
  
  param_3 = param_3 * 0x20;
  local_20[0] = FUN_00517250(*(undefined4 *)(param_3 + 8 + *(int *)(param_2 + 0x8dc)));
  local_18 = *(undefined4 *)(param_3 + 8 + *(int *)(param_2 + 0x8dc));
  local_4 = FUN_005173e0(*(undefined4 *)(param_3 + 8 + *(int *)(param_2 + 0x8dc)));
  local_8 = FUN_005172b0(*(undefined4 *)(param_3 + 8 + *(int *)(param_2 + 0x8dc)));
  uVar1 = *(undefined4 *)(param_2 + 0x8dc);
  local_8 = local_8 & 0xffff;
  *(undefined4 **)(param_2 + 0x8dc) = local_20;
  FUN_0051c420(param_1,param_2,0,1);
  *(undefined4 *)(param_2 + 0x8dc) = uVar1;
  return;
}

