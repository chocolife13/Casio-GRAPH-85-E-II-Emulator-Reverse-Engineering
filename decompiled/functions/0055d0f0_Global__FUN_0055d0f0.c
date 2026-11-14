// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055d0f0
// entry: 0055d0f0  size: 313


undefined4 FUN_0055d0f0(undefined4 param_1,uint param_2)

{
  DWORD dwThreadId;
  int iVar1;
  HHOOK pHVar2;
  DWORD *pDVar3;
  uint uVar4;
  
  if (DAT_005da980 < 0x30a) {
    return 0;
  }
  if (DAT_005da960 == 0) {
    return 0;
  }
  uVar4 = param_2 | 1;
  if ((param_2 & 2) != 0) {
    uVar4 = param_2 & 0xfffffffc;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  if (DAT_005da9bc != 0x80) {
    dwThreadId = GetCurrentThreadId();
    iVar1 = 0;
    if (0 < DAT_005da9bc) {
      pDVar3 = &DAT_005da9c4;
      do {
        if (*pDVar3 == dwThreadId) {
          (&DAT_005da9cc)[iVar1 * 5] = (&DAT_005da9cc)[iVar1 * 5] + 1;
          goto LAB_0055d1f6;
        }
        pDVar3 = pDVar3 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_005da9bc);
    }
    pHVar2 = SetWindowsHookExA(5,FUN_0055e250,DAT_005da97c,dwThreadId);
    if (pHVar2 != (HHOOK)0x0) {
      (&DAT_005da9c0)[DAT_005da9bc * 5] = param_1;
      (&DAT_005da9c4)[DAT_005da9bc * 5] = dwThreadId;
      (&DAT_005da9c8)[DAT_005da9bc * 5] = pHVar2;
      (&DAT_005da9cc)[DAT_005da9bc * 5] = 1;
      *(uint *)(&DAT_005da9d0 + DAT_005da9bc * 0x14) = uVar4;
      DAT_005da9b8 = DAT_005da9bc;
      DAT_005da9bc = DAT_005da9bc + 1;
      DAT_005da9b4 = dwThreadId;
LAB_0055d1f6:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
      return 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  return 0;
}

