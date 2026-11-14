// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049dc50
// entry: 0049dc50  size: 53


void FUN_0049dc50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(short *)(param_1 + 0x1e) != 0) {
    iVar2 = 0;
    do {
      FUN_004a0620(*(int *)(param_1 + 0x20) + iVar2,8,1);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x1e));
  }
  return;
}

