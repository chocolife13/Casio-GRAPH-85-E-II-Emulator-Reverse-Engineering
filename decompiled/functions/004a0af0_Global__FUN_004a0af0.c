// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a0af0
// entry: 004a0af0  size: 267


int FUN_004a0af0(uint param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = FUN_004a0820(param_1,5);
  if (cVar1 == '\n') {
    return -1;
  }
  bVar2 = FUN_004a0820(param_1,5);
  if (bVar2 != 0xf) {
    iVar3 = (uint)bVar2 * 100000;
  }
  bVar2 = FUN_004a0820(param_1,4);
  if (bVar2 != 0xf) {
    iVar3 = iVar3 + (uint)bVar2 * 10000;
  }
  bVar2 = FUN_004a0820(param_1,3);
  if (bVar2 != 0xf) {
    iVar3 = iVar3 + (uint)bVar2 * 1000;
  }
  bVar2 = FUN_004a0820(param_1,2);
  if (bVar2 != 0xf) {
    iVar3 = iVar3 + (uint)bVar2 * 100;
  }
  bVar2 = FUN_004a0820(param_1,1);
  if (bVar2 != 0xf) {
    iVar3 = iVar3 + (uint)bVar2 * 10;
  }
  bVar2 = FUN_004a0820(param_1,0);
  param_1 = (uint)bVar2;
  if (bVar2 != 0xf) {
    iVar3 = iVar3 + param_1;
  }
  return iVar3;
}

