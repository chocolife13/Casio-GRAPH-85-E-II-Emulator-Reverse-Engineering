// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055cfb0
// entry: 0055cfb0  size: 101


undefined4 FUN_0055cfb0(undefined4 param_1)

{
  int iVar1;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  DAT_005da964 = DAT_005da964 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_005da940);
  if (DAT_005da964 == 1) {
    FUN_0055feb0(param_1,1,0);
    FUN_0055da80();
  }
  iVar1 = FUN_0055d230();
  if (iVar1 != 0) {
    FUN_0055d0e0(param_1);
  }
  return DAT_005da960;
}

