// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00537aa0
// entry: 00537aa0  size: 473


undefined4 FUN_00537aa0(char *param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char *pcVar9;
  char local_34 [52];
  
  sVar2 = FUN_004e4000(param_2);
  FUN_00496c70(param_2,local_34);
  pcVar3 = _strchr(local_34,0xbb);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = local_34;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *param_1 = cVar1;
      if (cVar1 != '\r') {
        param_1 = param_1 + 1;
      }
    } while (param_1[-1] != '\0');
    return 0;
  }
  pcVar3 = local_34;
  cVar1 = FUN_004b6ca0(local_34);
  pcVar9 = param_1;
  if (local_34[0] == -0x79) {
    *param_1 = -0x79;
    pcVar9 = param_1 + 1;
    cVar1 = cVar1 + -1;
    pcVar3 = local_34 + 1;
  }
  pcVar4 = (char *)FUN_004b6f30(pcVar3,0x7f54);
  cVar8 = (char)pcVar3;
  if (pcVar4 != (char *)0x0) {
    FUN_005378d0(pcVar9,pcVar3,(char)pcVar4 - cVar8);
    iVar5 = FUN_004b6ca0(pcVar9);
    pcVar9 = pcVar9 + iVar5;
    *pcVar9 = *pcVar4;
    pcVar9[1] = pcVar4[1];
    FUN_005378d0(pcVar9 + 2,pcVar4 + 2,
                 CONCAT31((int3)((uint)pcVar3 >> 8),(cVar8 - (char)(pcVar4 + 2)) + cVar1));
    return 1;
  }
  if (sVar2 == 0) {
    FUN_005378d0(pcVar9,pcVar3,cVar1);
    return 1;
  }
  param_1 = _strchr(pcVar3,0x2d);
  if (param_1 == (char *)0x0) {
    param_1 = _strchr(pcVar3,0x2b);
    if (param_1 == (char *)0x0) goto LAB_00537c25;
    pcVar4 = _strchr(pcVar3,0xf);
    if (pcVar4 != (char *)0x0) {
      if (param_1 == pcVar4 + 1) {
        param_1 = _strchr(param_1 + 1,0x2b);
      }
      if (param_1 == (char *)0x0) goto LAB_00537c25;
    }
  }
  FUN_005378d0(pcVar9,pcVar3,(char)param_1 - cVar8);
  iVar5 = FUN_004b6ca0(pcVar9);
  pcVar4 = pcVar9 + iVar5;
  pcVar9 = pcVar4 + 1;
  pcVar3 = param_1 + 1;
  *pcVar4 = *param_1;
  *pcVar9 = '\0';
LAB_00537c25:
  cVar1 = cVar1 + (cVar8 - (char)pcVar3) + -2;
  if (cVar1 != '\0') {
    FUN_005378d0(pcVar9,pcVar3,cVar1);
  }
  uVar6 = 0xffffffff;
  pcVar3 = &DAT_005c4244;
  do {
    pcVar4 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  do {
    pcVar3 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar3 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar3;
  } while (cVar1 != '\0');
  pcVar9 = pcVar4 + -uVar6;
  pcVar3 = pcVar3 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar3 = pcVar3 + 1;
  }
  return 1;
}

