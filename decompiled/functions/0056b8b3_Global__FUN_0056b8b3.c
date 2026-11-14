// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056b8b3
// entry: 0056b8b3  size: 284


void FUN_0056b8b3(void)

{
  undefined *puVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00555ab8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff8c;
  *(int **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_00567abd();
  puVar1 = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined **)(unaff_EBP + -0x20) = puVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined ***)(unaff_EBP + -0x30) = &PTR_LAB_0059be18;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  FUN_005674d5(0);
  iVar2 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iVar2 = (**(code **)(iVar2 + 0x84))(*(undefined4 *)(unaff_EBP + 8),0x1012,unaff_EBP + -0x30);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  if (iVar2 == 0) {
    iVar2 = unaff_EBP + -0x30;
    (**(code **)(*extraout_ECX + 0x80))(*(undefined4 *)(unaff_EBP + 8),iVar2,1,0xf100);
    *(undefined ***)(unaff_EBP + -0x30) = &PTR_LAB_0059be18;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_0056ba3e(iVar2);
    return;
  }
  FUN_0056c976(iVar2,2,0x1000,0);
  *(int **)(unaff_EBP + -0x74) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0057497f();
  FUN_00566672();
  iVar2 = *extraout_ECX;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  (**(code **)(iVar2 + 8))(unaff_EBP + -0x74);
  FUN_0056cada();
  uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
  (**(code **)(*extraout_ECX + 0x88))(uVar3,0);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0057497f();
  FUN_00566687();
  iVar2 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  (**(code **)(iVar2 + 0x5c))(0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0056ca52();
  *(undefined ***)(unaff_EBP + -0x30) = &PTR_LAB_0059be18;
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  FUN_0056ba3e(uVar3);
  return;
}

