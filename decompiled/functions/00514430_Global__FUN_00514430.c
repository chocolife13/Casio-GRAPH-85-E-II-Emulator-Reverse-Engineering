// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514430
// entry: 00514430  size: 107


undefined4 FUN_00514430(char *param_1,int *param_2)

{
  int iVar1;
  
  switch(*param_2) {
  case 1:
    *param_2 = 2;
    param_2[1] = param_2[2] + 1;
    break;
  case 2:
  case 8:
  case 10:
    return 2;
  case 3:
  case 4:
  case 7:
  case 9:
    if (*param_1 != '[') {
      *param_2 = *param_2 + 1;
      param_2[1] = param_2[2] + 1;
      return 0;
    }
  default:
    return 0xfffffffe;
  case 6:
    if (*param_1 == '[') {
      return 0xfffffffe;
    }
    iVar1 = param_2[4];
    param_2[1] = param_2[3];
    param_2[4] = iVar1 + 1;
    if (0xff < iVar1 + 1) {
      return 2;
    }
  }
  return 0;
}

