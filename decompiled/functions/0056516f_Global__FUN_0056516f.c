// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056516f
// entry: 0056516f  size: 164


undefined4 FUN_0056516f(void)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00555ab8();
  iVar1 = FUN_005633c1(0);
  if (iVar1 != 0) {
    hWnd = *(HWND *)(unaff_EBP + 8);
    iVar1 = FUN_005621d5(hWnd);
    if (iVar1 != 0) {
      uVar3 = FUN_00565142(*(undefined4 *)(unaff_EBP + 0xc));
      goto LAB_00565203;
    }
    pHVar2 = GetParent(hWnd);
    iVar1 = FUN_005621d5(pHVar2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) {
      iVar1 = FUN_005621d5(hWnd);
      if (iVar1 != 0) {
        FUN_00563050(hWnd);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x10) = iVar1;
        uVar3 = FUN_00565142(*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        CWnd::~CWnd((CWnd *)(unaff_EBP + -0x48));
        goto LAB_00565203;
      }
    }
  }
  uVar3 = 0;
LAB_00565203:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}

