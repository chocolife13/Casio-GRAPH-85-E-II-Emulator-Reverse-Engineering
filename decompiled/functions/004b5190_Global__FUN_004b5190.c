// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b5190
// entry: 004b5190  size: 522


int FUN_004b5190(undefined4 param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d2;
  undefined1 local_d1;
  char local_d0 [48];
  undefined1 local_a0 [28];
  undefined1 local_84 [132];
  
  local_d5 = 0x52;
  local_d4 = 0x52;
  local_d2 = 0x52;
  local_d8 = 0x4d;
  local_d7 = 0x61;
  local_d6 = 0x45;
  local_d3 = 0x4f;
  local_d1 = 0;
  switch(*param_3) {
  case 1:
    uVar2 = 9;
    break;
  case 2:
    uVar2 = 0xf;
    break;
  case 3:
    uVar2 = 1;
    break;
  case 4:
    uVar2 = 7;
    break;
  default:
    uVar2 = *param_4;
  }
  iVar3 = FUN_004e7da0(param_1,local_84,uVar2);
  if (iVar3 == 0) {
    FUN_004b6ef0(param_2,&local_d8);
    return 1;
  }
  switch(*param_3) {
  case 1:
    iVar3 = FUN_004b45a0(local_a0,param_1);
    if (iVar3 == -1) {
      return 1;
    }
    iVar3 = FUN_004b4710(param_2,local_a0,10,1);
    break;
  case 2:
switchD_004b5242_caseD_2:
    iVar3 = FUN_004b65f0(local_84,param_2);
    return iVar3;
  case 3:
switchD_004b5242_caseD_3:
    iVar3 = FUN_004b6530(local_84,param_2);
    return iVar3;
  case 4:
switchD_004b5242_caseD_4:
    iVar3 = FUN_004b6570(local_84,param_2);
    return iVar3;
  default:
    switch(*param_4) {
    case 1:
      goto switchD_004b5242_caseD_3;
    default:
      return iVar3;
    case 7:
      goto switchD_004b5242_caseD_4;
    case 9:
      iVar3 = FUN_004b45a0(local_a0,param_1);
      if (iVar3 == -1) {
        return 1;
      }
      iVar3 = FUN_004b4710(param_2,local_a0,10,1);
      break;
    case 0xf:
      goto switchD_004b5242_caseD_2;
    }
  }
  if (iVar3 == -1) {
    uVar4 = 0xffffffff;
    pcVar6 = param_2;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    local_d0[0] = -0x79;
    iVar3 = -1;
    local_d0[1] = 0;
    pcVar6 = local_d0;
    do {
      pcVar7 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_004b6ef0(param_2,local_d0);
  }
  return 0;
}

