// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056a85d
// entry: 0056a85d  size: 429


int * FUN_0056a85d(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  CWinThread *pCVar5;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  piVar4 = (int *)extraout_ECX[0x19];
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)(**(code **)(*extraout_ECX + 0x6c))();
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
LAB_0056a8a9:
    if (piVar4 == (int *)0x0) {
      FUN_0056e108(0xf104,0,0xffffffff);
    }
    else {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iVar1 = piVar4[0x12];
        piVar4[0x12] = 0;
        iVar3 = (**(code **)(*extraout_ECX + 0x70))(piVar4,0);
        *(int *)(unaff_EBP + -0x10) = iVar3;
        piVar4[0x12] = iVar1;
        if (iVar3 == 0) {
          FUN_0056e108(0xf104,0,0xffffffff);
          (**(code **)(*piVar4 + 4))(1);
          goto LAB_0056a9b1;
        }
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        (**(code **)(*extraout_ECX + 0x84))(piVar4);
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          piVar4[0x13] = 1;
        }
        iVar1 = (**(code **)(*piVar4 + 0x70))();
        if (iVar1 != 0) {
LAB_0056a9d4:
          pCVar5 = AfxGetThread();
          if ((*(int *)(unaff_EBP + -0x14) != 0) && (*(int *)(pCVar5 + 0x1c) == 0)) {
            *(undefined4 *)(pCVar5 + 0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
          }
          (**(code **)(*extraout_ECX + 0x74))
                    (*(undefined4 *)(unaff_EBP + -0x10),piVar4,*(undefined4 *)(unaff_EBP + 0xc));
          goto LAB_0056a9f9;
        }
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x58))();
        }
      }
      else {
        FUN_0057497f();
        FUN_00566672();
        iVar1 = *piVar4;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uVar2 = (**(code **)(iVar1 + 0x58))();
        (**(code **)(*piVar4 + 0x5c))(0);
        iVar1 = (**(code **)(*piVar4 + 0x74))(*(undefined4 *)(unaff_EBP + 8));
        if (iVar1 != 0) {
          (**(code **)(*piVar4 + 0x54))(*(undefined4 *)(unaff_EBP + 8),1);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0057497f();
          FUN_00566687();
          goto LAB_0056a9d4;
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          iVar1 = (**(code **)(*piVar4 + 0x58))();
          if (iVar1 == 0) {
            (**(code **)(*piVar4 + 0x5c))(uVar2);
          }
          else {
            (**(code **)(*extraout_ECX + 0x84))(piVar4);
            (**(code **)(*piVar4 + 0x70))();
          }
        }
        else {
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x58))();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0057497f();
        FUN_00566687();
      }
    }
  }
  else {
    iVar1 = (**(code **)(*piVar4 + 0x90))();
    if (iVar1 != 0) {
      uVar2 = FUN_00552b70();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
      goto LAB_0056a8a9;
    }
  }
LAB_0056a9b1:
  piVar4 = (int *)0x0;
LAB_0056a9f9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar4;
}

