// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057576d
// entry: 0057576d  size: 54


undefined4 __fastcall FUN_0057576d(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xac) == 0) || (*(int *)(*(int *)(param_1 + 0xac) + 0x10) != 5)) {
    iVar1 = FUN_0057497f();
    if (*(char *)(iVar1 + 0x14) == '\0') {
      FUN_0057573d();
    }
  }
  if (*(code **)(param_1 + 0xbc) != (code *)0x0) {
    (**(code **)(param_1 + 0xbc))();
  }
  return *(undefined4 *)(param_1 + 0x38);
}

