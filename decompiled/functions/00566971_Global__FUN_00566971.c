// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00566971
// entry: 00566971  size: 34


void __fastcall FUN_00566971(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0057391f();
    if (iVar1 != 0) {
      AfxPostQuitMessage(0);
    }
  }
  FUN_00566be1();
  return;
}

