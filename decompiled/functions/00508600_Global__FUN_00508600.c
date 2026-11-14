// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00508600
// entry: 00508600  size: 686


int FUN_00508600(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  FUN_004e5780(param_3);
  *param_4 = 0;
  cVar2 = '\0';
  FUN_004fe330(param_2,param_1);
  if (*param_2 == -9) {
    switch(param_2[1]) {
    case -0x74:
      cVar2 = '\x02';
      FUN_004fe330(param_2,param_1);
      bVar1 = true;
      break;
    case -0x73:
      cVar2 = '\x03';
      FUN_004fe330(param_2,param_1);
      bVar1 = true;
      break;
    case -0x72:
      cVar2 = '\x05';
      FUN_004fe330(param_2,param_1);
      bVar1 = true;
      break;
    case -0x71:
      cVar2 = '\b';
      FUN_004fe330(param_2,param_1);
      bVar1 = true;
      break;
    default:
      goto switchD_0050864a_default;
    }
  }
  else {
switchD_0050864a_default:
    bVar1 = false;
  }
  switch(*param_2) {
  case -0x2f:
    if (!bVar1) {
      FUN_004fe330(param_2,param_1);
      iVar3 = FUN_004f9b40(param_2);
      if (iVar3 != 0) {
        FUN_00518100();
        FUN_00515dd0();
        FUN_00517e40();
        return 1;
      }
    }
    break;
  case -0x20:
  case -0x1f:
    iVar3 = FUN_005064d0(param_1,param_2,cVar2,param_3,param_4);
    return iVar3;
  case -0x10:
  case -0xf:
    if (cVar2 == '\0') {
      cVar2 = '\b';
    }
  case -0x12:
  case -0x11:
  case -0xe:
  case -0xd:
  case -0xc:
  case -0xb:
switchD_005086bb_caseD_ee:
    iVar3 = FUN_005089c0(param_1,param_2,cVar2,param_3,param_4);
    return iVar3;
  case -9:
    switch(param_2[1]) {
    case '\x19':
      if (!bVar1) {
        FUN_004fe330(param_2,param_1);
        iVar3 = FUN_004f9b40(param_2);
        if (iVar3 != 0) {
          FUN_00518100();
          FUN_00515dd0();
          FUN_00517e40();
          FUN_00515eb0();
          FUN_00515f60();
          FUN_00516c00();
          FUN_00516ae0();
          FUN_00516850();
          return 1;
        }
      }
      break;
    case ' ':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '.':
    case '/':
      goto switchD_00508730_caseD_20;
    case '\"':
    case '#':
      if (!bVar1) {
        FUN_004fe330(param_2,param_1);
        iVar3 = FUN_004f9b40(param_2);
        if (iVar3 != 0) {
          iVar3 = FUN_00517bb0();
          if ((iVar3 != 0) || (iVar3 = FUN_00516800(0), iVar3 != 0)) {
            iVar3 = FUN_005064b0(iVar3,param_3);
            return iVar3;
          }
          if (param_2[1] != '#') {
            iVar3 = FUN_0052fd00(0,param_3,param_4);
            if (iVar3 == 0) {
              return 0;
            }
            FUN_00517ac0(0xb);
            return iVar3;
          }
          iVar3 = FUN_004732e0();
          if (iVar3 == 0) {
            return 0;
          }
          FUN_00517ac0(4);
          return iVar3;
        }
      }
      break;
    case 'b':
      goto switchD_005086bb_caseD_ee;
    case -0x6d:
    case -0x6c:
      if (!bVar1) {
        iVar3 = FUN_005064d0(param_1,param_2,cVar2,param_3,param_4);
        return iVar3;
      }
      break;
    case -0x60:
    case -0x5f:
    case -0x5e:
    case -0x5d:
    case -0x5c:
    case -0x5b:
    case -0x5a:
    case -0x59:
    case -0x58:
    case -0x57:
    case -0x56:
    case -0x55:
    case -0x54:
    case -0x53:
      iVar3 = FUN_005064d0(param_1,param_2,cVar2,param_3,param_4);
      return iVar3;
    }
    break;
  case -7:
    if (param_2[1] != ' ') break;
switchD_00508730_caseD_20:
    if (!bVar1) {
      iVar3 = FUN_00507c40(param_1,param_2,param_3,param_4);
      return iVar3;
    }
  }
  iVar3 = FUN_00501f30(param_3);
  return iVar3;
}

