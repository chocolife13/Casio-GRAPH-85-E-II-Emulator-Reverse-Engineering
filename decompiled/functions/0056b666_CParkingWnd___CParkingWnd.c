// decompiled from GRAPH85emulator.exe
// function: CParkingWnd::~CParkingWnd
// entry: 0056b666  size: 53


/* Library Function - Single Match
    public: virtual __thiscall CParkingWnd::~CParkingWnd(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CParkingWnd::~CParkingWnd(CParkingWnd *this)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005689de();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

