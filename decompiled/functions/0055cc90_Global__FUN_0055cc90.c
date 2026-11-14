// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055cc90
// entry: 0055cc90  size: 26


void FUN_0055cc90(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}

