// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00573846
// entry: 00573846  size: 80


void __thiscall FUN_00573846(CFrameWnd *param_1,int param_2)

{
  BOOL BVar1;
  
  if (param_2 == -1) {
    BVar1 = IsWindowVisible(*(HWND *)(param_1 + 0x1c));
    if (BVar1 == 0) {
      param_2 = 1;
    }
    else {
      BVar1 = IsIconic(*(HWND *)(param_1 + 0x1c));
      if (BVar1 != 0) {
        param_2 = 9;
      }
    }
  }
  CFrameWnd::BringToTop(param_1,param_2);
  if (param_2 != -1) {
    FUN_00566342(param_2);
    CFrameWnd::BringToTop(param_1,param_2);
  }
  return;
}

