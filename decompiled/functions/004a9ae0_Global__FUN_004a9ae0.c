// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9ae0
// entry: 004a9ae0  size: 145


void FUN_004a9ae0(void)

{
  undefined1 *puVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined1 local_404 [1008];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  DAT_005d6c32 = 1;
  DAT_005d6806 = 0;
  DAT_005d6c29 = 0;
  for (puVar1 = local_404; DAT_005d6808 <= puVar1; puVar1 = puVar1 + -1) {
    *puVar1 = 0x55;
  }
  uStack_8 = 0x4a9b16;
  thunk_FUN_00407100();
  DAT_005d6c34 = DAT_005d6cc8;
  DAT_005d6c36 = DAT_005d6cca;
  DAT_005d6cc0 = 2;
  uStack_8 = 0x4a9b3c;
  FUN_004a9de0();
  if (DAT_005d6d68 != 2) {
    uStack_8 = CONCAT22(extraout_var,DAT_005d6c36);
    uStack_c = 1;
    uStack_10 = 1;
    uStack_14 = 0x4a9b6c;
    FUN_004a9b80();
    return;
  }
  uStack_8 = CONCAT22(extraout_var_00,DAT_005d6c36);
  uStack_c = 0;
  uStack_10 = 1;
  uStack_14 = 0x4a9b57;
  FUN_004a9b80();
  return;
}

