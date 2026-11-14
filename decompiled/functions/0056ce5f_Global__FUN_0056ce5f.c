// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ce5f
// entry: 0056ce5f  size: 306


void FUN_0056ce5f(void)

{
  LPPOINT lppt;
  undefined4 uVar1;
  HDC pHVar2;
  LONG LVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x40);
  *(undefined4 *)(extraout_ECX + 0x40) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x44) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x48) = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_0056a4f1(0);
  uVar1 = *(undefined4 *)(extraout_ECX + 0x40);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00569f65(uVar1);
  pHVar2 = *(HDC *)(unaff_EBP + -0x1c);
  ((LPPOINT)(extraout_ECX + 0x4c))->x = *(LONG *)(extraout_ECX + 0x44);
  *(undefined4 *)(extraout_ECX + 0x50) = *(undefined4 *)(extraout_ECX + 0x48);
  LPtoDP(pHVar2,(LPPOINT)(extraout_ECX + 0x4c),1);
  lppt = (LPPOINT)(extraout_ECX + 0x54);
  LVar3 = (*(LONG **)(unaff_EBP + 0x14))[1];
  pHVar2 = *(HDC *)(unaff_EBP + -0x1c);
  lppt->x = **(LONG **)(unaff_EBP + 0x14);
  *(LONG *)(extraout_ECX + 0x58) = LVar3;
  LPtoDP(pHVar2,lppt,1);
  LVar3 = (*(LONG **)(unaff_EBP + 0x18))[1];
  pHVar2 = *(HDC *)(unaff_EBP + -0x1c);
  ((LPPOINT)(extraout_ECX + 0x5c))->x = **(LONG **)(unaff_EBP + 0x18);
  *(LONG *)(extraout_ECX + 0x60) = LVar3;
  LPtoDP(pHVar2,(LPPOINT)(extraout_ECX + 0x5c),1);
  if (*(int *)(extraout_ECX + 0x50) < 0) {
    *(int *)(extraout_ECX + 0x50) = -*(int *)(extraout_ECX + 0x50);
  }
  if (*(int *)(extraout_ECX + 0x58) < 0) {
    *(int *)(extraout_ECX + 0x58) = -*(int *)(extraout_ECX + 0x58);
  }
  if (*(int *)(extraout_ECX + 0x60) < 0) {
    *(int *)(extraout_ECX + 0x60) = -*(int *)(extraout_ECX + 0x60);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FID_conflict__CClientDC();
  if (lppt->x == 0) {
    lppt->x = *(int *)(extraout_ECX + 0x4c) / 10;
  }
  if (*(int *)(extraout_ECX + 0x58) == 0) {
    *(int *)(extraout_ECX + 0x58) = *(int *)(extraout_ECX + 0x50) / 10;
  }
  if (*(int *)(extraout_ECX + 0x5c) == 0) {
    *(int *)(extraout_ECX + 0x5c) = lppt->x / 10;
  }
  if (*(int *)(extraout_ECX + 0x60) == 0) {
    *(int *)(extraout_ECX + 0x60) = *(int *)(extraout_ECX + 0x58) / 10;
  }
  if (*(int *)(extraout_ECX + 0x1c) != 0) {
    FUN_0056d2b4();
    if (*(int *)(unaff_EBP + -0x10) != *(int *)(extraout_ECX + 0x40)) {
      InvalidateRect(*(HWND *)(extraout_ECX + 0x1c),(RECT *)0x0,1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

