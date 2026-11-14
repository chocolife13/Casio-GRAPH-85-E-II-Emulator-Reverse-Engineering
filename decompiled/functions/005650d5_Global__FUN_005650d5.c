// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005650d5
// entry: 005650d5  size: 43


void FUN_005650d5(LPRECT param_1,int param_2)

{
  uint dwExStyle;
  DWORD dwStyle;
  BOOL bMenu;
  
  dwExStyle = FUN_005661f8();
  if (param_2 == 0) {
    dwExStyle = dwExStyle & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = FUN_005661de();
  AdjustWindowRectEx(param_1,dwStyle,bMenu,dwExStyle);
  return;
}

