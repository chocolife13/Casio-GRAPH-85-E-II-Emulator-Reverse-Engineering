// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b8604
// entry: 004b8604  size: 107


int FUN_004b8604(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint in_stack_00000120;
  int in_stack_00000124;
  
  uVar2 = FUN_004b8320();
  uVar5 = uVar2;
  if (in_stack_00000120 != 0) {
    uVar5 = in_stack_00000120;
  }
  puVar1 = &stack0x0000001c;
  iVar3 = in_stack_00000124;
  for (uVar6 = 1; (in_stack_00000124 = iVar3, uVar2 != 0 && ((uVar6 & 0xffff) != uVar5));
      uVar6 = uVar6 + 1) {
    iVar3 = FUN_004b7550(puVar1);
    uVar2 = uVar2 - 1;
    puVar1 = puVar1 + iVar3 + 1;
    iVar3 = in_stack_00000124;
  }
  FUN_004b7750(iVar3,puVar1);
  iVar4 = FUN_004b7550(puVar1);
  *(undefined1 *)(iVar4 + iVar3) = 0;
  return iVar3;
}

