// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056b028
// entry: 0056b028  size: 364


void FUN_0056b028(void)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_00555ab8();
  puVar2 = PTR_DAT_005cba44;
  iVar5 = *(int *)(unaff_EBP + 0x14);
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined **)(unaff_EBP + 0x14) = puVar2;
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    iVar3 = FUN_00567a2c(&PTR_s_CUserException_0059ac68);
    if (iVar3 != 0) goto LAB_0056b177;
    iVar3 = FUN_00567a2c(&PTR_s_CArchiveException_0059cc68);
    if (iVar3 == 0) {
      iVar3 = FUN_00567a2c(&PTR_s_CFileException_0059cc40);
      if (iVar3 != 0) {
        if (*(int *)(piVar1[4] + -8) == 0) {
          FUN_005674d5(*(undefined4 *)(unaff_EBP + 8));
        }
        uVar4 = FUN_005676c7(0xff);
        iVar3 = (**(code **)(*piVar1 + 0xc))(uVar4,0x100,unaff_EBP + -0x10);
        if ((iVar3 == 0) && (iVar3 = piVar1[2], 1 < iVar3)) {
          if (iVar3 < 4) {
            iVar5 = 0xf121;
          }
          else if (iVar3 == 5) {
            iVar5 = (*(int *)(unaff_EBP + 0x10) != 0) + 0xf123;
          }
          else if (iVar3 == 0xd) {
            iVar5 = 0xf122;
          }
        }
        FUN_00567716(0xffffffff);
      }
    }
    else {
      iVar3 = piVar1[2];
      if ((iVar3 == 3) || ((4 < iVar3 && (iVar3 < 8)))) {
        iVar5 = 0xf120;
      }
    }
  }
  if (*(int *)(*(int *)(unaff_EBP + 0x14) + -8) == 0) {
    if (DAT_005d5110 == 0) {
      lstrcpynA((LPSTR)(unaff_EBP + -0x114),*(LPCSTR *)(unaff_EBP + 8),0x104);
    }
    else {
      FUN_0056937c(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x114,0x104);
    }
    FUN_0056ff16(unaff_EBP + 0x14,iVar5,unaff_EBP + -0x114);
  }
  FUN_0056e0d0(*(undefined4 *)(unaff_EBP + 0x14),0x30,*(undefined4 *)(unaff_EBP + -0x10));
LAB_0056b177:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

