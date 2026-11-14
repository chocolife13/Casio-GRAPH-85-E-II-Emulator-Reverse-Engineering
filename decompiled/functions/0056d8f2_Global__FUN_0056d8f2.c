// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d8f2
// entry: 0056d8f2  size: 164


void FUN_0056d8f2(void)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00555ab8();
  iVar2 = extraout_ECX[0x17];
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  iVar1 = iVar2 + *(int *)(unaff_EBP + 8) * 0x14;
  if ((*(byte *)(iVar2 + 0xc + *(int *)(unaff_EBP + 8) * 0x14) & 1) == 0) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + -8);
    }
    else {
      iVar2 = FUN_005546c3(*(int *)(iVar1 + 0x10),*(undefined4 *)(unaff_EBP + 0xc));
    }
    if (iVar2 == 0) goto LAB_0056d991;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_00567323();
  }
  else {
    FUN_005674d5(*(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 1;
    FUN_0056d99e();
    return;
  }
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffffffe;
  if ((*(byte *)(iVar1 + 0xb) & 4) == 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
  }
  else {
    uVar3 = 0;
  }
  (**(code **)(*extraout_ECX + 0xa0))
            (0x401,(uint)*(ushort *)(iVar1 + 8) | *(uint *)(unaff_EBP + 8),uVar3);
LAB_0056d991:
  FUN_0056d99e();
  return;
}

