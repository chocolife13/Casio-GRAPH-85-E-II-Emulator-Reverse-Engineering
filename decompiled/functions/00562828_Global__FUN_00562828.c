// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562828
// entry: 00562828  size: 393


undefined4 FUN_00562828(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  HWND pHVar5;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc0;
  *(int **)(unaff_EBP + -0x24) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    iVar2 = FUN_0057497f();
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar2 + 8);
  }
  iVar2 = FUN_0057497f();
  piVar1 = *(int **)(iVar2 + 0x1038);
  *(int **)(unaff_EBP + -0x28) = piVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00565e0f(0x10);
  FUN_00565e0f(0x3c000);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*extraout_ECX + 0xb4))(unaff_EBP + -0x34);
    if (iVar2 == 0) goto LAB_00562a3d;
    uVar3 = (**(code **)(*piVar1 + 0x10))(unaff_EBP + -0x34,*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
LAB_00562a3d:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 0;
  }
  *(undefined **)(unaff_EBP + -0x1c) = PTR_DAT_005cba44;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iVar2 = FUN_00567ceb(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x1c,unaff_EBP + -0x20);
  if (iVar2 != 0) {
    iVar2 = GetSystemMetrics(0x2a);
    if (iVar2 == 0) goto LAB_00562972;
    iVar2 = FUN_005546c3(*(undefined4 *)(unaff_EBP + -0x1c),"MS Shell Dlg");
    if (iVar2 != 0) {
      iVar2 = FUN_005546c3(*(undefined4 *)(unaff_EBP + -0x1c),"MS Sans Serif");
      if (iVar2 != 0) {
        iVar2 = FUN_005546c3(*(undefined4 *)(unaff_EBP + -0x1c),&DAT_0059a3d4);
        if (iVar2 != 0) goto LAB_00562972;
      }
    }
    if (*(short *)(unaff_EBP + -0x20) == 8) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
  }
  FUN_00567b3a(*(undefined4 *)(unaff_EBP + 8));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00567e74(*(undefined4 *)(unaff_EBP + -0x20));
  uVar3 = FUN_00567bd7();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00567bc9();
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    pvVar4 = GlobalLock(*(HGLOBAL *)(unaff_EBP + -0x14));
    *(LPVOID *)(unaff_EBP + 8) = pvVar4;
  }
LAB_00562972:
  extraout_ECX[0xb] = -1;
  extraout_ECX[9] = extraout_ECX[9] | 0x10;
  FUN_005638e5(extraout_ECX);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    pHVar5 = (HWND)0x0;
  }
  else {
    pHVar5 = *(HWND *)(*(int *)(unaff_EBP + 0xc) + 0x1c);
  }
  pHVar5 = CreateDialogIndirectParamA
                     (*(HINSTANCE *)(unaff_EBP + 0x10),*(LPCDLGTEMPLATEA *)(unaff_EBP + 8),pHVar5,
                      FUN_0056256d,0);
  *(HWND *)(unaff_EBP + -0x18) = pHVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  uVar3 = FUN_005629ce();
  return uVar3;
}

