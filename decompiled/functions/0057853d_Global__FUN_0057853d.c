// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057853d
// entry: 0057853d  size: 63


void __fastcall FUN_0057853d(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xf8);
  *piVar1 = 3 - *(int *)(param_1 + 0xf8);
  iVar2 = FUN_0057497f();
  *(int *)(*(int *)(iVar2 + 4) + 0xb4) = *piVar1;
  *(int *)(param_1 + 0xe8) = *piVar1;
  FUN_00578891(*(undefined4 *)(param_1 + 0xf4),1);
  return;
}

