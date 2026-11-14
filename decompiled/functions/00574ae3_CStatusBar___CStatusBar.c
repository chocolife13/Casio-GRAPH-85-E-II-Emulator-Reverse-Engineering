// decompiled from GRAPH85emulator.exe
// function: CStatusBar::~CStatusBar
// entry: 00574ae3  size: 59


/* Library Function - Single Match
    public: virtual __thiscall CStatusBar::~CStatusBar(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CStatusBar::~CStatusBar(CStatusBar *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059b6f4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00574d0c(0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0056e289();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

