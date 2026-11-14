// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055d020
// entry: 0055d020  size: 187


undefined4 FUN_0055d020(int param_1)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = 0;
  DVar1 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  if (0 < DAT_005da9bc) {
    do {
      if (((&DAT_005da9c4)[iVar3 * 5] == DVar1) &&
         ((iVar2 = (&DAT_005da9cc)[iVar3 * 5], (&DAT_005da9cc)[iVar3 * 5] = iVar2 + -1,
          iVar2 + -1 == 0 || ((&DAT_005da9c0)[iVar3 * 5] == param_1)))) {
        UnhookWindowsHookEx((HHOOK)(&DAT_005da9c8)[iVar3 * 5]);
        DAT_005da9bc = DAT_005da9bc + -1;
        if (iVar3 < DAT_005da9bc) {
          puVar5 = &DAT_005da9c0 + iVar3 * 5;
          do {
            iVar3 = iVar3 + 1;
            puVar4 = puVar5 + 5;
            puVar6 = puVar5;
            for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = puVar5 + 5;
          } while (iVar3 < DAT_005da9bc);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_005da9bc);
  }
  DAT_005da964 = DAT_005da964 + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  if (DAT_005da964 == 0) {
    FUN_0055dc70();
  }
  return 1;
}

