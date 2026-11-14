// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005378d0
// entry: 005378d0  size: 454


void FUN_005378d0(char *param_1,char *param_2,byte param_3)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  uint local_4;
  
  pcVar1 = _strchr(param_2,0xbb);
  if ((pcVar1 == (char *)0x0) || ((int)(uint)param_3 < (int)pcVar1 - (int)param_2)) {
    bVar3 = 0;
    local_4 = 0;
    do {
      pcVar1 = param_1;
      bVar3 = bVar3 + 1;
      *pcVar1 = param_2[local_4];
      local_4 = (uint)bVar3;
      param_1 = pcVar1 + 1;
    } while (bVar3 < param_3);
    pcVar6 = pcVar1 + 1;
    if (*pcVar1 == '\r') {
      pcVar6 = pcVar1;
    }
    *pcVar6 = '\0';
    return;
  }
  bVar3 = (char)pcVar1 - (char)param_2;
  pcVar1 = _strchr(pcVar1 + 1,0xbb);
  if ((pcVar1 == (char *)0x0) || ((int)(uint)param_3 < (int)pcVar1 - (int)param_2)) {
    *param_1 = -0x45;
    param_1[1] = '\x1d';
    param_1[2] = '\x1a';
    local_4 = 0;
    pcVar1 = param_1 + 3;
    bVar4 = 0;
    do {
      bVar5 = bVar4;
      pcVar6 = pcVar1;
      bVar4 = bVar5 + 1;
      pcVar1 = param_2 + local_4;
      local_4 = (uint)bVar4;
      *pcVar6 = *pcVar1;
      pcVar1 = pcVar6 + 1;
    } while (bVar4 < bVar3);
    pcVar6[1] = '\x1b';
    pcVar6[2] = '\x1a';
    bVar5 = bVar5 + 2;
    pcVar1 = pcVar6 + 3;
    do {
      pcVar6 = pcVar1;
      local_4 = (uint)bVar5;
      pcVar1 = pcVar6 + 1;
      bVar5 = bVar5 + 1;
      *pcVar6 = param_2[local_4];
    } while (bVar5 < param_3);
    if (*pcVar6 == '\r') {
      *pcVar6 = '\x1b';
      *pcVar1 = '\x1e';
      pcVar6[2] = '\0';
      return;
    }
  }
  else {
    builtin_strncpy(param_1,"\x7f_\x1f\x1d\x1a",5);
    local_4 = 0;
    pcVar6 = param_1 + 5;
    bVar4 = 0;
    do {
      bVar5 = bVar4;
      pcVar2 = pcVar6;
      bVar4 = bVar5 + 1;
      pcVar6 = param_2 + local_4;
      local_4 = (uint)bVar4;
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar2 + 1;
    } while (bVar4 < bVar3);
    pcVar2[1] = '\x1b';
    pcVar2[2] = '\x1a';
    pcVar6 = pcVar2 + 3;
    bVar3 = bVar5 + 2;
    do {
      bVar4 = bVar3;
      pcVar2 = pcVar6;
      local_4 = (uint)bVar4;
      *pcVar2 = param_2[local_4];
      pcVar6 = pcVar2 + 1;
      bVar3 = bVar4 + 1;
    } while ((byte)(bVar4 + 1) < (byte)((char)pcVar1 - (char)param_2));
    pcVar2[1] = '\x1b';
    pcVar2[2] = '\x1a';
    bVar4 = bVar4 + 2;
    pcVar1 = pcVar2 + 3;
    do {
      pcVar6 = pcVar1;
      local_4 = (uint)bVar4;
      bVar4 = bVar4 + 1;
      *pcVar6 = param_2[local_4];
      pcVar1 = pcVar6 + 1;
    } while (bVar4 < param_3);
    if (*pcVar6 == '\r') {
      pcVar1 = pcVar6;
    }
  }
  *pcVar1 = '\x1b';
  pcVar1[1] = '\x1e';
  pcVar1[2] = '\0';
  return;
}

