// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518770
// entry: 00518770  size: 406


int FUN_00518770(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_cd8 [2268];
  undefined1 *local_3fc;
  byte local_3f8;
  byte local_3f7;
  byte local_3f6;
  undefined1 local_3f4;
  undefined1 local_3e0 [992];
  
  local_3fc = local_3e0;
  FUN_00503490(local_cd8);
  local_3f4 = 0x24;
  cVar1 = FUN_00526090(0x25);
  if (cVar1 == '\0') {
    local_3f7 = local_3f7 | 2;
  }
  else {
    local_3f7 = local_3f7 & 0xfd;
  }
  cVar1 = FUN_00526090(0x31);
  if (cVar1 == '\x01') {
    local_3f8 = local_3f8 & 0xcf;
  }
  else {
    local_3f6 = local_3f6 | 0x80;
    local_3f8 = local_3f8 | 0x30;
  }
  if (param_1 == 0x23) {
    uVar2 = FUN_00517c00();
    iVar3 = 0;
    switch(uVar2) {
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
      goto switchD_00518810_caseD_5;
    default:
      return -6;
    }
  }
  iVar3 = FUN_00516b30();
  if (iVar3 != 0) {
LAB_005188ee:
    FUN_0052b240(iVar3);
    return -0xb;
  }
switchD_00518810_caseD_5:
  iVar4 = param_1;
  param_1 = iVar3;
  iVar5 = 0;
  do {
    if (((iVar4 != 0x1f) || ((local_3f8 & 0x30) != 0)) &&
       ((iVar3 = FUN_00517bb0(), iVar3 != 0 ||
        (iVar3 = FUN_00514940(local_cd8,1), param_1 = iVar3, iVar3 != 0)))) goto LAB_005188ee;
    switch(iVar4) {
    case 0x1f:
      param_1 = FUN_005190b0(local_cd8,iVar5);
      break;
    case 0x20:
    case 0x21:
    case 0x26:
    case 0x28:
      param_1 = FUN_00518d10(iVar4,local_cd8,iVar5);
      break;
    case 0x23:
      param_1 = FUN_00518990(local_cd8,iVar5);
      break;
    case 0x29:
      param_1 = FUN_00518c10(local_cd8,iVar5);
    }
    switch(param_1) {
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x23:
    case 0x26:
    case 0x28:
    case 0x29:
      goto switchD_005188c8_caseD_1f;
    case -0xe:
    case -0xd:
    case -0xb:
    case -6:
    case -2:
    case -1:
    case 0:
      return param_1;
    default:
      iVar4 = 0x23;
      iVar5 = param_1;
    }
  } while( true );
switchD_005188c8_caseD_1f:
  iVar3 = param_1;
  goto switchD_00518810_caseD_5;
}

