// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00568cf7
// entry: 00568cf7  size: 32


void __fastcall FUN_00568cf7(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  FUN_00567323();
  return;
}

