// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00431b90
// entry: 00431b90  size: 184


void FUN_00431b90(undefined4 *param_1)

{
  char *pcVar1;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005234d0(&local_10);
  FUN_005232d0(1,1);
  switch(*param_1) {
  case 0:
    pcVar1 = s__Dec__005be954;
    break;
  case 1:
    pcVar1 = s__Hex__005be94c;
    break;
  case 2:
    pcVar1 = s__Bin__005be944;
    break;
  case 3:
    pcVar1 = s__Oct__005be93c;
    break;
  default:
    goto switchD_00431bb5_default;
  }
  FUN_005233e0(pcVar1);
switchD_00431bb5_default:
  FUN_005232d0(1,2);
  switch(param_1[1]) {
  case 0:
    pcVar1 = s__________Dec__________005be924;
    break;
  case 1:
    pcVar1 = s__________Hex__________005be90c;
    break;
  case 2:
    pcVar1 = s__________Bin__________005be8f4;
    break;
  case 3:
    pcVar1 = s__________Oct__________005be8dc;
    break;
  default:
    goto switchD_00431bf3_default;
  }
  FUN_00523470(pcVar1,0x15);
switchD_00431bf3_default:
  FUN_005232d0(local_c,local_8);
  if (local_10 == -1) {
    FUN_00523740();
  }
  return;
}

