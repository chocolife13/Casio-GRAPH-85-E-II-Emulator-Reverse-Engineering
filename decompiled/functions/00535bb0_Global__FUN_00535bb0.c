// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535bb0
// entry: 00535bb0  size: 155


char FUN_00535bb0(char *param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  short sVar4;
  
  uVar1 = DAT_005d5720;
  sVar4 = 0;
  if (*param_1 != '\x1b') {
    return '\0';
  }
  if (param_1[1] != '\x1a') {
    return '\0';
  }
  if (param_1 != (char *)0x0) {
    do {
      cVar2 = FUN_00532fb0(param_1);
      if (cVar2 == '\x03') {
        sVar4 = sVar4 + 1;
      }
      else if (cVar2 == '\x02') {
        sVar4 = sVar4 + -1;
        if (sVar4 == 0) break;
      }
      param_1 = (char *)FUN_004b7780(uVar1,param_1);
    } while (param_1 != (char *)0x0);
  }
  pcVar3 = (char *)FUN_004b7780(uVar1,param_1);
  if (*pcVar3 == '\x1d') {
    pcVar3 = (char *)FUN_004b7780(uVar1,pcVar3);
    cVar2 = *pcVar3;
    if ((cVar2 == '\x1f') && (cVar2 = pcVar3[-1], cVar2 == '_')) {
      return -0x45;
    }
  }
  else {
    cVar2 = ((*pcVar3 == '\x1b') - 1U & 0x45) + 0xbb;
  }
  return cVar2;
}

