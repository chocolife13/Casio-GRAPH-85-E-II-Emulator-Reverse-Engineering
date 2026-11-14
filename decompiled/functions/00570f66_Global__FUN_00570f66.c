// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00570f66
// entry: 00570f66  size: 45


int __fastcall FUN_00570f66(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x84)) {
    do {
      iVar1 = FUN_00571542(iVar3);
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x84));
  }
  return iVar2;
}

