// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00419860
// entry: 00419860  size: 71


bool FUN_00419860(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_stack_00010004;
  
  FUN_00553a90();
  puVar1 = (undefined4 *)register0x00000010;
  for (iVar2 = 0x4000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  iVar2 = FUN_004197f0(in_stack_00010004,&stack0x00000000,0x10000);
  return iVar2 == 0x10000;
}

