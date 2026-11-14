// decompiled from GRAPH85emulator.exe
// function: CPaintDC::~CPaintDC
// entry: 0056a617  size: 71


/* Library Function - Single Match
    public: virtual __thiscall CPaintDC::~CPaintDC(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CPaintDC::~CPaintDC(CPaintDC *this)

{
  CDC *this_00;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(CDC **)(unaff_EBP + -0x10) = this_00;
  *(undefined ***)this_00 = &PTR_LAB_0059ae4c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  EndPaint(*(HWND *)(this_00 + 0x10),(PAINTSTRUCT *)(this_00 + 0x14));
  CDC::Detach(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00569cf3();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

