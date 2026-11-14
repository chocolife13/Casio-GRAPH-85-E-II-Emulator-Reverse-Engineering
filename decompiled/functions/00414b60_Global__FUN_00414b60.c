// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414b60
// entry: 00414b60  size: 170


void FUN_00414b60(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char local_20 [32];
  
  local_38 = *param_1;
  local_34 = param_1[1];
  local_30 = param_1[2];
  FUN_004b26b0(&local_38,local_20);
  iVar2 = -1;
  uVar4 = 0;
  pcVar5 = local_20;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    do {
      switch(local_20[uVar4]) {
      case '\x0f':
      case -0x44:
        local_20[uVar4] = 'E';
        break;
      case '.':
        local_20[uVar4] = '.';
        break;
      case -0x79:
      case -0x46:
        local_20[uVar4] = '-';
        break;
      case -0x77:
        local_20[uVar4] = '+';
        break;
      case -0x45:
        local_20[uVar4] = 'a';
      }
      uVar3 = 0xffffffff;
      uVar4 = uVar4 + 1;
      pcVar5 = local_20;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    } while (uVar4 < ~uVar3 - 1);
  }
  FUN_004b6e70(param_2,local_20);
  return;
}

