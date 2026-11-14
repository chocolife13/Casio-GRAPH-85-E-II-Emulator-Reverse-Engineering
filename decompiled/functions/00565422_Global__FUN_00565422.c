// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00565422
// entry: 00565422  size: 83


void __fastcall FUN_00565422(CWnd *param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  
  iVar1 = FUN_0057497f();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_0057633b(&LAB_0057437f);
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if ((*(CWnd **)(pCVar2 + 0x1c) == param_1) && (*(code **)(iVar1 + 0x24) != (code *)0x0)) {
        (**(code **)(iVar1 + 0x24))();
      }
    }
  }
  DAT_005d333c = 0;
  CWnd::OnDisplayChange(param_1,0,0);
  return;
}

