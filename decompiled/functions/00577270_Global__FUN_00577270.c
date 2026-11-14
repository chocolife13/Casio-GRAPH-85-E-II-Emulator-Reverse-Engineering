// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577270
// entry: 00577270  size: 79


bool __thiscall FUN_00577270(int param_1,int param_2)

{
  int iVar1;
  
  FUN_005772bf(*(int *)(param_1 + 0x98) == 0);
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 != 0) {
    *(int *)(param_2 + 0xc) = iVar1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x94);
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x98));
    GlobalUnlock(*(HGLOBAL *)(param_1 + 0x94));
  }
  return iVar1 != 0;
}

