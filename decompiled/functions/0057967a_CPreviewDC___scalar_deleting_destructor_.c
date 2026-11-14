// decompiled from GRAPH85emulator.exe
// function: CPreviewDC::`scalar_deleting_destructor'
// entry: 0057967a  size: 28


/* Library Function - Single Match
    public: virtual void * __thiscall CPreviewDC::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CPreviewDC::_scalar_deleting_destructor_(CPreviewDC *this,uint param_1)

{
  ~CPreviewDC(this);
  if ((param_1 & 1) != 0) {
    FUN_00566960(this);
  }
  return this;
}

