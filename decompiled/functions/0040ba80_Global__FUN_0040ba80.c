// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040ba80
// entry: 0040ba80  size: 342


void FUN_0040ba80(HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  HBITMAP pHVar2;
  HDC pHVar3;
  int iVar4;
  BOOL BVar5;
  HANDLE hMem;
  CDC aCStack_1c [4];
  HDC pHStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057aa18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_00566937(8);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 0;
    *piVar1 = (int)&PTR_LAB_0057c870;
  }
  pHVar2 = CreateCompatibleBitmap((HDC)param_1[1].unused,param_4,param_5);
  FUN_0056a6e5(pHVar2);
  FUN_00569bbe();
  uStack_4 = 0;
  if (param_1 == (HDC)0x0) {
    pHVar3 = (HDC)0x0;
  }
  else {
    pHVar3 = (HDC)param_1[1].unused;
  }
  pHVar3 = CreateCompatibleDC(pHVar3);
  FUN_00569c75(pHVar3);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = piVar1[1];
  }
  iVar4 = FUN_00569db6(pHStack_18,iVar4);
  if (param_1 != (HDC)0x0) {
    param_1 = (HDC)param_1[1].unused;
  }
  BitBlt(pHStack_18,0,0,param_4,param_5,param_1,param_2,param_3,0xcc0020);
  if (iVar4 != 0) {
    iVar4 = *(int *)(iVar4 + 4);
  }
  FUN_00569db6(pHStack_18,iVar4);
  CDC::DeleteDC(aCStack_1c);
  BVar5 = OpenClipboard((HWND)0x0);
  if (BVar5 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  else {
    EmptyClipboard();
    if (piVar1 == (int *)0x0) {
      hMem = (HANDLE)0x0;
    }
    else {
      hMem = (HANDLE)piVar1[1];
    }
    SetClipboardData(2,hMem);
    CloseClipboard();
    Detach();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  uStack_4 = 0xffffffff;
  FUN_00569cf3();
  ExceptionList = pvStack_c;
  return;
}

