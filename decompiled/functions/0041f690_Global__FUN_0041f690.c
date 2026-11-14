// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f690
// entry: 0041f690  size: 42


bool FUN_0041f690(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = s_USBPower_005bdac8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = _strncmp(param_1,s_USBPower_005bdac8,~uVar3 - 1);
  return iVar2 == 0;
}

