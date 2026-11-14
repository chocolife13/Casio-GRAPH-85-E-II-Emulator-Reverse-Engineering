// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00426b20
// entry: 00426b20  size: 432


void FUN_00426b20(int param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 local_88;
  undefined4 local_84;
  char local_80 [128];
  
  if ((param_4 == 0) && (*param_3 == 0x7545)) {
    uVar2 = 0xffffffff;
    pcVar5 = param_2;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    pcVar6 = local_80;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else {
    local_80[0] = '\0';
  }
  if (param_1 == 3) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x84;
  }
  FUN_005262e0(uVar7);
  local_88 = 0;
  local_84 = 0;
  iVar4 = param_1 + 2;
LAB_00426b9d:
  while (FUN_005252d0(local_80,local_88,local_84,0xb,iVar4,0x13), param_4 != 0) {
    local_84 = FUN_005254d0(local_80,8,local_84,*param_3);
    FUN_00527030();
    local_88 = FUN_005252d0(local_80,local_88,local_84,0xb,iVar4,0x13);
    param_4 = FUN_00526620(param_3);
  }
  switch(*param_3) {
  case 0x7532:
  case 0x754d:
    goto switchD_00426c1b_caseD_7532;
  case 0x7534:
    uVar2 = 0xffffffff;
    pcVar5 = local_80;
    break;
  case 0x753f:
  case 0x7544:
  case 0x7545:
  case 0x7549:
    FUN_00524a50(local_80,8,&local_88,&local_84,param_3,0xb,iVar4);
    FUN_00527030();
    local_88 = FUN_005252d0(local_80,local_88,local_84,0xb,iVar4,0x13);
  default:
    param_4 = FUN_00526620(param_3);
    goto LAB_00426b9d;
  }
  while( true ) {
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
  }
  uVar2 = ~uVar2;
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = param_2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  if (param_1 == 3) {
    iVar4 = FUN_0055401d(local_80);
    FUN_0055c2fe(iVar4 + 3U & 0xfffffffc,param_2,10);
  }
switchD_00426c1b_caseD_7532:
  FUN_00523740();
  return;
}

