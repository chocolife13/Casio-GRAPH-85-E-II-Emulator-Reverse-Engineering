// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040f130
// entry: 0040f130  size: 211


void __thiscall FUN_0040f130(int param_1,undefined4 param_2,LONG param_3,LONG param_4)

{
  int iVar1;
  HMENU pHVar2;
  CWinThread *pCVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0057abe0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0057497f();
  pHVar2 = LoadMenuA(*(HINSTANCE *)(iVar1 + 0xc),(LPCSTR)0x92);
  FUN_005679b6(pHVar2);
  pHVar2 = GetSubMenu((HMENU)0x0,0);
  FUN_00567983(pHVar2);
  ClientToScreen(*(HWND *)(param_1 + 0x1c),(LPPOINT)&param_3);
  pCVar3 = AfxGetThread();
  if (pCVar3 == (CWinThread *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*(int *)pCVar3 + 0x74))();
  }
  FUN_00563edb(2,param_3,param_4,uVar4,0);
  FUN_0056339a();
  local_4 = 1;
  FUN_00567a0d();
  ExceptionList = pvStack_c;
  return;
}

