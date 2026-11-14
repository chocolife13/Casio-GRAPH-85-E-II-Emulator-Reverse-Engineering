// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005789dc
// entry: 005789dc  size: 164


void FUN_005789dc(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0xec) == 0) {
    iVar2 = *(int *)(extraout_ECX + 0xf8);
  }
  else {
    iVar2 = *(int *)(extraout_ECX + 0xe8);
  }
  FUN_005677ee(0xf042 - (uint)(iVar2 != 1));
  piVar1 = *(int **)(unaff_EBP + 8);
  (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(unaff_EBP + -0x10));
  if (*(int *)(extraout_ECX + 0xec) == 0) {
    uVar3 = 1;
    if ((*(int *)(extraout_ECX + 0xf0) != 1) &&
       ((1 < *(ushort *)(*(int *)(**(int **)(extraout_ECX + 0x114) + 0x5c) + 0x1e) ||
        (1 < *(uint *)(extraout_ECX + 0xf8))))) goto LAB_00578a5d;
  }
  uVar3 = 0;
LAB_00578a5d:
  (**(code **)*piVar1)(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

