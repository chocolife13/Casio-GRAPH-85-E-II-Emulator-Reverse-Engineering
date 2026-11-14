// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ee820
// entry: 004ee820  size: 1990


bool FUN_004ee820(char *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_18 [24];
  
  cVar1 = *param_1;
  cVar2 = FUN_00526090(0x17);
  iVar3 = (int)cVar2;
  if (iVar3 == 0) {
    if (cVar1 == '\x7f') {
      switch(param_1[1]) {
      case '!':
        FUN_004e02e0(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case '\"':
        FUN_004e28c0(param_2,param_3,param_4,param_5);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case '#':
        FUN_004e3900(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case '$':
        FUN_004e3800(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case '%':
        FUN_004e3870(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      default:
        FUN_004e5630(8,param_3);
        return false;
      case 'A':
        FUN_004e0330(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case 'F':
        FUN_004e0380(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case 'H':
        FUN_004e0530(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case 'L':
        FUN_004de110(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case 'M':
        FUN_004de160(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case 'N':
        FUN_004de200(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case 'O':
        FUN_004de1b0(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      case -0x4d:
        FUN_004e32c0(param_2,param_3);
        iVar3 = FUN_004e4020(param_3);
        return iVar3 == 0;
      }
    }
    switch(cVar1) {
    case -0x7f:
      FUN_004e1be0(param_2,param_3,param_4,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x7e:
      FUN_004e1c60(param_2,param_3,param_4,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x7d:
      FUN_004e1ce0(param_2,param_3,param_4,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    default:
switchD_004ee865_caseD_84:
      FUN_004e5630(8,param_3);
      return false;
    case -0x7b:
      FUN_004e1a00(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x7a:
      FUN_004e1790(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x79:
    case -0x49:
      FUN_004e26b0(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x6f:
      FUN_004e1d60(param_2,param_3,param_4,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x6e:
      FUN_004e1e50(param_2,param_3,param_4,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x6d:
      FUN_004e1f40(param_2,param_3,param_4,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x6b:
      FUN_004e1af0(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x6a:
      FUN_004e27f0(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x69:
      FUN_004e23b0(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x5f:
      FUN_004e1fc0(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x5e:
      FUN_004e2050(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x5d:
      FUN_004e20e0(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x5b:
      FUN_004e1880(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x5a:
      FUN_004e2530(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x59:
      FUN_004e36a0(param_2,param_3);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x4f:
      FUN_004e2170(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x4e:
      FUN_004e2200(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x4d:
      FUN_004e22d0(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x4b:
      FUN_004e1940(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x4a:
      FUN_004e25f0(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -0x22:
      FUN_004e2470(param_2,param_3,param_5);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    case -5:
      FUN_004e3b10(param_2);
      break;
    case -4:
      FUN_004e3ba0(param_2);
      break;
    case -3:
      FUN_004e3c30(param_2);
      break;
    case -2:
      FUN_004e3cc0(param_2);
    }
    puVar4 = param_3;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar3 = FUN_004e4020(param_3);
    return iVar3 == 0;
  }
  if (cVar1 == '\x7f') {
    FUN_004e5630(8,param_3);
    return false;
  }
  if (cVar1 != -0x79) {
    if (cVar1 == -0x59) {
      FUN_004e36a0(param_2,param_3);
      iVar3 = FUN_004e4020(param_3);
      return iVar3 == 0;
    }
    if (cVar1 != -0x49) goto switchD_004ee865_caseD_84;
  }
  FUN_004ef400(param_2,local_18,iVar3);
  FUN_004e26b0(param_2,param_3,param_5);
  FUN_004ef4f0(param_3,param_3,iVar3);
  iVar3 = FUN_004e4020(param_3);
  return iVar3 == 0;
}

