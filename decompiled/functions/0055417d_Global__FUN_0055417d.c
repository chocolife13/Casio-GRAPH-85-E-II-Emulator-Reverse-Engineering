// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055417d
// entry: 0055417d  size: 163


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055417d(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_00554222();
  if (DAT_005d5384 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_005d5380 = 1;
  DAT_005d537c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_005da920 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_005da91c - 4), DAT_005da920 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_005da920 <= puVar1);
    }
    FUN_00554234(&DAT_005a4098,&DAT_005a40a0);
  }
  FUN_00554234(&DAT_005a40a4,&DAT_005a40ac);
  if (param_3 == 0) {
    DAT_005d5384 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_0055422b();
  return;
}

