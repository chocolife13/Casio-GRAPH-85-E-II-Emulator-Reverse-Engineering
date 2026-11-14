// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567a0d
// entry: 00567a0d  size: 22


BOOL __fastcall FUN_00567a0d(int param_1)

{
  HMENU hMenu;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  hMenu = (HMENU)Detach();
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}

