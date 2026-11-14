// decompiled from GRAPH85emulator.exe
// function: CScrollView::OnMouseWheel
// entry: 0056d53c  size: 52


/* Library Function - Single Match
    public: int __thiscall CScrollView::OnMouseWheel(unsigned int,short,class CPoint)
   
   Library: Visual Studio 2003 Release */

int __thiscall
CScrollView::OnMouseWheel
          (CScrollView *this,uint param_1,undefined4 param_2,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (((param_1 & 0xc) == 0) && (iVar1 = FUN_0056be61(this,1), iVar1 == 0)) {
    iVar1 = FUN_0056d570(param_1,param_2,param_4,param_5);
    return iVar1;
  }
  return 0;
}

