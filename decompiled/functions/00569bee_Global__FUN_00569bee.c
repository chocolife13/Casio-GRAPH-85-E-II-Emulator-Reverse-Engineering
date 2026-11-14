// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569bee
// entry: 00569bee  size: 114


undefined4 FUN_00569bee(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00555ab8();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x1c) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    uVar2 = FUN_00566925(&LAB_0056c331);
    iVar3 = FUN_00566937(0x48);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00568008(&PTR_s_CTempDC_0059ab08,4,2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(pAVar1 + 0x1c) = uVar4;
    FUN_00566925(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x1c);
}

