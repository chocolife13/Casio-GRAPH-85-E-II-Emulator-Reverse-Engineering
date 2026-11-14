// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00536cf0
// entry: 00536cf0  size: 175


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_00536cf0(char param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar1 = DAT_005d5724;
  pcVar6 = (char *)((_DAT_005d5728 & 0xffff) + DAT_005d5724);
  if (param_1 == '\0') {
    pcVar4 = (char *)FUN_004b7780(DAT_005d5724);
  }
  else {
    pcVar4 = (char *)FUN_004b7840(pcVar6);
  }
  cVar2 = FUN_00536cb0(*pcVar4);
  while (cVar2 != '\0') {
    if (param_1 == '\0') {
      pcVar6 = (char *)FUN_004b7780(iVar1,pcVar4);
    }
    uVar3 = FUN_00532fb0(pcVar4);
    cVar2 = FUN_00532a70(uVar3);
    if (((cVar2 != '\0') && (*pcVar6 != -0x28)) && (*pcVar6 != -0x4c)) break;
    pcVar5 = pcVar6;
    if (param_1 != '\0') {
      pcVar5 = (char *)FUN_004b7840(pcVar4);
      pcVar6 = pcVar4;
    }
    pcVar4 = pcVar5;
    cVar2 = FUN_00536cb0(*pcVar4);
  }
  _DAT_005d5728 = CONCAT22(_DAT_005d572a,(short)pcVar4 - (short)iVar1);
  return pcVar4;
}

