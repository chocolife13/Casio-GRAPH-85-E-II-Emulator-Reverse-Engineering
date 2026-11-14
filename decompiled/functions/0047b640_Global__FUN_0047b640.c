// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047b640
// entry: 0047b640  size: 77


undefined4 FUN_0047b640(short *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = 1;
  *param_2 = 0;
  iVar4 = 0;
  psVar3 = param_1;
  do {
    psVar3 = psVar3 + 7;
    iVar5 = iVar4;
    if ((*psVar3 == 1) && (iVar5 = iVar4 + 1, iVar4 == 0)) {
      *param_2 = iVar1;
    }
    iVar1 = iVar1 + 1;
    iVar4 = iVar5;
  } while (iVar1 < 4);
  if (1 < iVar5) {
    uVar2 = FUN_0047b690(param_2,param_1,param_3);
    return uVar2;
  }
  return 0;
}

