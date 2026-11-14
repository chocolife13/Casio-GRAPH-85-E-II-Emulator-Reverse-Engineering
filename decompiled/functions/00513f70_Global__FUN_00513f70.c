// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00513f70
// entry: 00513f70  size: 457


int FUN_00513f70(int *param_1,undefined4 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_3 != 0) {
    local_18 = 0xb;
  }
switchD_00513fcf_caseD_1:
  puVar2 = (undefined1 *)*param_1;
  uVar1 = *puVar2;
  *param_1 = (int)(puVar2 + 1);
  switch(uVar1) {
  case 0:
    goto switchD_00513fcf_caseD_0;
  default:
    goto switchD_00513fcf_caseD_1;
  case 0xc:
  case 0xd:
  case 0x3a:
    iVar3 = FUN_004ab6a0(s__RUNMAT_005be2d4);
    if ((iVar3 != 0) || (iVar3 = FUN_004ab6a0(s__PROG_005bec48), iVar3 != 0))
    goto switchD_00513fcf_caseD_0;
    break;
  case 0x28:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
    local_14 = local_14 + 1;
    if (0x1a < local_14) {
      return 7;
    }
    goto switchD_00513fcf_caseD_1;
  case 0x29:
    iVar3 = FUN_00514390(&local_18);
    goto LAB_00514076;
  case 0x2c:
    iVar3 = FUN_00514430(puVar2 + 1,&local_18);
    goto LAB_00514076;
  case 0x7b:
    if (local_18 == 0) {
      local_c = local_14;
      local_18 = 6;
      local_8 = 0;
      goto switchD_00513fcf_caseD_1;
    }
    break;
  case 0x7d:
    if (local_18 == 6) {
      local_18 = 0;
      local_14 = local_c;
      iVar3 = FUN_00513f30(&local_18,local_8 + 1);
      if (iVar3 == 0) {
        return 9;
      }
      local_8 = 0;
      goto switchD_00513fcf_caseD_1;
    }
    break;
  case 0x7f:
    iVar3 = FUN_00514270(param_1,&local_18);
LAB_00514076:
    if (iVar3 == -2) goto switchD_00513fcf_caseD_0;
    if (iVar3 != 0) {
      return iVar3;
    }
    goto switchD_00513fcf_caseD_1;
  case 0x80:
  case 0xa0:
    if (local_18 == 0) {
      local_10 = local_14;
      local_18 = 1;
      goto switchD_00513fcf_caseD_1;
    }
    break;
  case 0xc1:
    if (param_3 == 0) goto switchD_00513fcf_caseD_1;
    break;
  case 0xf7:
  case 0xf9:
    goto switchD_00513fcf_caseD_f7;
  }
  return 2;
switchD_00513fcf_caseD_f7:
  *param_1 = (int)(puVar2 + 2);
  goto switchD_00513fcf_caseD_1;
switchD_00513fcf_caseD_0:
  if (local_18 == 6) {
    iVar3 = local_8 + 1;
  }
  else {
    if (local_18 != 2) goto LAB_00514125;
    iVar3 = 2;
  }
  iVar3 = FUN_00513f30(&local_18,iVar3);
  if (iVar3 == 0) {
    return 9;
  }
LAB_00514125:
  *param_2 = local_4;
  return 0;
}

