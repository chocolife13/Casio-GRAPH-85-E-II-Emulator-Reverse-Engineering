// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005778da
// entry: 005778da  size: 169


void FUN_005778da(void)

{
  int iVar1;
  HCURSOR hCursor;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0059c044;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  CDC::Detach((CDC *)(extraout_ECX + 0x1e));
  iVar1 = extraout_ECX[0x45];
  if (iVar1 != 0) {
    FUN_00579494();
    FUN_00566960(iVar1);
  }
  FUN_00566960(extraout_ECX[0x22]);
  if ((int *)extraout_ECX[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0x1d] + 4))(1);
  }
  if (extraout_ECX[0x40] != 0) {
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    SetCursor(hCursor);
    DestroyCursor((HCURSOR)extraout_ECX[0x40]);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00569cf3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0056ccea();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

