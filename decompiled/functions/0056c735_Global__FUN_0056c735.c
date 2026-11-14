// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c735
// entry: 0056c735  size: 181


undefined4 FUN_0056c735(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPCSTR lpString1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00555ab8();
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *piVar1 = 0;
  iVar2 = (**(code **)(*extraout_ECX + 0x54))();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  do {
    if (iVar2 == 0) {
      *(undefined **)(unaff_EBP + 0xc) = PTR_DAT_005cba44;
      iVar2 = *extraout_ECX;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar2 = (**(code **)(iVar2 + 100))(unaff_EBP + 0xc,4);
      if ((((iVar2 == 0) || (*(int *)(*(int *)(unaff_EBP + 0xc) + -8) == 0)) ||
          (lpString1 = (LPCSTR)FUN_00556082(*(undefined4 *)(unaff_EBP + 8),0x2e),
          lpString1 == (LPCSTR)0x0)) ||
         (iVar2 = lstrcmpiA(lpString1,*(LPCSTR *)(unaff_EBP + 0xc)), iVar2 != 0)) {
        uVar4 = 3;
      }
      else {
        uVar4 = 4;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00567398();
LAB_0056c7d9:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar4;
    }
    iVar2 = (**(code **)(*extraout_ECX + 0x58))(unaff_EBP + -0x10);
    iVar3 = FUN_005692b9(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(unaff_EBP + 8));
    if (iVar3 != 0) {
      *piVar1 = iVar2;
      uVar4 = 5;
      goto LAB_0056c7d9;
    }
    iVar2 = *(int *)(unaff_EBP + -0x10);
  } while( true );
}

