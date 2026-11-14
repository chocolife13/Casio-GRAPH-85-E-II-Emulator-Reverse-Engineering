// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004afd10
// entry: 004afd10  size: 598


undefined4 FUN_004afd10(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_138;
  undefined4 local_134;
  undefined4 local_130;
  char *local_12c;
  undefined4 local_128;
  byte local_124 [24];
  char local_10c [268];
  
  uVar4 = 0;
  FUN_00414240();
  uVar1 = FUN_00526090(0x17);
  local_128 = CONCAT31(local_128._1_3_,uVar1);
  if (param_3 != 0) {
    FUN_00526070(0x17,0xf);
  }
  FUN_005232d0(1,1);
  FUN_00523470(s______________________005c0874,0x15);
  FUN_005232d0(1,2);
  FUN_00523470(param_1,0x15);
  FUN_005232d0(1,3);
  FUN_00523470(s______________________005c0874,0x15);
  local_134 = 0;
  local_130 = 0;
  local_10c[0] = '\0';
  FUN_005232d0(4,5);
  FUN_00527030();
switchD_004afe50_caseD_7533:
  iVar2 = FUN_00526620(&local_138);
  if (iVar2 == 0) goto code_r0x004afe48;
  switch(local_138) {
  case 0x81:
    local_138 = 0x1d;
    uVar5 = 0x1d;
    break;
  case 0x82:
    local_138 = 0x1e;
    uVar5 = 0x1e;
    break;
  case 0x83:
    local_138 = 0x1f;
    uVar5 = 0x1f;
    break;
  default:
    uVar5 = local_138;
    if (((local_138 < 0x1b) || (0x1f < local_138)) && ((local_138 < 0x30 || (0x39 < local_138))))
    goto switchD_004afe50_caseD_7533;
    break;
  case 0x85:
    local_138 = 0x1c;
    uVar5 = 0x1c;
    break;
  case 0x95:
    local_138 = 0x1b;
    uVar5 = 0x1b;
  }
  goto LAB_004afe59;
code_r0x004afe48:
  switch(local_138) {
  case 0x7531:
    uVar5 = 0x1a;
    break;
  case 0x7532:
  case 0x754d:
    goto switchD_004afe50_caseD_7532;
  default:
    goto switchD_004afe50_caseD_7533;
  case 0x7534:
    local_12c = local_10c;
    if (local_10c[0] != '\0') {
      iVar2 = FUN_004f64a0(&local_12c,4,local_124);
      if (iVar2 == 0) {
        uVar3 = FUN_004e4020(local_124);
        FUN_0052b240(uVar3);
      }
      else if (((local_124[0] & 0x80) == 0) || ((local_124[0] & 0xf0) == 0xf0)) {
        uVar4 = FUN_004e5100(local_124);
      }
      else {
        FUN_0052b240(3);
      }
      goto LAB_004aff4c;
    }
    goto switchD_004afe50_caseD_7533;
  case 0x753f:
  case 0x7544:
  case 0x7545:
  case 0x7549:
    iVar2 = FUN_005249f0(local_10c,param_2,&local_134,&local_130,&local_138,4,5);
    if (iVar2 == 0) {
      local_134 = FUN_005252a0(local_10c,local_134,local_130,4,5);
    }
    goto switchD_004afe50_caseD_7533;
  }
LAB_004afe59:
  local_130 = FUN_00525300(local_10c,param_2,local_130,uVar5);
  local_134 = FUN_005252a0(local_10c,local_134,local_130,4,5);
  goto switchD_004afe50_caseD_7533;
switchD_004afe50_caseD_7532:
  FUN_00523740();
LAB_004aff4c:
  FUN_00526070(0x17,local_128);
  return uVar4;
}

