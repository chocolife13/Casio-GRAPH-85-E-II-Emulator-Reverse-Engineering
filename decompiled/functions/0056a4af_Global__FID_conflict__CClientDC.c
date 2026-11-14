// decompiled from GRAPH85emulator.exe
// function: Global::FID_conflict:~CClientDC
// entry: 0056a4af  size: 66


/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CClientDC::~CClientDC(void)
    public: virtual __thiscall CWindowDC::~CWindowDC(void)
   
   Library: Visual Studio 2003 Release */

void FID_conflict__CClientDC(void)

{
  HDC__ *hDC;
  CDC *this;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(CDC **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_0059ad5c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  hDC = CDC::Detach(this);
  ReleaseDC(*(HWND *)(this + 0x10),hDC);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00569cf3();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

