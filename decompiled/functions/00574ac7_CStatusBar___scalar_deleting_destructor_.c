// decompiled from GRAPH85emulator.exe
// function: CStatusBar::`scalar_deleting_destructor'
// entry: 00574ac7  size: 28


/* Library Function - Single Match
    public: virtual void * __thiscall CStatusBar::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CStatusBar::_scalar_deleting_destructor_(CStatusBar *this,uint param_1)

{
  ~CStatusBar(this);
  if ((param_1 & 1) != 0) {
    FUN_00566960(this);
  }
  return this;
}

