// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050af70
// entry: 0050af70  size: 374


int FUN_0050af70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_d5c [132];
  undefined1 local_cd8 [2268];
  undefined1 *local_3fc;
  byte local_3f8;
  byte local_3f7;
  undefined1 local_3e0 [992];
  
  local_3fc = local_3e0;
  FUN_00503490(local_cd8);
  if ((local_3f8 & 0xc0) != 0) {
    local_3f8 = local_3f8 & 0x3f | 0x80;
  }
  local_3f8 = local_3f8 & 0xcf;
  cVar1 = FUN_00526090(0x26);
  if (cVar1 == '\0') {
    local_3f7 = local_3f7 | 2;
  }
  else {
    local_3f7 = local_3f7 & 0xfd;
  }
  iVar2 = FUN_00517bb0();
  if (iVar2 != 0) {
    FUN_0052b240(iVar2);
    return -0xb;
  }
  if (param_2 == 0x23) {
    iVar2 = FUN_00517c00();
    if (iVar2 != param_1) {
      return -6;
    }
  }
  else {
    iVar2 = FUN_00516b30();
    if (iVar2 != 0) {
      FUN_0052b240(iVar2);
      return -0xb;
    }
  }
  iVar2 = FUN_00514940(local_cd8,1);
  if (iVar2 != 0) {
    FUN_0052b240(iVar2);
    return -0xb;
  }
  FUN_00515e10(local_d5c);
  FUN_00515fa0(local_d5c,1);
  iVar2 = 0;
LAB_0050b087:
  iVar3 = 0;
  do {
    if (param_2 == 0x22) {
      iVar2 = FUN_0050b240(local_cd8,param_1,iVar3);
    }
    else if (param_2 == 0x23) {
      iVar2 = FUN_0050b1f0(local_cd8,param_1,iVar3);
    }
    iVar3 = iVar2;
    iVar2 = iVar3;
    switch(iVar3) {
    case 0x22:
    case 0x23:
      goto switchD_0050b0c6_caseD_22;
    case -0xe:
    case -0xd:
    case -0xb:
    case -6:
    case -2:
    case -1:
    case 0:
      return iVar3;
    default:
      param_2 = 0x23;
    }
  } while( true );
switchD_0050b0c6_caseD_22:
  param_2 = iVar3;
  goto LAB_0050b087;
}

