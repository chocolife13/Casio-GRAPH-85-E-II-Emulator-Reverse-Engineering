// decompiled from GRAPH85emulator.exe
// function: CWnd::~CWnd
// entry: 00563aa5  size: 124


/* Library Function - Single Match
    public: virtual __thiscall CWnd::~CWnd(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CWnd::~CWnd(CWnd *this)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059a7f8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((extraout_ECX[7] != 0) && (extraout_ECX != (undefined4 *)&DAT_005d4c28)) &&
      (extraout_ECX != (undefined4 *)&DAT_005d4be8)) &&
     ((extraout_ECX != (undefined4 *)&DAT_005d4ba8 && (extraout_ECX != (undefined4 *)&DAT_005d4b68))
     )) {
    FUN_00563c62();
  }
  if ((int *)extraout_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xd] + 4))(1);
  }
  iVar1 = extraout_ECX[0xe];
  if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x24) == extraout_ECX)) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00566423();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

