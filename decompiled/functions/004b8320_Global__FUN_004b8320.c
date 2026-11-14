// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b8320
// entry: 004b8320  size: 280


int FUN_004b8320(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint local_118;
  char local_114 [4];
  char local_110 [2];
  char local_10e;
  undefined1 local_10c [11];
  char local_101;
  char local_100 [256];
  
  local_114 = (char  [4])s_REPLAY_005bdc50._0_4_;
  local_110 = (char  [2])s_REPLAY_005bdc50._4_2_;
  local_10e = s_REPLAY_005bdc50[6];
  FUN_004ab670(local_10c);
  cVar1 = FUN_004aceb0(local_10c,local_114,1);
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_004ad350(local_10c,local_114,&local_118);
  if (cVar1 != '\0') {
    return 0;
  }
  if (local_118 == 0) {
    return 0;
  }
  pcVar5 = local_100;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  cVar1 = FUN_004ad3f0(0,local_118,local_100);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar4 = 0;
  iVar3 = 0;
  pcVar5 = local_100;
  if (local_118 != 0) {
    pcVar6 = &local_101;
    do {
      iVar2 = FUN_004b7370(*pcVar5);
      if (iVar2 == 0) {
        if (*pcVar5 == '\0') {
          if (*pcVar6 == '\0') {
            iVar2 = FUN_004b73a0(pcVar6);
            if (iVar2 == 0) goto LAB_004b8418;
          }
          iVar3 = iVar3 + 1;
        }
      }
      else {
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
LAB_004b8418:
      uVar4 = uVar4 + 1;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while ((uVar4 & 0xffff) < local_118);
  }
  return iVar3;
}

