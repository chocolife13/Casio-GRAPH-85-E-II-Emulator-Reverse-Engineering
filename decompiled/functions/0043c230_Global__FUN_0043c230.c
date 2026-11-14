// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043c230
// entry: 0043c230  size: 116


void FUN_0043c230(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined4 *)(param_2 + 0x18) = 1;
  *(undefined4 *)(param_2 + 0x58) = 1;
  iVar3 = FUN_0043c1d0(*(int *)(param_2 + 8) + *(int *)(param_2 + 0xc) * -2 + 1 + param_1,param_2);
  iVar2 = *(int *)(param_2 + 0x2d8);
  uVar5 = *(uint *)(param_2 + 0x18);
  while( true ) {
    if (0x14 < uVar5) {
      return;
    }
    cVar1 = *(char *)(*(int *)(param_2 + 0x58) + -1 + iVar3 + iVar2);
    if (cVar1 == '\r') break;
    if (cVar1 == '\f') {
      return;
    }
    iVar4 = FUN_004b6ab0(CONCAT31((int3)(uVar5 >> 8),cVar1));
    if (iVar4 != 0) {
      *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
    }
    uVar5 = *(int *)(param_2 + 0x18) + 1;
    *(uint *)(param_2 + 0x18) = uVar5;
    *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
  }
  return;
}

