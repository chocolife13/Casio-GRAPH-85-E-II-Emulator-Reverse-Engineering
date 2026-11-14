// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005723d5
// entry: 005723d5  size: 83


void __fastcall FUN_005723d5(int param_1)

{
  HMENU hMenu;
  HMENU pHVar1;
  int iVar2;
  
  FUN_00572f91();
  if (*(int *)(param_1 + 0x44) != 0) {
    hMenu = *(HMENU *)(param_1 + 0x44);
    pHVar1 = GetMenu(*(HWND *)(param_1 + 0x1c));
    if (pHVar1 != hMenu) {
      SetMenu(*(HWND *)(param_1 + 0x1c),hMenu);
    }
  }
  iVar2 = FUN_0057497f();
  if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(*(int *)(iVar2 + 4) + 0x1c) == param_1)) {
    WinHelpA(*(HWND *)(param_1 + 0x1c),(LPCSTR)0x0,2,0);
  }
  FUN_00563b21();
  return;
}

