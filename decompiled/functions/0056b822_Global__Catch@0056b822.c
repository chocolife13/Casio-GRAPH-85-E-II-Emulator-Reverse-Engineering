// decompiled from GRAPH85emulator.exe
// function: Global::Catch@0056b822
// entry: 0056b822  size: 76


undefined * Catch_0056b822(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x18);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  (**(code **)(*piVar1 + 0x88))(*(undefined4 *)(unaff_EBP + -0x14),1);
  (**(code **)(*piVar1 + 0x6c))();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  (**(code **)(iVar2 + 0x80))
            (*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),0,0xf101);
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_00567ad3();
  return &DAT_0056b87c;
}

