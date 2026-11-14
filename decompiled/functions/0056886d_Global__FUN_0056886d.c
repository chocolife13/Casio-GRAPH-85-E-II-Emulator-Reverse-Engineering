// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056886d
// entry: 0056886d  size: 126


void __fastcall FUN_0056886d(int param_1)

{
  int iVar1;
  LPSTR pCVar2;
  int iVar3;
  
  pCVar2 = (LPSTR)FUN_00566937(*(int *)(*(int *)(param_1 + 0x10) + -8) + 5);
  FUN_0057497f();
  iVar3 = 0;
  FUN_0056dd8e(*(undefined4 *)(param_1 + 0xc),0,0);
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar1 = iVar3 + 1;
      wsprintfA(pCVar2,*(LPCSTR *)(param_1 + 0x10),iVar1);
      iVar3 = *(int *)(*(int *)(param_1 + 8) + iVar3 * 4);
      if (*(int *)(iVar3 + -8) != 0) {
        FUN_0056dd8e(*(undefined4 *)(param_1 + 0xc),pCVar2,iVar3);
      }
      iVar3 = iVar1;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  FUN_00566960(pCVar2);
  return;
}

