// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00432fa0
// entry: 00432fa0  size: 82


undefined4 FUN_00432fa0(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  char cVar2;
  undefined **ppuVar3;
  int iVar4;
  
  cVar2 = FUN_00526090(0x18);
  iVar4 = 0;
  if (PTR_DAT_0057ea94 != (undefined *)0x0) {
    ppuVar3 = &PTR_DAT_0057ea94;
    do {
      if (*(char *)(ppuVar3 + -1) == cVar2) break;
      ppuVar1 = ppuVar3 + 2;
      ppuVar3 = ppuVar3 + 2;
      iVar4 = iVar4 + 1;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  FUN_004b6ef0(param_1,param_2);
  FUN_004b6e70(param_1,(&PTR_DAT_0057ea94)[iVar4 * 2]);
  return param_1;
}

