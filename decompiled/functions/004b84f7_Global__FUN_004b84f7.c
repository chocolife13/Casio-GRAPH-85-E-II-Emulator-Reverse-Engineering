// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b84f7
// entry: 004b84f7  size: 87


void FUN_004b84f7(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_stack_00000120;
  
  uVar2 = FUN_004b8320();
  uVar4 = uVar2;
  if (in_stack_00000120 != 0) {
    uVar4 = in_stack_00000120;
  }
  puVar1 = &stack0x0000001c;
  for (uVar5 = 1; (uVar2 != 0 && ((uVar5 & 0xffff) != uVar4)); uVar5 = uVar5 + 1) {
    iVar3 = FUN_004b7550(puVar1);
    uVar2 = uVar2 - 1;
    puVar1 = puVar1 + iVar3 + 1;
  }
  FUN_004b7550(puVar1);
  return;
}

