// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c68e0
// entry: 004c68e0  size: 174


bool FUN_004c68e0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_004c5600(param_1,&local_30);
  if (iVar1 == 0) {
    *param_2 = local_30;
    param_2[1] = local_2c;
    param_2[2] = local_28;
    return false;
  }
  iVar1 = FUN_004c7060(param_1,&local_18);
  if (iVar1 == 0) {
    *param_2 = local_18;
    param_2[1] = local_14;
    param_2[2] = local_10;
    return false;
  }
  FUN_004e0dd0(&local_18,&local_30,param_2,1);
  iVar1 = FUN_004e4020(param_2);
  if (iVar1 != 0) {
    return false;
  }
  FUN_004e3e70(param_2,param_2);
  iVar1 = FUN_004e4020(param_2);
  return iVar1 == 0;
}

