// decompiled from GRAPH85emulator.exe
// function: CControlBar::OnMouseActivate
// entry: 0056ea4a  size: 33


/* Library Function - Single Match
    public: int __thiscall CControlBar::OnMouseActivate(class CWnd *,unsigned int,unsigned int)
   
   Library: Visual Studio 2003 Release */

int __thiscall
CControlBar::OnMouseActivate(CControlBar *this,CWnd *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_005738d6();
  if (iVar1 == 0) {
    iVar1 = FUN_0056339a();
  }
  else {
    CWnd::ActivateTopParent((CWnd *)this);
    iVar1 = 3;
  }
  return iVar1;
}

