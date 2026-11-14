// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005663cc
// entry: 005663cc  size: 61


void __fastcall FUN_005663cc(int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
    iVar2 = FUN_005621d5(pHVar1);
    if ((iVar2 != 0) && (*(int **)(iVar2 + 0x34) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar2 + 0x34) + 0x8c))(param_1);
    }
  }
  return;
}

