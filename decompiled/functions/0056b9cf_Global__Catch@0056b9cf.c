// decompiled from GRAPH85emulator.exe
// function: Global::Catch@0056b9cf
// entry: 0056b9cf  size: 69


undefined * Catch_0056b9cf(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  (**(code **)(*piVar1 + 0x88))(*(undefined4 *)(unaff_EBP + -0x14),1);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  (**(code **)(iVar2 + 0x80))
            (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),1,0xf102);
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_00567ad3();
  return &DAT_0056ba22;
}

