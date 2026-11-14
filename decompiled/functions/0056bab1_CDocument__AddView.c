// decompiled from GRAPH85emulator.exe
// function: CDocument::AddView
// entry: 0056bab1  size: 32


/* Library Function - Single Match
    public: void __thiscall CDocument::AddView(class CView *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CDocument::AddView(CDocument *this,CView *param_1)

{
  CPtrList::AddTail((CPtrList *)(this + 0x28),param_1);
  *(CDocument **)(param_1 + 0x3c) = this;
  (**(code **)(*(int *)this + 0x68))();
  return;
}

