// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057588b
// entry: 0057588b  size: 321


undefined4 FUN_0057588b(void)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00555ab8();
  iVar2 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  if (iVar1 == 0) {
    iVar2 = FUN_0057497f();
    iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0xc))(0xe100,0,0,0);
    if (iVar2 == 0) {
      FUN_0056de2e();
    }
    iVar2 = extraout_ECX[7];
  }
  else {
    if (iVar1 != 1) {
      if (1 < iVar1) {
        if (iVar1 < 4) {
          extraout_ECX[0x1d] = 0;
          (**(code **)(*extraout_ECX + 0x7c))(*(undefined4 *)(iVar2 + 0x14));
          extraout_ECX[0x2b] = iVar2;
          SendMessageA(*(HWND *)(extraout_ECX[7] + 0x1c),0x111,0xe108,0);
          extraout_ECX[0x2b] = 0;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        else if (iVar1 == 4) {
          iVar2 = extraout_ECX[0x1d];
          extraout_ECX[0x1d] = 0;
          extraout_ECX[0x2b] = iVar2;
        }
        else if (iVar1 == 5) {
          FUN_00575bdd();
          iVar1 = FUN_005759cc();
          if (*(int *)(iVar2 + 8) == 0) {
            if (iVar1 == 0) {
              uVar3 = 0xf10c;
            }
            else {
              uVar3 = 0xf10b;
            }
            FUN_0056e108(uVar3,0,0xffffffff);
          }
          iVar2 = extraout_ECX[0x2b];
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          if (iVar2 == 0) {
            iVar2 = FUN_00566937(0x24);
            *(int *)(unaff_EBP + 8) = iVar2;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            if (iVar2 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_005753ef();
            }
            extraout_ECX[0x2b] = iVar2;
            *(undefined4 *)(iVar2 + 0x10) = 5;
          }
        }
      }
      goto LAB_005759b8;
    }
    iVar2 = (**(code **)(*extraout_ECX + 0x7c))(*(undefined4 *)(iVar2 + 0x14));
  }
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
LAB_005759b8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x10);
}

