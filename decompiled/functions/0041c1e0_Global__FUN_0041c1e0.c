// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c1e0
// entry: 0041c1e0  size: 172


uint FUN_0041c1e0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint in_stack_00010014;
  int *in_stack_00010018;
  
  FUN_00553a90();
  iVar1 = FUN_004197b0(in_stack_00010014 & 0xffff0000,&stack0x00000010,0x10000);
  if (iVar1 != 0x10000) {
    return 0xffffffe1;
  }
  uVar2 = in_stack_00010014 & 0xffff;
  uVar3 = uVar2;
  if (uVar2 < 0x10000) {
    puVar4 = &stack0x00000010 + uVar2;
    do {
      iVar1 = FUN_0042a3d0(puVar4,&stack0x00000000,0x10);
      if (iVar1 == 0) break;
      uVar3 = uVar3 + 0x10;
      puVar4 = puVar4 + 0x10;
    } while (uVar3 < 0x10000);
  }
  *in_stack_00010018 = uVar3 - uVar2;
  return (uint)(0xffff < uVar3);
}

