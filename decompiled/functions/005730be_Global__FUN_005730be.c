// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005730be
// entry: 005730be  size: 215


undefined4 FUN_005730be(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  HWND hWnd;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  uVar4 = 0;
  iVar3 = puVar1[2];
  hWnd = (HWND)puVar1[1];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((iVar3 == -0x208) && ((*(byte *)(puVar1 + 0x19) & 1) != 0)) ||
     ((iVar3 == -0x212 && ((*(byte *)(puVar1 + 0x2d) & 1) != 0)))) {
    uVar2 = GetDlgCtrlID(hWnd);
    hWnd = (HWND)(uVar2 & 0xffff);
  }
  if (hWnd != (HWND)0x0) {
    iVar3 = FUN_00567872(hWnd,unaff_EBP + -0x110,0x100);
    if (iVar3 == 0) goto LAB_00573176;
    FUN_00567899(unaff_EBP + -0x10,unaff_EBP + -0x110,1,10);
  }
  if (puVar1[2] == -0x208) {
    lstrcpynA((LPSTR)(puVar1 + 4),*(LPCSTR *)(unaff_EBP + -0x10),0x50);
  }
  else {
    FUN_005677b9();
  }
  **(undefined4 **)(unaff_EBP + 0x10) = 0;
  SetWindowPos((HWND)*puVar1,(HWND)0x0,0,0,0,0,0x213);
  uVar4 = 1;
LAB_00573176:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}

