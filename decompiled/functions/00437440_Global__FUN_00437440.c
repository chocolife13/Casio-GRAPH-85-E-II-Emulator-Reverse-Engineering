// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00437440
// entry: 00437440  size: 155


void FUN_00437440(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = param_1;
  param_1._0_1_ = (*(char *)(param_1 + 0x18) - *(char *)(param_1 + 8)) + 1;
  if (4 < (byte)param_1) {
    param_1._0_1_ = 4;
  }
  FUN_00435ee0((byte)param_1);
  iVar1 = *(int *)(iVar3 + 4);
  bVar2 = (*(int *)(iVar3 + 0x14) - iVar1) + 1 < param_2;
  if (bVar2) {
    cVar4 = (*(char *)(iVar3 + 0x14) - *(char *)(iVar3 + 4)) + '\x01';
  }
  else {
    cVar4 = (char)param_2 + -1;
  }
  FUN_00435e30(1,cVar4,bVar2,iVar1 == 1);
  iVar3 = *(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 8);
  if (iVar3 < 4) {
    FUN_00435e30(iVar3 + 2,cVar4,bVar2,iVar1 == 1);
  }
  return;
}

