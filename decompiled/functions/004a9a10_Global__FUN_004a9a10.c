// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9a10
// entry: 004a9a10  size: 206


undefined4 FUN_004a9a10(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_408 [1008];
  undefined4 uStackY_18;
  undefined *puStackY_14;
  
  DAT_005d6c32 = 0;
  for (puVar1 = local_408; DAT_005d6cc4 <= puVar1; puVar1 = puVar1 + -1) {
    *puVar1 = 0x55;
  }
  thunk_FUN_00407100();
  DAT_005d6d68 = (short)DAT_005d6c2c;
  DAT_005d6d6a = DAT_005d6c2c._2_2_;
  if (DAT_005d6d68 != 2) {
    DAT_005d6cc0 = 0;
    DAT_005d6cca = DAT_005d6c2c._2_2_;
    puStackY_14 = (undefined *)0x4a9abf;
    DAT_005d6cc8 = DAT_005d6d68;
    puStackY_14 = (undefined *)__setjmp3();
    DAT_005d6c32 = 0;
    uStackY_18 = 0x4a9acf;
    FUN_004a95a0();
                    /* WARNING: Subroutine does not return */
    puStackY_14 = &UNK_004a9ade;
    _longjmp((int *)&DAT_005d6d20,3);
  }
  DAT_005d6cc0 = 1;
  iVar2 = FUN_004ab1e0();
  if (iVar2 != 0) {
    puStackY_14 = (undefined *)0x0;
    uStackY_18 = 0x4a9a98;
    uVar3 = FUN_004a9b80();
    return uVar3;
  }
  DAT_005d6d6a = 0xff;
  DAT_005d6c29 = 3;
  return 8;
}

