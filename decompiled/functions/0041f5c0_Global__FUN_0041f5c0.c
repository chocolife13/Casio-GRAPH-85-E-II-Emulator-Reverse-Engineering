// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f5c0
// entry: 0041f5c0  size: 107


void FUN_0041f5c0(char *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = s_USBPower_005bdac8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _strncpy(param_1,s_USBPower_005bdac8,~uVar2 - 1);
  param_1[0x13] = (char)param_2;
  param_1[10] = '\x10';
  param_1[0x12] = (char)((uint)param_2 >> 8);
  param_1[0xb] = '\0';
  param_1[0x11] = (char)((uint)param_2 >> 0x10);
  param_1[0x10] = (char)((uint)param_2 >> 0x18);
  param_1[0x15] = -1;
  param_1[0x16] = -1;
  param_1[0x17] = -1;
  param_1[0x18] = -1;
  param_1[0x19] = -1;
  param_1[0x1a] = -1;
  param_1[0x1b] = -1;
  param_1[0x1c] = -1;
  param_1[0x1d] = -1;
  param_1[0x1e] = -1;
  param_1[0x1f] = -1;
  return;
}

