// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a99a0
// entry: 004a99a0  size: 105


undefined4 FUN_004a99a0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = FUN_004a9850(param_1);
  if (iVar2 == 0) {
    return 6;
  }
  if (*(int *)(puVar1 + 2) != 0) {
    iVar2 = FUN_00410440(*(int *)(puVar1 + 2),&param_1);
    if ((iVar2 == 0x42) || (iVar2 == 0)) {
      if (*puVar1 < 0x11) {
        DAT_005d6d6c = *(undefined4 *)(puVar1 + 6);
        DAT_005d6cc8 = 0;
      }
      else {
        DAT_005d6cc8 = SUB42(param_1,0);
      }
      DAT_005d6cca = puVar1[1];
      return 0;
    }
  }
  return 1;
}

