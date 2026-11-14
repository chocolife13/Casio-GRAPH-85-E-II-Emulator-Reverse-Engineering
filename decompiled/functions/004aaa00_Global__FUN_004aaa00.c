// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aaa00
// entry: 004aaa00  size: 128


void FUN_004aaa00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_44 [16];
  
  puVar2 = &DAT_005d6c40;
  puVar3 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = __setjmp3(&DAT_005d6c40,0);
  DAT_005d6c32 = 0;
  FUN_004a95a0(iVar1);
  if ((iVar1 == 0) && (DAT_005d6c24 != 0)) {
                    /* WARNING: Subroutine does not return */
    _longjmp((int *)&DAT_005d6c80,10);
  }
  puVar2 = local_44;
  puVar3 = &DAT_005d6c40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((param_1 != 1) && (DAT_005d6c20 != (code *)0x0)) {
    (*DAT_005d6c20)();
    DAT_005d6c20 = (code *)0x0;
  }
  return;
}

