// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569cf3
// entry: 00569cf3  size: 54


void FUN_00569cf3(void)

{
  HDC__ *hdc;
  CDC *this;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(CDC **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_0059acc0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(this + 4) != 0) {
    hdc = CDC::Detach(this);
    DeleteDC(hdc);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

