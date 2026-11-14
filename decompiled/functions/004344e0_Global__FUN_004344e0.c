// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004344e0
// entry: 004344e0  size: 51


void FUN_004344e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  iVar2 = *(int *)(param_1 + 4);
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      iVar1 = iVar1 + 1;
      FUN_00476ef0(1,iVar1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar1 <= *(int *)(param_1 + 0x1c));
  }
  return;
}

