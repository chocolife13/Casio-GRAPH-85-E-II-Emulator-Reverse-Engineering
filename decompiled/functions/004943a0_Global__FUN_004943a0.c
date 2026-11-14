// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004943a0
// entry: 004943a0  size: 304


undefined4 FUN_004943a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_005274d0(0,param_1);
  if (iVar1 == 0) {
    return 0x19;
  }
  iVar1 = FUN_00527440(0,param_1);
  *param_4 = iVar1;
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = FUN_00527570(0,param_1,1,&local_18);
  if (iVar1 != 0) {
    return 4;
  }
  *param_3 = local_18;
  param_3[1] = local_14;
  param_3[2] = local_10;
  *param_2 = local_18;
  param_2[1] = local_14;
  param_2[2] = local_10;
  iVar1 = 2;
  if (1 < *param_4) {
    do {
      iVar2 = FUN_0052f820();
      if (iVar2 == 1) {
        return 1;
      }
      iVar2 = FUN_00527570(0,param_1,iVar1,&local_18);
      if (iVar2 != 0) {
        return 4;
      }
      iVar2 = FUN_00469e60(param_2,&local_18);
      if (iVar2 < 0) {
        *param_2 = local_18;
        param_2[1] = local_14;
        param_2[2] = local_10;
      }
      iVar2 = FUN_00469e60(param_3,&local_18);
      if (0 < iVar2) {
        *param_3 = local_18;
        param_3[1] = local_14;
        param_3[2] = local_10;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *param_4);
  }
  return 0;
}

