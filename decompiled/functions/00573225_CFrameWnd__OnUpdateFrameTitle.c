// decompiled from GRAPH85emulator.exe
// function: CFrameWnd::OnUpdateFrameTitle
// entry: 00573225  size: 68


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::OnUpdateFrameTitle(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnUpdateFrameTitle(CFrameWnd *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_005661de();
  if ((uVar1 & 0x8000) != 0) {
    if ((*(int **)(this + 0x68) != (int *)0x0) &&
       (iVar2 = (**(code **)(**(int **)(this + 0x68) + 0x68))(), iVar2 != 0)) {
      return;
    }
    iVar2 = (**(code **)(*(int *)this + 0xbc))();
    if ((param_1 == 0) || (iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x1c);
    }
    FUN_00573269(uVar3);
  }
  return;
}

