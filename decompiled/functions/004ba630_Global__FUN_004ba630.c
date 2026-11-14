// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ba630
// entry: 004ba630  size: 376


undefined4 FUN_004ba630(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  switch(param_2) {
  case 1:
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return 1;
  case 2:
    FUN_004e6d00(param_1,param_1,param_3);
    return 1;
  case 3:
    FUN_004e6d00(param_1,param_1,param_3);
    FUN_004e6d00(param_3,&local_c,param_3);
    return 1;
  case 4:
    FUN_004e6d00(param_1,param_1,param_3);
    FUN_004e6d00(param_3,param_3,param_3);
    return 1;
  case 5:
    FUN_004e6d00(param_1,param_1,param_3);
    FUN_004e6d00(param_3,param_3,param_3);
    FUN_004e6d00(param_3,&local_c,param_3);
    return 1;
  case 6:
    FUN_004e6d00(param_1,&local_c,param_3);
    puVar1 = &local_c;
    break;
  case 7:
    FUN_004e6d00(param_1,&local_c,param_3);
    FUN_004e6d00(param_3,&local_c,param_3);
    FUN_004e6d00(param_3,param_3,param_3);
    FUN_004e6d00(param_3,&local_c,param_3);
    return 1;
  case 8:
    FUN_004e6d00(param_3,param_3,param_3);
    puVar1 = param_3;
    break;
  default:
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return 0;
  }
  FUN_004e6d00(param_3,puVar1,param_3);
  FUN_004e6d00(param_3,param_3,param_3);
  return 1;
}

