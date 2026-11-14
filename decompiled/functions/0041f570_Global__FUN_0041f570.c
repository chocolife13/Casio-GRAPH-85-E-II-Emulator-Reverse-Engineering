// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f570
// entry: 0041f570  size: 76


void FUN_0041f570(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar4[0] = -1;
    pcVar4[1] = -1;
    pcVar4[2] = -1;
    pcVar4[3] = -1;
    pcVar4 = pcVar4 + 4;
  }
  uVar3 = 0xffffffff;
  pcVar4 = s_USBPower_005bdac8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _strncpy(param_1,s_USBPower_005bdac8,~uVar3 - 1);
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[0xc] = '\x10';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\x01';
  param_1[0x14] = '\0';
  return;
}

