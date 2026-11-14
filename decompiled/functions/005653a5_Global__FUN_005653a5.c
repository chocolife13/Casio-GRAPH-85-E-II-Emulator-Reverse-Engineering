// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005653a5
// entry: 005653a5  size: 125


void __fastcall FUN_005653a5(int param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  uint uVar3;
  
  iVar1 = FUN_0057497f();
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(*(int *)(iVar1 + 4) + 0x1c) == param_1)) {
    FUN_00568191();
  }
  iVar1 = FUN_0057497f();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if (*(int *)(pCVar2 + 0x1c) == param_1) {
        iVar1 = FUN_0057633b(&LAB_0057437f);
        if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
          (**(code **)(iVar1 + 0x1c))();
        }
      }
    }
  }
  uVar3 = FUN_005661de();
  if ((uVar3 & 0x40000000) == 0) {
    FUN_00564bff(*(undefined4 *)(param_1 + 0x1c),0x15,0,0,1,1);
  }
  FUN_0056339a();
  return;
}

