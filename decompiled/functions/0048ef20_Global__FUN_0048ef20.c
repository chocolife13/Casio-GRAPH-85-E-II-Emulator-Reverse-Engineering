// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048ef20
// entry: 0048ef20  size: 143


void FUN_0048ef20(int param_1,undefined4 *param_2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_18 = *(undefined4 *)(param_1 + 0x6c);
  local_14 = *(undefined4 *)(param_1 + 0x70);
  local_24 = *(undefined4 *)(param_1 + 0x84);
  local_10 = *(undefined4 *)(param_1 + 0x74);
  local_20 = *(undefined4 *)(param_1 + 0x88);
  local_1c = *(undefined4 *)(param_1 + 0x8c);
  FUN_0048f050(param_2);
  FUN_004e6dd0(&local_24,param_2,param_2);
  FUN_004e57a0(local_c);
  FUN_004e6b80(local_c,param_2,param_2);
  FUN_004e6dd0(&local_18,param_2,param_2);
  *(undefined4 *)(param_1 + 0x78) = *param_2;
  *(undefined4 *)(param_1 + 0x7c) = param_2[1];
  *(undefined4 *)(param_1 + 0x80) = param_2[2];
  return;
}

