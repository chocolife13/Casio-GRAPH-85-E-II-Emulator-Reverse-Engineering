// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055a76f
// entry: 0055a76f  size: 185


void FUN_0055a76f(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  if (DAT_005da918 == 0) {
    FUN_00556a1b();
  }
  iVar5 = 0;
  for (pcVar6 = DAT_005d5388; *pcVar6 != '\0'; pcVar6 = pcVar6 + sVar2 + 1) {
    if (*pcVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen(pcVar6);
  }
  puVar3 = (undefined4 *)_malloc(iVar5 * 4 + 4);
  DAT_005d5364 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_005d5388;
  pcVar6 = DAT_005d5388;
  while (cVar1 != '\0') {
    sVar2 = _strlen(pcVar6);
    if (*pcVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_0055a500(*puVar3,pcVar6);
      puVar3 = puVar3 + 1;
    }
    pcVar6 = pcVar6 + sVar2 + 1;
    cVar1 = *pcVar6;
  }
  FUN_00553b50(DAT_005d5388);
  DAT_005d5388 = (char *)0x0;
  *puVar3 = 0;
  DAT_005da914 = 1;
  return;
}

