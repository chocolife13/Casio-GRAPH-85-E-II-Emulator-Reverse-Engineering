// decompiled from GRAPH85emulator.exe
// function: Global::OnCreate
// entry: 0056bbe4  size: 48


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CView::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CView::OnCreate(struct tagCREATESTRUCTW *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined4 __thiscall OnCreate(CView *param_1,int *param_2)

{
  CDocument *this;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0056339a();
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((*param_2 != 0) && (this = *(CDocument **)(*param_2 + 4), this != (CDocument *)0x0)) {
      CDocument::AddView(this,param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

