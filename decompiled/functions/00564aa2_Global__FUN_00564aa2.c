// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00564aa2
// entry: 00564aa2  size: 52


bool FUN_00564aa2(void)

{
  HWND pHVar1;
  int iVar2;
  int iVar3;
  
  pHVar1 = GetForegroundWindow();
  iVar2 = FUN_00563433(pHVar1);
  iVar3 = FUN_00564a36();
  pHVar1 = GetLastActivePopup(*(HWND *)(iVar3 + 0x1c));
  iVar3 = FUN_00563433(pHVar1);
  return iVar2 == iVar3;
}

