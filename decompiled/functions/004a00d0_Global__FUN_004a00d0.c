// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a00d0
// entry: 004a00d0  size: 129


void FUN_004a00d0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (0 < param_3) {
    *param_1 = 0;
    param_1[1] = 0;
    puVar3 = param_1;
    puVar4 = param_1 + 2;
    for (uVar1 = param_3 * 0x30 - 8U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  iVar5 = 0;
  puVar3 = param_1;
  if (0 < param_3) {
    do {
      iVar2 = 6;
      puVar4 = puVar3;
      do {
        *puVar4 = *(undefined4 *)((param_2 - (int)param_1) + (int)puVar4);
        puVar4[1] = *(undefined4 *)((param_2 - (int)param_1) + 4 + (int)puVar4);
        puVar4 = puVar4 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      FUN_00538860(iVar5,puVar3);
      iVar5 = iVar5 + 1;
      puVar3 = puVar4;
    } while (iVar5 < param_3);
  }
  return;
}

