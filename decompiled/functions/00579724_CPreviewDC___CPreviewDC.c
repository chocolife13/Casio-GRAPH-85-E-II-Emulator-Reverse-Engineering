// decompiled from GRAPH85emulator.exe
// function: CPreviewDC::~CPreviewDC
// entry: 00579724  size: 60


/* Library Function - Single Match
    public: virtual __thiscall CPreviewDC::~CPreviewDC(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CPreviewDC::~CPreviewDC(CPreviewDC *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059d028;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  AfxDeleteObject((void **)(extraout_ECX + 10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00569cf3();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

