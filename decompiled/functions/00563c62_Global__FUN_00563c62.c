// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00563c62
// entry: 00563c62  size: 77


BOOL __fastcall FUN_00563c62(CWnd *param_1)

{
  int iVar1;
  BOOL BVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  FUN_005633c1(0);
  iVar1 = FUN_005621d5(*(undefined4 *)(param_1 + 0x1c));
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    BVar2 = DestroyWindow(*(HWND *)(param_1 + 0x1c));
  }
  else {
    BVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x50))();
  }
  if (iVar1 == 0) {
    CWnd::Detach(param_1);
  }
  return BVar2;
}

