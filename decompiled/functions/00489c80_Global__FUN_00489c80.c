// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00489c80
// entry: 00489c80  size: 305


void FUN_00489c80(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57a0(local_c);
  *(undefined4 *)(param_2 + 0xc) = *param_1;
  *(undefined4 *)(param_2 + 0x10) = param_1[1];
  *(undefined4 *)(param_2 + 0x14) = param_1[2];
  FUN_004e7be0(param_1 + 3,param_2 + 0x18,0xfffffffe);
  *(undefined4 *)(param_2 + 0x24) = param_1[6];
  *(undefined4 *)(param_2 + 0x28) = param_1[7];
  *(undefined4 *)(param_2 + 0x2c) = param_1[8];
  *(undefined4 *)(param_2 + 0x30) = param_1[9];
  *(undefined4 *)(param_2 + 0x34) = param_1[10];
  *(undefined4 *)(param_2 + 0x38) = param_1[0xb];
  *(undefined4 *)(param_2 + 0x3c) = param_1[0xc];
  *(undefined4 *)(param_2 + 0x40) = param_1[0xd];
  *(undefined4 *)(param_2 + 0x44) = param_1[0xe];
  FUN_004e57a0(local_18);
  iVar1 = FUN_00469e60(param_1 + 0xf,local_18);
  if ((iVar1 == 0) && (iVar1 = FUN_00469e60(param_1 + 0x12,local_18), iVar1 == 0)) {
    return;
  }
  if ((*(int *)(param_2 + 0x78) == 0x28) || (*(int *)(param_2 + 0x78) == 0x14)) {
    FUN_004e6dd0(param_1 + 0x12,param_1 + 0xf,param_2);
    FUN_004e7be0(param_1 + 0x12,local_18,2);
    FUN_004e6dd0(param_1 + 3,local_18,local_18);
    FUN_004e6a00(local_18,local_c,local_18);
    FUN_004e6fb0(local_18,param_2,local_18);
    FUN_004e6b80(local_18,local_c,param_2 + 0x18);
  }
  return;
}

