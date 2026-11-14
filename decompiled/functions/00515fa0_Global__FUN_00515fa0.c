// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515fa0
// entry: 00515fa0  size: 114


int FUN_00515fa0(int param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  
  cVar2 = FUN_005260a0();
  if (cVar2 == '\x01') {
    ppuVar5 = &PTR_DAT_0058c264;
  }
  else if (cVar2 == '\x02') {
    ppuVar5 = &PTR_DAT_0058c270;
  }
  else {
    ppuVar5 = &PTR_DAT_0058c258;
  }
  iVar4 = 3;
  iVar3 = param_1 + 0x54;
  do {
    puVar1 = *ppuVar5;
    ppuVar5 = ppuVar5 + 1;
    FUN_004e4c30(puVar1,iVar3);
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 0xc;
  } while (iVar4 != 0);
  if (param_2 == 0) {
    iVar3 = FUN_00515f00(param_1);
  }
  else {
    iVar3 = FUN_00515e50();
  }
  if (iVar3 == 0) {
    FUN_00516ae0();
  }
  return iVar3;
}

