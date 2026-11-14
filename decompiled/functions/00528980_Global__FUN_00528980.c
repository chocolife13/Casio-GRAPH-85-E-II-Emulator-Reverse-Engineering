// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00528980
// entry: 00528980  size: 152


char FUN_00528980(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  iVar1 = in_stack_00000018;
  iVar3 = in_stack_00000014;
  FUN_00528890(&stack0x00000004,in_stack_00000014,in_stack_00000018);
  cVar2 = FUN_004ac2f0(0x10,&stack0x00000004,0);
  if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
    uVar4 = iVar3 * iVar1 * 0xc;
    if (uVar4 < in_stack_0000001c - 0x10U) {
      iVar3 = FUN_005288c0(&stack0x00000018,&stack0x00000014,iVar3,iVar1);
      if (((iVar3 == 0) && (in_stack_00000018 == 0)) && (in_stack_00000014 == 0)) {
        cVar2 = FUN_004acb90(uVar4,uVar4 + 0x10);
        return cVar2;
      }
    }
    cVar2 = '\0';
  }
  return cVar2;
}

