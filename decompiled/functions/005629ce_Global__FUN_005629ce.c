// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005629ce
// entry: 005629ce  size: 135


undefined4 FUN_005629ce(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EDI != unaff_EBX) {
    (**(code **)(*unaff_EDI + 0x14))(unaff_EBP + -0x34);
    if (*(int **)(unaff_EBP + -0x18) != unaff_EBX) {
      (**(code **)(*unaff_ESI + 0xb4))();
    }
  }
  iVar1 = FUN_00563931();
  if (iVar1 == 0) {
    (**(code **)(*unaff_ESI + 0xa4))();
  }
  if ((*(int **)(unaff_EBP + -0x18) != unaff_EBX) && ((*(byte *)(unaff_ESI + 9) & 0x10) == 0)) {
    DestroyWindow(*(HWND *)(unaff_EBP + -0x18));
    *(int **)(unaff_EBP + -0x18) = unaff_EBX;
  }
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    GlobalUnlock(*(HGLOBAL *)(unaff_EBP + -0x14));
    GlobalFree(*(HGLOBAL *)(unaff_EBP + -0x14));
  }
  if ((*(int **)(unaff_EBP + -0x18) == unaff_EBX) && ((*(byte *)(unaff_ESI + 9) & 0x10) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

