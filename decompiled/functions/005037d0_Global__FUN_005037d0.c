// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005037d0
// entry: 005037d0  size: 781


int FUN_005037d0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_d00;
  int local_cfc;
  undefined4 local_cf8;
  undefined1 local_cf4 [4];
  byte local_cf0 [24];
  undefined1 local_cd8 [2268];
  undefined1 *local_3fc;
  byte local_3f8;
  byte local_3f7;
  undefined4 local_3f4;
  undefined1 local_3e0 [992];
  
  if (*param_1 == 0x75f9) {
    FUN_00538710();
    FUN_0052b050();
    return 0;
  }
  local_3fc = local_3e0;
  FUN_00503490(local_cd8);
  local_3f8 = local_3f8 & 0xcf;
  iVar2 = FUN_00516800(local_cd8);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_00517bb0();
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_00514940(local_cd8,1);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar3 = FUN_00517c00();
  switch(uVar3) {
  case 2:
    FUN_00505f10(local_cd8,0x80);
    break;
  default:
    iVar2 = FUN_00516b30();
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_00514820(local_cd8);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_005167a0(local_cd8);
    FUN_00517ac0(0xb);
    break;
  case 4:
    local_cfc = *param_1;
    iVar4 = FUN_004732e0(1,local_cf0,&local_cfc);
    iVar2 = local_cfc;
    if (iVar4 == 0) {
      FUN_0052b240((local_cf0[0] & 0xf0) == 0xf0);
      iVar2 = local_cfc;
    }
    goto LAB_00503a5d;
  case 5:
    local_cf8 = CONCAT31(local_cf8._1_3_,2);
    goto LAB_00503907;
  case 6:
    local_cf8 = CONCAT31(local_cf8._1_3_,1);
LAB_00503907:
    local_3f4 = CONCAT31(local_3f4._1_3_,0x23);
    FUN_00528a20(0x23,local_cf4,&local_d00);
    if (local_d00 == 0) {
      FUN_00517ac0(0xb);
    }
    else {
      FUN_00505f10(local_cd8,local_cf8);
    }
    break;
  case 8:
    uVar3 = 0x28;
    goto LAB_00503968;
  case 9:
    uVar3 = 0x26;
    goto LAB_00503968;
  case 0xb:
    break;
  case 0xc:
    if (*param_1 == 0) {
      *param_1 = 0x16a;
    }
    break;
  case 0xd:
    uVar3 = 0x20;
    goto LAB_00503968;
  case 0xe:
    uVar3 = 0x21;
LAB_00503968:
    local_3f4 = CONCAT31(local_3f4._1_3_,0x24);
    cVar1 = FUN_00526090(0x25);
    if (cVar1 == '\0') {
      local_3f7 = local_3f7 | 2;
    }
    else {
      local_3f7 = local_3f7 & 0xfd;
    }
    FUN_00528a20(local_3f4,local_cf4,&local_d00);
    if (local_d00 == 0) {
      FUN_00517ac0(0xb);
    }
    else {
      FUN_00518f70(local_3e0,uVar3);
    }
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    if (param_2 == 0) {
      FUN_00517ac0(1);
    }
    else if (*param_1 == 0) {
      *param_1 = 0x16c;
    }
  case 1:
    FUN_005062c0(local_3e0);
    break;
  case 0x13:
  case 0x14:
    if (param_2 == 0) {
      FUN_00517ac0(0xb);
    }
    else if (*param_1 == 0) {
      *param_1 = 0x16c;
    }
  }
  FUN_00516760(local_cd8);
  iVar2 = FUN_00509700(local_cd8,*param_1);
  FUN_005167a0(local_cd8);
LAB_00503a5d:
  switch(iVar2) {
  case -0xe:
  case -6:
  case -2:
    *param_1 = 0x7532;
    return 0;
  case -0xd:
    iVar2 = FUN_00517c00();
    if (iVar2 == 0xc) {
      FUN_00517ac0(0xb);
    }
    *param_1 = 0x753f;
    break;
  case -0xc:
  case 0:
    *param_1 = 0x7534;
    return 0;
  case -0xb:
    *param_1 = 0x7557;
    return 0;
  case -1:
    *param_1 = 0x754d;
    return 0;
  }
  return 0;
}

