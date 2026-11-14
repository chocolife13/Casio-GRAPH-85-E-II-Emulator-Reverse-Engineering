// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057a0cc
// entry: 0057a0cc  size: 237


void FUN_0057a0cc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  UINT UVar7;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_00555ab8();
  iVar1 = *(int *)(unaff_EBP + 0x18);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffcc;
  if (iVar1 < 1) {
    puVar5 = *(undefined4 **)(unaff_EBP + 8);
    *puVar5 = 0;
    puVar5[1] = 0;
    FUN_0057a1d5();
    return;
  }
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_00566937(iVar1 << 2);
  *(undefined4 *)(unaff_EBP + 0x18) = uVar4;
  uVar4 = FUN_00566937(iVar1);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  puVar5 = (undefined4 *)
           FUN_00579d36(unaff_EBP + -0x28,unaff_EBP + 0xc,*(undefined4 *)(unaff_EBP + 0x14),
                        unaff_EBP + -0x14,1,*(undefined4 *)(unaff_EBP + 0x1c),
                        *(undefined4 *)(unaff_EBP + 0x20),*(undefined4 *)(unaff_EBP + 0x24),uVar4,
                        *(undefined4 *)(unaff_EBP + 0x18),unaff_EBP + -0x20);
  uVar4 = *(undefined4 *)(unaff_EBP + 0x18);
  uVar2 = *puVar5;
  uVar12 = *(undefined4 *)(unaff_EBP + -0x14);
  uVar3 = puVar5[1];
  uVar11 = *(undefined4 *)(unaff_EBP + -0x18);
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar6 = (**(code **)(*extraout_ECX + 0x60))
                    (*(undefined4 *)(unaff_EBP + 0xc),uVar8,0,0,uVar11,uVar12,uVar4);
  *(undefined4 *)(unaff_EBP + 0x24) = uVar6;
  FUN_00566960(*(undefined4 *)(unaff_EBP + 0x18));
  FUN_00566960(*(undefined4 *)(unaff_EBP + -0x18));
  if (*(int *)(unaff_EBP + 0x24) != 0) {
    UVar7 = GetTextAlign((HDC)extraout_ECX[2]);
    if ((UVar7 & 1) != 0) {
      GetCurrentPositionEx((HDC)extraout_ECX[1],(LPPOINT)(unaff_EBP + -0x1c));
      FUN_0056a293(unaff_EBP + -0x30,*(int *)(unaff_EBP + -0x1c) - *(int *)(unaff_EBP + -0x20),
                   *(undefined4 *)(unaff_EBP + -0x18));
    }
  }
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = uVar2;
  puVar5[1] = uVar3;
  FUN_0057a1d5(uVar8,uVar9,uVar10,uVar11,uVar12,uVar4);
  return;
}

