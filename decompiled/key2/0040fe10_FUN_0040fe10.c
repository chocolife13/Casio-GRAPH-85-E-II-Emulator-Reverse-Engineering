// decompiled from GRAPH85emulator.exe
// function: FUN_0040fe10 @ 0040fe10


void __thiscall FUN_0040fe10(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar1 = FUN_0040ad00();
    if (iVar1 == 2) {
      (**(code **)*param_2)(1);
      return;
    }
  }
  (**(code **)*param_2)(0);
  return;
}

