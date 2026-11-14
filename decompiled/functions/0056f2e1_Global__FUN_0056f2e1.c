// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056f2e1
// entry: 0056f2e1  size: 270


undefined4 FUN_0056f2e1(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  WPARAM wParam;
  undefined4 uVar6;
  LRESULT LVar7;
  int extraout_ECX;
  undefined4 *puVar8;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar4 = FUN_00566152(100);
  SendMessageA(*(HWND *)(iVar4 + 0x1c),0x184,0,0);
  puVar8 = *(undefined4 **)(*(int *)(extraout_ECX + 0x5c) + 4);
  while (puVar3 = PTR_DAT_005cba44, puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar8;
    piVar2 = (int *)puVar8[2];
    *(int **)(unaff_EBP + -0x18) = piVar2;
    *(undefined **)(unaff_EBP + -0x10) = puVar3;
    iVar5 = *piVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar5 = (**(code **)(iVar5 + 100))(unaff_EBP + -0x10,2);
    if ((iVar5 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) != 0)) {
      wParam = SendMessageA(*(HWND *)(iVar4 + 0x1c),0x180,0,*(int *)(unaff_EBP + -0x10));
      if (wParam == 0xffffffff) {
        FUN_00562c77(0xffffffff);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00567398();
        uVar6 = 0;
        goto LAB_0056f3e0;
      }
      SendMessageA(*(HWND *)(iVar4 + 0x1c),0x19a,wParam,*(LPARAM *)(unaff_EBP + -0x18));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00567398();
    puVar8 = puVar1;
  }
  LVar7 = SendMessageA(*(HWND *)(iVar4 + 0x1c),0x18b,0,0);
  if (LVar7 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    if (LVar7 != 1) {
      SendMessageA(*(HWND *)(iVar4 + 0x1c),0x186,0,0);
      goto LAB_0056f3d8;
    }
    LVar7 = SendMessageA(*(HWND *)(iVar4 + 0x1c),0x199,0,0);
    uVar6 = 1;
    *(LRESULT *)(*(int *)(unaff_EBP + -0x14) + 0x60) = LVar7;
  }
  FUN_00562c77(uVar6);
LAB_0056f3d8:
  uVar6 = FUN_00562d9d();
LAB_0056f3e0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}

