// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a410
// entry: 0042a410  size: 35


int FUN_0042a410(short *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = 0;
  sVar2 = *param_1;
  while ((sVar2 != 0 && (sVar2 != -1))) {
    psVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    sVar2 = *psVar1;
  }
  return iVar3;
}

