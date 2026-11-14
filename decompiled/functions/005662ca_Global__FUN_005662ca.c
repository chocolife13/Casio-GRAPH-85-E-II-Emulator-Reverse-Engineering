// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005662ca
// entry: 005662ca  size: 41


void __thiscall FUN_005662ca(int param_1,LONG param_2)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    SetWindowLongA(*(HWND *)(param_1 + 0x1c),-0xc,param_2);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x94))(param_2);
  }
  return;
}

