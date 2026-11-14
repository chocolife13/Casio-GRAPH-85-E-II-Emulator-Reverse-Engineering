// decompiled from GRAPH85emulator.exe
// function: FUN_0040b5d0 @ 0040b5d0


void __thiscall FUN_0040b5d0(int param_1,int param_2)

{
  int iVar1;
  HANDLE hThread;
  HDC pHVar2;
  HBITMAP pHVar3;
  undefined1 auStack_28 [4];
  undefined **ppuStack_24;
  uint uStack_20;
  uint uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057a998;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x40) != 0) {
    ExceptionList = &pvStack_c;
    iVar1 = FUN_00526330();
    if (iVar1 != 0) goto LAB_0040b649;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  SetTimer(*(HWND *)(param_1 + 0x1c),0x113,500,(TIMERPROC)0x0);
  FUN_00526340(1);
  hThread = (HANDLE)FUN_00554772(0,0,FUN_004a94a0,0,0,auStack_28);
  *(HANDLE *)(param_1 + 0x80) = hThread;
  SetThreadPriority(hThread,-2);
LAB_0040b649:
  FUN_00569bbe();
  uStack_20 = 0;
  ppuStack_24 = &PTR_LAB_0057c870;
  uStack_4._0_1_ = 1;
  uStack_4._1_3_ = 0;
  if (param_2 == 0) {
    pHVar2 = (HDC)0x0;
  }
  else {
    pHVar2 = *(HDC *)(param_2 + 4);
  }
  pHVar2 = CreateCompatibleDC(pHVar2);
  FUN_00569c75(pHVar2);
  iVar1 = FUN_0057497f();
  pHVar3 = LoadBitmapA(*(HINSTANCE *)(iVar1 + 0xc),(LPCSTR)0x82);
  FUN_0056a6e5(pHVar3);
  FUN_00569db6(uStack_18,-(uint)(&stack0x00000000 != (undefined1 *)0x24) & uStack_20);
  BitBlt(*(HDC *)(param_2 + 4),0,0,0x15e,0x304,
         (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x1c) & uStack_18),0,0,0xcc0020);
  FUN_0040d300(0,0xffffffff,0xffffffff);
  ppuStack_24 = &PTR_LAB_0059aee4;
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  FUN_0056a73c();
  uStack_4 = 0xffffffff;
  FUN_00569cf3();
  ExceptionList = pvStack_c;
  return;
}

