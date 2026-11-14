// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ab30
// entry: 0056ab30  size: 33


void __fastcall FUN_0056ab30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  while (iVar1 != 0) {
    iVar1 = FUN_00561de9();
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    iVar1 = *(int *)(param_1 + 0x34);
  }
  return;
}

