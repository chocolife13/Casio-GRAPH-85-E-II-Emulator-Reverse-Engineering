// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c5600
// entry: 004c5600  size: 156


undefined4 FUN_004c5600(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  iVar1 = FUN_004e4000(param_1);
  if (iVar1 != 0) {
    FUN_004e5630(0x19,param_2);
    return 0;
  }
  if (*(short *)((int)param_1 + 2) == 0) {
    FUN_004e5630(9,param_2);
    return 0;
  }
  FUN_004e5070(*(short *)((int)param_1 + 2),&local_c);
  *param_2 = local_c;
  param_2[1] = local_8;
  param_2[2] = local_4;
  return 1;
}

