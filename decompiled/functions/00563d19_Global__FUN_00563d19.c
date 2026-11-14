// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00563d19
// entry: 00563d19  size: 87


void FUN_00563d19(int param_1)

{
  HWND hWnd;
  int *piVar1;
  SHORT SVar2;
  int iVar3;
  
  iVar3 = FUN_00574748();
  if ((*(int *)(iVar3 + 0xcc) != 0) &&
     (hWnd = *(HWND *)(*(int *)(iVar3 + 0xcc) + 0x1c), hWnd != (HWND)0x0)) {
    SendMessageA(hWnd,0x401,0,0);
  }
  piVar1 = *(int **)(iVar3 + 0x108);
  if ((param_1 != 0) && (piVar1 != (int *)0x0)) {
    SVar2 = GetKeyState(1);
    if (-1 < SVar2) {
      (**(code **)(*piVar1 + 0xdc))(0xffffffff);
    }
  }
  return;
}

