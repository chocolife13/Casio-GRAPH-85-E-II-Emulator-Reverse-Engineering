// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004affd0
// entry: 004affd0  size: 473


undefined1 * FUN_004affd0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00414240();
  FUN_005232d0(1,1);
  FUN_00523470(s______________________005c0874,0x15);
  FUN_005232d0(1,2);
  FUN_00523470(param_2,0x15);
  FUN_005232d0(1,3);
  FUN_00523470(s______________________005c0874,0x15);
  local_8 = 0;
  local_4 = 0;
  *param_1 = 0;
  FUN_005232d0(4,5);
  FUN_00527030();
switchD_004b011d_caseD_7533:
  while (iVar1 = FUN_00526620(&local_c), iVar1 == 0) {
    switch(local_c) {
    case 0x7531:
      local_4 = FUN_00525300(param_1,param_3,local_4,0x1a);
      local_8 = FUN_005252a0(param_1,local_8,local_4,4,5);
      break;
    case 0x7532:
    case 0x754d:
      FUN_00523740();
    case 0x7534:
      FUN_00523740();
      return param_1;
    case 0x753f:
    case 0x7544:
    case 0x7545:
    case 0x7549:
      iVar1 = FUN_005249f0(param_1,param_3,&local_8,&local_4,&local_c,4,5);
      if (iVar1 == 0) {
        local_8 = FUN_005252a0(param_1,local_8,local_4,4,5);
      }
    }
  }
  switch(local_c) {
  case 0x81:
    local_c = 0x1d;
    break;
  case 0x82:
    local_c = 0x1e;
    break;
  case 0x83:
    local_c = 0x1f;
    break;
  default:
    goto switchD_004b0071_caseD_84;
  case 0x85:
    local_c = 0x1c;
    break;
  case 0x95:
    local_c = 0x1b;
  }
  goto LAB_004b00d5;
switchD_004b0071_caseD_84:
  if ((((0x1a < local_c) && (local_c < 0x20)) || ((0x2f < local_c && (local_c < 0x3a)))) ||
     ((0x40 < local_c && (local_c < 0x5b)))) {
LAB_004b00d5:
    local_4 = FUN_00525300(param_1,param_3,local_4,local_c);
    local_8 = FUN_005252a0(param_1,local_8,local_4,4,5);
  }
  goto switchD_004b011d_caseD_7533;
}

