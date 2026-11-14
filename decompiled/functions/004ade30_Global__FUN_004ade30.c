// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ade30
// entry: 004ade30  size: 122


undefined4 FUN_004ade30(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char local_4a0 [8];
  char local_498 [1176];
  
  FUN_004adc60(local_4a0,param_1);
  if (local_4a0[0] != '\0') {
    pcVar3 = local_4a0;
    do {
      iVar2 = FUN_004adde0(pcVar3);
      if (iVar2 != 0) {
        return 0x17;
      }
      iVar2 = FUN_004104e0(pcVar3);
      if ((iVar2 != 0) && (iVar2 != 0x46)) {
        return 0x17;
      }
      pcVar1 = pcVar3 + 8;
      pcVar3 = pcVar3 + 8;
    } while (*pcVar1 != '\0');
  }
  FUN_004add50(0);
  return 0;
}

