// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414ac0
// entry: 00414ac0  size: 87


undefined4 FUN_00414ac0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a [10];
  
  uVar1 = FUN_004148e0(param_1,&local_14,1);
  *param_2 = local_14;
  param_2[1] = local_10;
  *(undefined2 *)(param_2 + 2) = local_c;
  *(undefined4 *)((int)param_2 + 10) = 0;
  *(undefined4 *)((int)param_2 + 0xe) = 0;
  *(undefined1 *)((int)param_2 + 0x12) = 0;
  FUN_004b71f0((undefined4 *)((int)param_2 + 10),local_a,8);
  return uVar1;
}

