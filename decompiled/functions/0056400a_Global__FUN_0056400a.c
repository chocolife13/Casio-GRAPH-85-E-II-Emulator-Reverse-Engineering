// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056400a
// entry: 0056400a  size: 145


undefined4 FUN_0056400a(void)

{
  WNDCLASSA *lpWndClass;
  ATOM AVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00555ab8();
  lpWndClass = *(WNDCLASSA **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  BVar2 = GetClassInfoA(lpWndClass->hInstance,lpWndClass->lpszClassName,
                        (LPWNDCLASSA)(unaff_EBP + -0x38));
  if (BVar2 == 0) {
    AVar1 = RegisterClassA(lpWndClass);
    if (AVar1 == 0) {
      uVar3 = 0;
      goto LAB_0056408a;
    }
    iVar4 = FUN_0057497f();
    if (*(char *)(iVar4 + 0x14) != '\0') {
      FUN_00576699(1);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_0057497f();
      lstrcatA((LPSTR)(iVar4 + 0x34),lpWndClass->lpszClassName);
      *(undefined1 *)(unaff_EBP + 10) = 10;
      *(undefined1 *)(unaff_EBP + 0xb) = 0;
      lstrcatA((LPSTR)(iVar4 + 0x34),(LPCSTR)(unaff_EBP + 10));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00576709(1);
    }
  }
  uVar3 = 1;
LAB_0056408a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}

