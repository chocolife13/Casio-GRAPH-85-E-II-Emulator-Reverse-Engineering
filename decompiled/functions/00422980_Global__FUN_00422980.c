// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00422980
// entry: 00422980  size: 71


void FUN_00422980(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = FUN_00421eb0(&DAT_005abcf8,param_1);
  if (iVar1 == 0) {
    ppuVar2 = &PTR_DAT_005be020;
    while( true ) {
      iVar1 = FUN_00421eb0(*ppuVar2,param_2);
      if (iVar1 == 0) break;
      ppuVar2 = ppuVar2 + 1;
      if (0x5be02b < (int)ppuVar2) {
        return;
      }
    }
    FUN_005183c0();
  }
  return;
}

