// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051e3f0
// entry: 0051e3f0  size: 98


undefined4 FUN_0051e3f0(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((((*(byte *)(param_1 + 0x8e2) & 0x80) != 0) || (param_2 == 0x15a)) || (param_2 == 0x169)) {
    return 0;
  }
  pcVar3 = *(char **)(param_1 + 0x8dc);
  if (pcVar3[0x1c] != '\0') {
    pcVar2 = pcVar3 + 0x1d;
    do {
      if ((*(uint *)(pcVar3 + 0x18) & 0x100) == 0) {
        return 0;
      }
      if ((*(uint *)(pcVar2 + -5) & 0x800) != 0) {
        return 0;
      }
      if (*pcVar2 == '\f') {
        return 0;
      }
      pcVar1 = pcVar2 + 0x1f;
      pcVar3 = pcVar2 + 3;
      pcVar2 = pcVar2 + 0x20;
    } while (*pcVar1 != '\0');
  }
  return 1;
}

