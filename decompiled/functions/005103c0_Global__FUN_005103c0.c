// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005103c0
// entry: 005103c0  size: 593


void FUN_005103c0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_14c;
  undefined4 local_148;
  char local_100 [256];
  
  param_2 = param_2 * 0x20;
  iVar2 = param_2 + *(int *)(param_1 + 0x8dc);
  switch(*(undefined1 *)(param_2 + 0x1d + *(int *)(param_1 + 0x8dc))) {
  case 0:
    goto switchD_005103f0_caseD_0;
  case 1:
  case 5:
    local_14c = CONCAT22(local_14c._2_2_,DAT_005beb28);
    break;
  case 2:
  case 6:
    local_14c = CONCAT22(local_14c._2_2_,DAT_005be980);
    break;
  case 3:
  case 7:
    local_14c = CONCAT22(local_14c._2_2_,DAT_005beb24);
    break;
  case 4:
  case 8:
    local_14c = CONCAT22(local_14c._2_2_,DAT_005a8d20);
    break;
  case 9:
    local_14c = DAT_005beb58;
    goto LAB_0051048c;
  case 10:
    local_14c = DAT_005c2f08;
    local_148 = DAT_005c2f0c;
    goto LAB_00510488;
  case 0xb:
    local_14c = DAT_005c2f00;
    local_148 = DAT_005c2f04;
LAB_00510488:
LAB_0051048c:
    local_14c = CONCAT31(local_14c._1_3_,(char)local_14c + *(char *)(iVar2 + 8) + -1);
    break;
  case 0xc:
    FUN_0050baa0(*(undefined4 *)(iVar2 + 8),1,0);
    return;
  case 0xd:
    FUN_00523470(*(undefined4 *)(iVar2 + 0x10),0x15);
    return;
  }
  if (('\0' < *(char *)(iVar2 + 0x1d)) && (*(char *)(iVar2 + 0x1d) < '\x05')) {
    uVar3 = 0xffffffff;
    pcVar8 = (char *)&local_14c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_0055c2fe(*(undefined4 *)(iVar2 + 8),&stack0xfffffeb3 + ~uVar3,10);
  }
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x8dc) + param_2);
  if ((puVar5[6] & 0x80) == 0) {
    pcVar8 = &DAT_005be9e0;
    goto LAB_00510524;
  }
  switch(puVar5[6] & 0x30) {
  case 0:
    pcVar8 = &DAT_005be9f0;
    break;
  case 0x10:
    pcVar8 = (char *)&DAT_005be9ec;
    break;
  case 0x20:
    pcVar8 = &DAT_005be9e4;
    break;
  case 0x30:
    pcVar8 = &DAT_005be9e8;
    break;
  default:
    goto switchD_005104e8_default;
  }
LAB_00510524:
  uVar3 = 0xffffffff;
  do {
    pcVar6 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  pcVar8 = (char *)&local_14c;
  do {
    pcVar7 = pcVar8;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar7;
  } while (cVar1 != '\0');
  pcVar8 = pcVar6 + -uVar3;
  pcVar6 = pcVar7 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar6 = pcVar6 + 1;
  }
switchD_005104e8_default:
  switch(*(undefined1 *)((int)puVar5 + 0x1d)) {
  case 1:
  case 2:
  case 3:
  case 4:
    FUN_00517360(puVar5[2],local_100);
    break;
  default:
    pcVar6 = (char *)*puVar5;
    pcVar8 = local_100;
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
      iVar2 = FUN_004b7370(cVar1);
      if (iVar2 != 0) {
        *pcVar8 = *pcVar6;
        pcVar8 = pcVar8 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *pcVar8 = *pcVar6;
      pcVar7 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar7;
    }
    *pcVar8 = '\0';
    break;
  case 9:
  case 10:
  case 0xb:
    FUN_00518520(puVar5[2],local_100);
  }
  iVar2 = FUN_004b6bd0(&local_14c);
  iVar2 = FUN_004b6ca0(&local_14c,0x15 - iVar2);
  FUN_004b7b40(local_100,(int)&local_14c + iVar2);
  FUN_005232d0(1,param_3);
  FUN_00523470(&local_14c,0x15);
switchD_005103f0_caseD_0:
  return;
}

