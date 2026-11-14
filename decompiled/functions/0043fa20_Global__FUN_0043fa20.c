// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043fa20
// entry: 0043fa20  size: 105


uint FUN_0043fa20(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = 0;
  pcVar2 = (char *)FUN_00518580(param_1);
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      pcVar3 = pcVar2 + 1;
      if (cVar1 == '\x7f') {
        cVar1 = *pcVar3;
        pcVar3 = pcVar2 + 2;
        if ((cVar1 == -0x60) || (cVar1 == -0x5f)) {
          uVar4 = uVar4 | 1;
        }
        else if ((cVar1 == -0x59) || (cVar1 == -0x58)) {
          uVar4 = uVar4 | 2;
        }
      }
      else if (cVar1 == -9) {
        pcVar3 = pcVar2 + 2;
      }
      else if (cVar1 == -7) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar2 + 2;
        if ((cVar1 == '\x12') || (cVar1 == '\x13')) {
          uVar4 = uVar4 | 4;
        }
      }
      pcVar2 = pcVar3;
      cVar1 = *pcVar3;
    }
  }
  return uVar4;
}

