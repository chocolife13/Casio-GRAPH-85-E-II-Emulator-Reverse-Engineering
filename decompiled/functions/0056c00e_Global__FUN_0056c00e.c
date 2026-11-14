// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c00e
// entry: 0056c00e  size: 163


void __thiscall
FUN_0056c00e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6)

{
  CFrameWnd *this;
  CFrameWnd *pCVar1;
  
  if ((int *)param_6[0x1c] != (int *)0x0) {
    (**(code **)(*(int *)param_6[0x1c] + 0x100))(param_2,param_3);
  }
  this = (CFrameWnd *)FUN_00552b70();
  (**(code **)(*(int *)this + 0xd0))(0,param_6[0x22]);
  CFrameWnd::SetActiveView(this,*(CView **)(param_6[0x22] + 0xc),1);
  pCVar1 = (CFrameWnd *)FUN_005649b3();
  if (this != pCVar1) {
    (**(code **)(*param_1 + 0xe4))(1,param_1,param_1);
  }
  (**(code **)(*param_6 + 0x58))();
  (**(code **)(*(int *)this + 200))(1);
  SendMessageA(*(HWND *)(this + 0x1c),0x362,0xe001,0);
  UpdateWindow(*(HWND *)(this + 0x1c));
  return;
}

