// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2d30
// entry: 004a2d30  size: 901


void FUN_004a2d30(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 2) * 0x1c,7);
  if (cVar2 != '\0') {
    iVar4 = *(ushort *)(param_1 + 2) + 1;
    iVar6 = iVar4 * 0x1c;
    cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    for (; (cVar2 != '\0' && (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x1e))); iVar4 = iVar4 + 1) {
      cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 2) * 0x1c,8);
      if (cVar2 == '\0') {
        iVar1 = *(int *)(param_1 + 0x20);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x20);
      }
      FUN_004a0620(iVar6 + iVar1,8,cVar2 == '\0');
      iVar6 = iVar6 + 0x1c;
      cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    }
  }
  cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 2) * 0x1c,6);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 2) * 0x1c,8),
     cVar2 == '\0')) {
    iVar4 = *(ushort *)(param_1 + 2) + 1;
    iVar6 = iVar4 * 0x1c;
    cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    for (; (cVar2 != '\0' && (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x1e))); iVar4 = iVar4 + 1) {
      cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),8);
      iVar6 = iVar6 + 0x1c;
      iVar5 = iVar5 + (uint)(cVar2 == '\0');
      cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    }
    iVar4 = *(ushort *)(param_1 + 2) - 1;
    iVar6 = iVar4 * 0x1c;
    cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    for (; (cVar2 != '\0' && (iVar4 != 0)); iVar4 = iVar4 + -1) {
      cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),8);
      iVar6 = iVar6 + -0x1c;
      iVar5 = iVar5 + (uint)(cVar2 == '\0');
      cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    }
    FUN_004a0620(iVar4 * 0x1c + *(int *)(param_1 + 0x20),8,1);
    if (iVar5 != 0) {
      FUN_004a0620(iVar4 * 0x1c + *(int *)(param_1 + 0x20),0xd,1);
    }
  }
  cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 2) * 0x1c,6);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 2) * 0x1c,8),
     cVar2 != '\0')) {
    iVar4 = *(ushort *)(param_1 + 2) + 1;
    iVar6 = iVar4 * 0x1c;
    cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    for (; (cVar2 != '\0' && (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x1e))); iVar4 = iVar4 + 1) {
      uVar3 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),8);
      iVar6 = iVar6 + 0x1c;
      iVar5 = iVar5 + (uVar3 & 0xff);
      cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    }
    iVar4 = *(ushort *)(param_1 + 2) - 1;
    iVar6 = iVar4 * 0x1c;
    cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    for (; (cVar2 != '\0' && (iVar4 != 0)); iVar4 = iVar4 + -1) {
      uVar3 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),8);
      iVar6 = iVar6 + -0x1c;
      iVar5 = iVar5 + (uVar3 & 0xff);
      cVar2 = FUN_004a0820(iVar6 + *(int *)(param_1 + 0x20),6);
    }
    if (iVar5 == 0) {
      FUN_004a0620(*(int *)(param_1 + 0x20) + iVar4 * 0x1c,8,0);
      FUN_004a15d0(param_1);
      return;
    }
    FUN_004a0620(iVar4 * 0x1c + *(int *)(param_1 + 0x20),8,1);
    FUN_004a0620(iVar4 * 0x1c + *(int *)(param_1 + 0x20),0xd,1);
  }
  FUN_004a15d0(param_1);
  return;
}

