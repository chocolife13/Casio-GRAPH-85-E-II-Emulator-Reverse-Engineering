// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005234d0
// entry: 005234d0  size: 223


void FUN_005234d0(undefined4 *param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_00413ad0(&local_10);
  if (iVar1 == 1) {
    switch(local_8) {
    default:
      *param_1 = 0;
      break;
    case 1:
      *param_1 = 1;
      break;
    case 2:
      *param_1 = 3;
      break;
    case 4:
      *param_1 = 4;
      break;
    case 8:
      *param_1 = 5;
      break;
    case 0x10:
      *param_1 = 6;
      break;
    case 0x11:
      *param_1 = 7;
      break;
    case 0x12:
      *param_1 = 9;
      break;
    case 0x14:
      *param_1 = 10;
      break;
    case 0x18:
      *param_1 = 0xb;
      break;
    case 0x40:
      *param_1 = 0xc;
    }
  }
  else {
    *param_1 = 0xffffffff;
  }
  param_1[3] = DAT_005cdba4;
  param_1[1] = local_10 + 1;
  param_1[2] = local_c + 1;
  return;
}

