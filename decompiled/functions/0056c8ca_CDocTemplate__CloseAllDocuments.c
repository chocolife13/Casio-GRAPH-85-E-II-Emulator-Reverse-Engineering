// decompiled from GRAPH85emulator.exe
// function: CDocTemplate::CloseAllDocuments
// entry: 0056c8ca  size: 48


/* Library Function - Single Match
    public: virtual void __thiscall CDocTemplate::CloseAllDocuments(int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CDocTemplate::CloseAllDocuments(CDocTemplate *this,int param_1)

{
  int *piVar1;
  CDocTemplate *local_8;
  
  local_8 = this;
  local_8 = (CDocTemplate *)(**(code **)(*(int *)this + 0x54))();
  while (local_8 != (CDocTemplate *)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x58))(&local_8);
    (**(code **)(*piVar1 + 0x7c))();
  }
  return;
}

