// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a01f0
// entry: 004a01f0  size: 72


int FUN_004a01f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1000;
  iVar1 = FUN_004071f0(1000,0x1c);
  *(int *)(param_1 + 0x20) = iVar1;
  while( true ) {
    if (iVar1 != 0) {
      *(short *)(param_1 + 0x1e) = (short)iVar2;
      return iVar2;
    }
    iVar2 = iVar2 + -10;
    if (iVar2 == 0) break;
    iVar1 = FUN_004071f0(iVar2,0x1c);
    *(int *)(param_1 + 0x20) = iVar1;
  }
  *(undefined2 *)(param_1 + 0x1e) = 0;
  return 0;
}

