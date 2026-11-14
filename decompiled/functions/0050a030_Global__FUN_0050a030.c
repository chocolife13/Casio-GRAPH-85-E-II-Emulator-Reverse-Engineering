// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050a030
// entry: 0050a030  size: 261


void FUN_0050a030(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    FUN_0050af00(1);
    return;
  }
  switch(*(undefined1 *)(*(int *)(param_2 + 0x8dc) + 0x1d)) {
  case 1:
    if (((*(byte *)(param_2 + 0x8e1) & 2) == 0) || (((uint)param_1 & 1) != 0))
    goto switchD_0050a067_caseD_9;
    goto switchD_0050a0b8_caseD_0;
  default:
switchD_0050a067_caseD_2:
    pcVar3 = param_1;
    break;
  case 3:
    if ((*(byte *)(param_2 + 0x8e1) & 2) == 0) {
      iVar1 = ((uint)param_1 & 1) + 1;
    }
    else {
      iVar1 = (int)param_1 % 5;
    }
    switch(iVar1) {
    case 0:
      goto switchD_0050a0b8_caseD_0;
    case 1:
    case 2:
      goto switchD_0050a067_caseD_9;
    case 3:
      pcVar3 = s_dx_dt_005c2eb0;
      break;
    case 4:
      pcVar3 = s_dy_dt_005c2ea8;
      break;
    default:
      goto switchD_0050a067_caseD_2;
    }
    break;
  case 4:
    if ((*(byte *)(param_2 + 0x8e1) & 2) == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (int)param_1 % 3;
    }
    if (iVar1 != 0) {
      if (iVar1 == 1) goto switchD_0050a067_caseD_9;
      pcVar3 = &DAT_005c2ea0;
      if (iVar1 == 2) break;
      goto switchD_0050a067_caseD_2;
    }
switchD_0050a0b8_caseD_0:
    pcVar3 = s_dy_dx_005c2eb8;
    break;
  case 9:
  case 10:
  case 0xb:
    goto switchD_0050a067_caseD_9;
  }
  if (pcVar3 != (char *)0x0) {
    FUN_005232d0(1,1);
    FUN_00523470(pcVar3,0x15);
    return;
  }
switchD_0050a067_caseD_9:
  uVar2 = FUN_00509f80(param_1,param_2);
  FUN_00510380(param_2,uVar2);
  return;
}

