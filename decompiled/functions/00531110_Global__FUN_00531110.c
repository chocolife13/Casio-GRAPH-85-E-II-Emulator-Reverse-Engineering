// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00531110
// entry: 00531110  size: 93


byte FUN_00531110(int param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    cVar2 = FUN_004ad350(s__STAT_005be2bc,&DAT_005bdc40,&param_1);
    if (cVar2 != '\0') {
      bVar3 = FUN_004abb50(s__STAT_005be2bc,&DAT_005bdc40,0xc,iVar1);
      return bVar3;
    }
    bVar3 = FUN_004ac2f0(0xc,iVar1,0);
    if (2 < bVar3) {
      return bVar3;
    }
  }
  return 0;
}

