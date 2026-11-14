// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055a828
// entry: 0055a828  size: 153


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055a828(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_005da918 == 0) {
    FUN_00556a1b();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_005d5454,0x104);
  _DAT_005d5374 = &DAT_005d5454;
  pcVar2 = &DAT_005d5454;
  if (*DAT_005da908 != '\0') {
    pcVar2 = DAT_005da908;
  }
  FUN_0055a8c1(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_0055a8c1(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  DAT_005d535c = pvVar1;
  DAT_005d5358 = local_8 + -1;
  return;
}

