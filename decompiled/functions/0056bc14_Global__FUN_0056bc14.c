// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056bc14
// entry: 0056bc14  size: 47


void __fastcall FUN_0056bc14(int param_1)

{
  CFrameWnd *this;
  int iVar1;
  
  this = (CFrameWnd *)FUN_005649b3();
  if (this != (CFrameWnd *)0x0) {
    iVar1 = FUN_005729b9();
    if (iVar1 == param_1) {
      CFrameWnd::SetActiveView(this,(CView *)0x0,1);
    }
  }
  FUN_00563b21();
  return;
}

