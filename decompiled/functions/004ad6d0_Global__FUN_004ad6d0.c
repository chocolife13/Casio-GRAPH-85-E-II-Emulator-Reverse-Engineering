// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ad6d0
// entry: 004ad6d0  size: 69


void FUN_004ad6d0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = FUN_004ad610(*param_1);
    if ((-1 < iVar1) && ((&DAT_005d5b80)[iVar1] != 0)) {
      FUN_00407170((&DAT_005d5b80)[iVar1]);
      (&DAT_005d5b80)[iVar1] = 0;
      (&DAT_005d5880)[iVar1] = 0;
    }
  }
  return;
}

