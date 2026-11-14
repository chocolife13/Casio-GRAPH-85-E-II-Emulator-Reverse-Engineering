// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b36c0
// entry: 004b36c0  size: 619


undefined4
FUN_004b36c0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  char local_82 [6];
  char local_7c [4];
  char local_78 [12];
  char local_6c [12];
  char local_60 [12];
  int local_54 [7];
  int local_38 [7];
  int local_1c [7];
  
  local_82[2] = 0xe5;
  local_7c[0] = -0x1b;
  local_82[0] = -100;
  local_82[1] = 0;
  local_82[3] = 0x96;
  local_82[4] = 0;
  local_7c[1] = 0x98;
  local_7c[2] = 0;
  iVar2 = FUN_004b45a0(local_1c,param_2);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  iVar2 = FUN_004b45a0(local_54,param_3);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  iVar2 = FUN_004b45a0(local_38,param_4);
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  if (local_1c[0] + 1 < 5) {
    uVar5 = 2;
  }
  else {
    uVar5 = (uint)(local_1c[0] + 1 == 5);
  }
  iVar2 = FUN_004b4710(local_60,local_1c,7,1);
  *param_5 = iVar2;
  if (local_54[0] == 1) {
    uVar8 = 2;
    pcVar3 = local_78;
  }
  else {
    uVar8 = 1;
    local_78[0] = DAT_00586f74;
    pcVar3 = local_78 + 1;
  }
  iVar2 = FUN_004b4710(pcVar3,local_54,uVar8,1);
  if (*param_5 == 0) {
    *param_5 = iVar2;
  }
  if (local_38[0] == 1) {
    iVar2 = uVar5 + 2;
    pcVar3 = local_6c;
  }
  else {
    iVar2 = local_38[0] + 1 + uVar5;
    local_6c[0] = DAT_00586f74;
    if (iVar2 < 4) {
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 3;
    }
    pcVar3 = local_6c + 1;
  }
  iVar2 = FUN_004b4710(pcVar3,local_38,iVar2,1);
  if (*param_5 == 0) {
    *param_5 = iVar2;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_60;
  do {
    pcVar6 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  *param_1 = '\0';
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar6 + -uVar5;
  pcVar6 = pcVar7 + -1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_82;
  do {
    pcVar6 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar6 + -uVar5;
  pcVar6 = pcVar7 + -1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_78;
  do {
    pcVar6 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar6 + -uVar5;
  pcVar6 = pcVar7 + -1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_82 + 2;
  do {
    pcVar6 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar6 + -uVar5;
  pcVar6 = pcVar7 + -1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_6c;
  do {
    pcVar6 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar6 + -uVar5;
  pcVar6 = pcVar7 + -1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_7c;
  do {
    pcVar6 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar6 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar6;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar2 = -1;
  do {
    pcVar3 = param_1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar5;
  pcVar3 = pcVar3 + -1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar3 = pcVar3 + 1;
  }
  return 0;
}

