// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055dc70
// entry: 0055dc70  size: 213


void FUN_0055dc70(void)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  piVar1 = &DAT_005db3c0;
  do {
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 6;
  } while (piVar1 < &DAT_005db450);
  FUN_0055ccb0();
  if (DAT_005da968 != 0) {
    GlobalDeleteAtom(DAT_005da968);
  }
  if (DAT_005da96e != 0) {
    GlobalDeleteAtom(DAT_005da96e);
  }
  if (DAT_005da96c != 0) {
    GlobalDeleteAtom(DAT_005da96c);
  }
  if (DAT_005da96a != 0) {
    GlobalDeleteAtom(DAT_005da96a);
  }
  if (DAT_005da972 != 0) {
    GlobalDeleteAtom(DAT_005da972);
  }
  if (DAT_005da970 != 0) {
    GlobalDeleteAtom(DAT_005da970);
  }
  if (DAT_005da974 != 0) {
    GlobalDeleteAtom(DAT_005da974);
  }
  DAT_005da960 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  return;
}

