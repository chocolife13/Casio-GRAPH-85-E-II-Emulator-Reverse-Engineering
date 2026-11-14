// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578923
// entry: 00578923  size: 185


void FUN_00578923(void)

{
  int iVar1;
  int iVar2;
  CWinThread *pCVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + 0xc) = iVar1 + -1 + iVar2;
  pCVar3 = AfxGetThread();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(pCVar3 + 0x1c);
  *(undefined **)(unaff_EBP + 8) = PTR_DAT_005cba44;
  iVar4 = *(int *)(extraout_ECX + 0x114);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00567899(unaff_EBP + 8,*(undefined4 *)(iVar4 + 0x1c),iVar2 != 1,10);
  if (iVar4 != 0) {
    if (iVar2 != 1) {
      wsprintfA((LPSTR)(unaff_EBP + -0x60),*(LPCSTR *)(unaff_EBP + 8),iVar1,
                *(undefined4 *)(unaff_EBP + 0xc));
    }
    else {
      wsprintfA((LPSTR)(unaff_EBP + -0x60),*(LPCSTR *)(unaff_EBP + 8),iVar1);
    }
    SendMessageA(*(HWND *)(*(int *)(unaff_EBP + -0x10) + 0x1c),0x362,0,unaff_EBP + -0x60);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

