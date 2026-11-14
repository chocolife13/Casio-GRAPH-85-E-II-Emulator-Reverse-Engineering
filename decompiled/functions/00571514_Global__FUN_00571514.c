// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00571514
// entry: 00571514  size: 46


int __thiscall FUN_00571514(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      if ((iVar1 != param_3) && (*(int *)(*(int *)(param_1 + 0x80) + iVar1 * 4) == param_2)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x84));
  }
  return -1;
}

