// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a15d0
// entry: 004a15d0  size: 135


void FUN_004a15d0(uint param_1)

{
  short *psVar1;
  ushort *puVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  
  iVar3 = param_1;
  bVar5 = *(byte *)(param_1 + 0x29);
  if (bVar5 != 0) {
    psVar1 = (short *)(param_1 + 2);
    while (param_1 = (uint)bVar5, *psVar1 != *(short *)(iVar3 + 0x10 + param_1 * 2)) {
      bVar5 = bVar5 - 1;
      if (bVar5 == 0) {
        return;
      }
    }
    puVar2 = (ushort *)(iVar3 + 0x10 + param_1 * 2);
    cVar4 = FUN_004a0820(*(int *)(iVar3 + 0x20) + (uint)*puVar2 * 0x1c,8);
    FUN_004a0620(*(int *)(iVar3 + 0x20) + (uint)*puVar2 * 0x1c,8,cVar4 == '\0');
  }
  return;
}

