// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056218a
// entry: 0056218a  size: 25


void __thiscall FUN_0056218a(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  piVar1 = (int *)(param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)(param_1 + 0x10) = param_2;
  if (*piVar1 == 0) {
    RemoveAll();
  }
  return;
}

