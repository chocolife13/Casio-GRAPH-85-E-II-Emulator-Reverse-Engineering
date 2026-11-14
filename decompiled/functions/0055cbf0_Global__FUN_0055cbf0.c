// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055cbf0
// entry: 0055cbf0  size: 52


void FUN_0055cbf0(undefined4 param_1,undefined4 param_2)

{
  DWORD dwThreadId;
  
  DAT_005d5700 = param_2;
  DAT_005d56f8 = param_1;
  dwThreadId = GetCurrentThreadId();
  DAT_005d56fc = SetWindowsHookExA(4,(HOOKPROC)&LAB_0055cb40,DAT_005da97c,dwThreadId);
  return;
}

