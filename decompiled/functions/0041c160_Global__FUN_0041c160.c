// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c160
// entry: 0041c160  size: 126


int FUN_0041c160(void)

{
  char *pcVar1;
  int iVar2;
  char unaff_retaddr;
  int in_stack_00010004;
  int in_stack_00010008;
  
  FUN_00553a90();
  iVar2 = FUN_0041c4f0(in_stack_00010004);
  if (-1 < iVar2) {
    iVar2 = ((&DAT_0057ddf4)[iVar2] - in_stack_00010004) + 0x10000;
    if (iVar2 < in_stack_00010008) {
      in_stack_00010008 = iVar2;
    }
    iVar2 = FUN_004197b0(in_stack_00010004,&stack0x00000000,in_stack_00010008);
    if (iVar2 != in_stack_00010008) {
      return -0x1f;
    }
    iVar2 = 0;
    if (unaff_retaddr == -1) {
      do {
        if (in_stack_00010008 <= iVar2) {
          return iVar2;
        }
        pcVar1 = &stack0x00000001 + iVar2;
        iVar2 = iVar2 + 1;
      } while (*pcVar1 == -1);
    }
  }
  return iVar2;
}

