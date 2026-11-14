// decompiled from GRAPH85emulator.exe
// function: CParkingWnd::`scalar_deleting_destructor'
// entry: 0056b64a  size: 28


/* Library Function - Single Match
    public: virtual void * __thiscall CParkingWnd::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CParkingWnd::_scalar_deleting_destructor_(CParkingWnd *this,uint param_1)

{
  ~CParkingWnd(this);
  if ((param_1 & 1) != 0) {
    FUN_00566960(this);
  }
  return this;
}

