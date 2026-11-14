// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c6af
// entry: 0056c6af  size: 91


void FUN_0056c6af(void)

{
  HMENU hMenu;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  hMenu = *(HMENU *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (hMenu != (HMENU)0x0) {
    DestroyMenu(hMenu);
  }
  if (*(HMENU *)(extraout_ECX + 0x2c) != (HMENU)0x0) {
    DestroyMenu(*(HMENU *)(extraout_ECX + 0x2c));
  }
  if (*(HMENU *)(extraout_ECX + 0x34) != (HMENU)0x0) {
    DestroyMenu(*(HMENU *)(extraout_ECX + 0x34));
  }
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00566423();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

