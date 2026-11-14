// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579fc1
// entry: 00579fc1  size: 248


undefined4 FUN_00579fc1(void)

{
  INT *lpDx;
  BOOL BVar1;
  UINT UVar2;
  int extraout_ECX;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00555ab8();
  lpDx = *(INT **)(unaff_EBP + 0x20);
  uVar3 = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (lpDx == (INT *)0x0) {
    if (*(int *)(unaff_EBP + 0x1c) == 0) {
      uVar3 = 1;
      goto LAB_0057a0a8;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar3 = FUN_00566937(*(int *)(unaff_EBP + 0x1c) << 2);
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    uVar3 = FUN_00566937(*(undefined4 *)(unaff_EBP + 0x1c));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00579d36(unaff_EBP + -0x20,unaff_EBP + 8,*(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + 0x1c,
                 0,0,0,0,uVar3,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x18);
    lpDx = *(INT **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + 0x18) = uVar3;
  }
  BVar1 = ExtTextOutA(*(HDC *)(extraout_ECX + 4),*(int *)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc),
                      *(UINT *)(unaff_EBP + 0x10),*(RECT **)(unaff_EBP + 0x14),
                      *(LPCSTR *)(unaff_EBP + 0x18),*(UINT *)(unaff_EBP + 0x1c),lpDx);
  *(BOOL *)(unaff_EBP + 0x18) = BVar1;
  if ((*(int *)(unaff_EBP + -0x18) != 0) && (BVar1 != 0)) {
    UVar2 = GetTextAlign(*(HDC *)(extraout_ECX + 8));
    if ((UVar2 & 1) != 0) {
      GetCurrentPositionEx(*(HDC *)(extraout_ECX + 4),(LPPOINT)(unaff_EBP + -0x20));
      FUN_0056a293(unaff_EBP + -0x28,*(int *)(unaff_EBP + -0x20) - *(int *)(unaff_EBP + -0x18),
                   *(undefined4 *)(unaff_EBP + -0x1c));
    }
  }
  FUN_00566960(*(undefined4 *)(unaff_EBP + -0x14));
  FUN_00566960(uVar3);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x18);
LAB_0057a0a8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}

