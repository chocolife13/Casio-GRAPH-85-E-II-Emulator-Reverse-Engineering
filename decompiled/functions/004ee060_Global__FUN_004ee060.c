// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ee060
// entry: 004ee060  size: 1369


bool FUN_004ee060(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  cVar1 = *param_1;
  cVar2 = FUN_00526090(0x17);
  iVar3 = (int)cVar2;
  if (iVar3 == 0) {
    if (cVar1 == '\x7f') {
      cVar1 = param_1[1];
      if (cVar1 == 'T') {
        FUN_004e3980(param_2,param_3,param_4,param_5);
        iVar3 = FUN_004e4020(param_4);
        return iVar3 == 0;
      }
      if (cVar1 == -0x50) {
        FUN_004e3100(param_2,param_3,param_4);
      }
      else {
        if (cVar1 != -0x4f) goto LAB_004ee5a0;
        FUN_004e31e0(param_2,param_3,param_4);
      }
      goto LAB_004ee56e;
    }
    switch(cVar1) {
    case '\x10':
      FUN_004e15d0(param_2,param_3,param_4);
      break;
    case '\x11':
      FUN_004e12f0(param_2,param_3,param_4);
      break;
    case '\x12':
      FUN_004e16b0(param_2,param_3,param_4);
      break;
    default:
switchD_004ee0a5_caseD_13:
      FUN_004e5630(8,param_4);
      return false;
    case '<':
      FUN_004e13f0(param_2,param_3,param_4);
      break;
    case '=':
      FUN_004e11f0(param_2,param_3,param_4);
      break;
    case '>':
      FUN_004e14d0(param_2,param_3,param_4);
      break;
    case -0x78:
      FUN_004e2d30(param_2,param_3,param_4);
      break;
    case -0x77:
      FUN_004e0880(param_2,param_3,param_4,param_6);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x76:
switchD_004ee0a5_caseD_8a:
      FUN_004e35d0(param_2,param_3,param_4);
      break;
    case -0x68:
      FUN_004e2e10(param_2,param_3,param_4);
      break;
    case -0x67:
      FUN_004e0b00(param_2,param_3,param_4,param_6);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x66:
switchD_004ee0a5_caseD_9a:
      FUN_004e3500(param_2,param_3,param_4);
      break;
    case -0x58:
      FUN_004e1050(param_2,param_3,param_4,param_6);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x57:
    case -8:
    case -6:
      FUN_004e0c40(param_2,param_3,param_4,param_6);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x56:
switchD_004ee0a5_caseD_aa:
      FUN_004e3430(param_2,param_3,param_4);
      break;
    case -0x48:
      FUN_004e2820(param_2,param_3,param_4,param_6);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x47:
      FUN_004e0dd0(param_2,param_3,param_4,param_6);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x46:
switchD_004ee0a5_caseD_ba:
      FUN_004e3360(param_2,param_3,param_4);
    }
  }
  else {
    if (cVar1 == '\x7f') {
LAB_004ee5a0:
      FUN_004e5630(8,param_4);
      return false;
    }
    switch(cVar1) {
    case '\x10':
      FUN_004e15d0(param_2,param_3,param_4);
      break;
    case '\x11':
      FUN_004e12f0(param_2,param_3,param_4);
      break;
    case '\x12':
      FUN_004e16b0(param_2,param_3,param_4);
      break;
    default:
      goto switchD_004ee0a5_caseD_13;
    case '<':
      FUN_004e13f0(param_2,param_3,param_4);
      break;
    case '=':
      FUN_004e11f0(param_2,param_3,param_4);
      break;
    case '>':
      FUN_004e14d0(param_2,param_3,param_4);
      break;
    case -0x77:
      FUN_004ef400(param_2,local_30,iVar3);
      FUN_004ef400(param_3,local_18,iVar3);
      FUN_004e0740(param_2,param_3,param_4,param_6);
      FUN_004ef4f0(param_4,param_4,iVar3);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x76:
      goto switchD_004ee0a5_caseD_8a;
    case -0x67:
      FUN_004ef400(param_2,local_30,iVar3);
      FUN_004ef400(param_3,local_18,iVar3);
      FUN_004e09c0(param_2,param_3,param_4,param_6);
      FUN_004ef4f0(param_4,param_4,iVar3);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x66:
      goto switchD_004ee0a5_caseD_9a;
    case -0x57:
    case -8:
    case -6:
      FUN_004ef400(param_2,local_30,iVar3);
      FUN_004ef400(param_3,local_18,iVar3);
      FUN_004e0c40(param_2,param_3,param_4,param_6);
      FUN_004ef4f0(param_4,param_4,iVar3);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x56:
      goto switchD_004ee0a5_caseD_aa;
    case -0x47:
      FUN_004ef400(param_2,local_30,iVar3);
      FUN_004ef400(param_3,local_18,iVar3);
      FUN_004e0dd0(param_2,param_3,param_4,param_6);
      FUN_004ef4f0(param_4,param_4,iVar3);
      iVar3 = FUN_004e4020(param_4);
      return iVar3 == 0;
    case -0x46:
      goto switchD_004ee0a5_caseD_ba;
    }
  }
LAB_004ee56e:
  iVar3 = FUN_004e4020(param_4);
  return iVar3 == 0;
}

