// decompiled from GRAPH85emulator.exe
// function: CPreviewDC::SetScaleRatio
// entry: 00579760  size: 41


/* Library Function - Single Match
    public: void __thiscall CPreviewDC::SetScaleRatio(int,int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall CPreviewDC::SetScaleRatio(CPreviewDC *this,int param_1,int param_2)

{
  *(int *)(this + 0x10) = param_1;
  *(int *)(this + 0x14) = param_2;
  if (*(int *)(this + 8) != 0) {
    FUN_0057a2d2(1);
    FUN_00579967();
  }
  return;
}

