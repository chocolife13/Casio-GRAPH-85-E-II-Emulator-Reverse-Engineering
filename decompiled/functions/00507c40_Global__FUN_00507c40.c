// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00507c40
// entry: 00507c40  size: 2372


undefined4 FUN_00507c40(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *in_stack_00001100;
  
  FUN_00553a90();
  cVar2 = *in_stack_00001100;
  cVar1 = in_stack_00001100[1];
  FUN_004fe330();
  if ((cVar2 == -9) && (cVar1 == '*')) {
    if (((*in_stack_00001100 != '\x7f') ||
        ((in_stack_00001100[1] != -0x5f && (in_stack_00001100[1] != -0x58)))) &&
       ((*in_stack_00001100 != -7 || (in_stack_00001100[1] != '\x13')))) goto LAB_00507f63;
    FUN_004fe330();
    iVar3 = FUN_004f9b40();
    if (iVar3 == 0) {
      if (*in_stack_00001100 != ',') {
        uVar4 = FUN_00501f30();
        return uVar4;
      }
      FUN_004fe330();
      iVar3 = FUN_00506370();
      if (iVar3 != 0) {
        uVar4 = FUN_005064b0();
        return uVar4;
      }
      iVar3 = FUN_00507b30();
      if (iVar3 != 0) {
        uVar4 = FUN_005064b0();
        return uVar4;
      }
      iVar3 = FUN_004f9b40();
      if (iVar3 == 0) {
        uVar4 = FUN_00501f30();
        return uVar4;
      }
    }
  }
  else {
    iVar3 = FUN_004f9b40();
    if (iVar3 == 0) {
      uVar4 = FUN_00501f30();
      return uVar4;
    }
  }
  FUN_00503490();
  if (((cVar1 != '.') && (cVar1 != '/')) &&
     ((iVar3 = FUN_00517bb0(), iVar3 != 0 ||
      ((iVar3 = FUN_00514940(), iVar3 != 0 || (iVar3 = FUN_00516800(), iVar3 != 0)))))) {
    uVar4 = FUN_005064b0();
    return uVar4;
  }
  if (cVar2 == -9) {
    switch(cVar1) {
    case ' ':
      iVar3 = FUN_00505f10();
      if (iVar3 == 0) goto switchD_00507e74_caseD_3;
      goto LAB_0050822e;
    default:
      goto switchD_00508067_caseD_21;
    case '$':
      goto LAB_005080c6;
    case '%':
LAB_005080c6:
      FUN_00528a20();
      if (param_3 == 0) {
        iVar3 = FUN_00505f10();
        if (iVar3 == 0) {
          uVar4 = FUN_005064b0();
          return uVar4;
        }
        iVar3 = FUN_00509890();
        if (iVar3 != 0) {
          uVar4 = FUN_005064b0();
          return uVar4;
        }
      }
      FUN_00505f10();
      goto LAB_0050822e;
    case '&':
      param_2 = 0x21;
      break;
    case '\'':
      param_2 = 0x20;
      break;
    case '(':
      param_2 = 0x26;
      break;
    case ')':
      param_2 = 0x28;
      break;
    case '*':
      iVar3 = FUN_00518a70();
      if (iVar3 < 1) {
        uVar4 = FUN_005064b0();
        return uVar4;
      }
      iVar3 = FUN_00517c00();
      if (iVar3 == 0) {
        iVar3 = FUN_00516b30();
        if (iVar3 != 0) {
          uVar4 = FUN_005064b0();
          return uVar4;
        }
        iVar3 = FUN_00514820();
        if (iVar3 != 0) {
          FUN_00515dd0();
          uVar4 = FUN_005064b0();
          return uVar4;
        }
      }
      else {
        FUN_00516760();
      }
      FUN_0050acb0();
      iVar3 = FUN_00510270();
      if (iVar3 != 0) {
        FUN_00515dd0();
        uVar4 = FUN_005064b0();
        return uVar4;
      }
      FUN_0050acb0();
      iVar3 = FUN_00519770();
      if (iVar3 != 0) {
        FUN_00515dd0();
        uVar4 = FUN_005064b0();
        return uVar4;
      }
      FUN_00517b40();
      FUN_00517ac0();
      goto switchD_00508067_caseD_21;
    case '.':
      iVar5 = FUN_00517c00();
      iVar3 = FUN_00505f10();
      if (iVar3 == 0) {
        uVar4 = FUN_005064b0();
        return uVar4;
      }
      iVar3 = FUN_00509890();
      if (iVar3 != 0) {
        uVar4 = FUN_005064b0();
        return uVar4;
      }
      goto joined_r0x00508551;
    case '/':
      iVar5 = FUN_00517c00();
      FUN_00526090();
      iVar3 = FUN_004408d0();
      if (iVar3 != 0) {
        FUN_00518200();
        uVar4 = FUN_005064b0();
        return uVar4;
      }
joined_r0x00508551:
      if (iVar5 != 0) {
        FUN_00517ac0();
      }
      goto switchD_00508067_caseD_21;
    }
    cVar2 = FUN_00526090();
    if ((cVar2 != '\0') && ((param_2 == 0x26 || (param_2 == 0x28)))) {
      uVar4 = FUN_00501ef0();
      return uVar4;
    }
    FUN_00528a20();
    if (param_3 == 0) {
      uVar4 = FUN_00501ef0();
      return uVar4;
    }
    FUN_00518f70();
LAB_0050822e:
    iVar3 = FUN_00517c00();
    if (iVar3 == 0) {
      iVar3 = FUN_00516b30();
      if (iVar3 != 0) {
        uVar4 = FUN_005064b0();
        return uVar4;
      }
      iVar3 = FUN_00514820();
      if (iVar3 != 0) {
        FUN_00515dd0();
        uVar4 = FUN_005064b0();
        return uVar4;
      }
    }
    else {
      FUN_00516760();
    }
    FUN_0050acb0();
    FUN_00517c40();
    iVar3 = FUN_00510270();
    if (iVar3 != 0) {
      FUN_00515dd0();
      uVar4 = FUN_005064b0();
      return uVar4;
    }
    FUN_00517b40();
    FUN_0050acb0();
    FUN_00517ac0();
    goto switchD_00508067_caseD_21;
  }
  if (cVar2 != -7) goto switchD_00508067_caseD_21;
  uVar4 = FUN_00517c00();
  switch(uVar4) {
  case 1:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    FUN_005062c0();
    goto LAB_00507f8f;
  case 2:
    FUN_00505f10();
    goto LAB_00507f8f;
  default:
switchD_00507e74_caseD_3:
    uVar4 = FUN_005064b0();
    return uVar4;
  case 5:
    goto LAB_00507eb0;
  case 6:
LAB_00507eb0:
    FUN_00528a20();
    if (param_3 == 0) {
      uVar4 = FUN_00501f30();
      return uVar4;
    }
    FUN_00505f10();
    goto LAB_00507f8f;
  case 8:
    break;
  case 9:
    break;
  case 0xd:
    break;
  case 0xe:
  }
  FUN_00526090();
  FUN_00528a20();
  if (param_3 == 0) {
LAB_00507f63:
    uVar4 = FUN_00501f30();
    return uVar4;
  }
  FUN_00518f70();
LAB_00507f8f:
  FUN_00516760();
  FUN_0050acb0();
  iVar3 = FUN_0051b920();
  if (iVar3 != 0) {
    uVar4 = FUN_005064b0();
    return uVar4;
  }
  FUN_00514940();
  iVar3 = FUN_00514820();
  if (iVar3 == 0) {
    FUN_0050acb0();
    iVar3 = FUN_00510270();
    if (iVar3 == 0) {
      FUN_0050acb0();
switchD_00508067_caseD_21:
      if ((cVar1 != '.') && (cVar1 != '/')) {
        FUN_005167a0();
      }
      return 1;
    }
  }
  FUN_00515dd0();
  uVar4 = FUN_005064b0();
  return uVar4;
}

