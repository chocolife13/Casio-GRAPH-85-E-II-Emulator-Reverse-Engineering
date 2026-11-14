// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040b760
// entry: 0040b760  size: 450


undefined4 __thiscall FUN_0040b760(int param_1,undefined4 param_2)

{
  HDC pHVar1;
  int iVar2;
  int iVar3;
  HBITMAP pHVar4;
  short sVar5;
  int local_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a9c8;
  local_c = ExceptionList;
  sVar5 = (short)param_2;
  if (sVar5 != -1) {
    ExceptionList = &local_c;
    FUN_00569bbe();
    local_4 = 1;
    FUN_0040d910(&local_2c,&local_24,param_2,0);
    pHVar1 = GetDC(*(HWND *)(param_1 + 0x1c));
    iVar2 = FUN_00569c60(pHVar1);
    if (iVar2 == 0) {
      pHVar1 = (HDC)0x0;
    }
    else {
      pHVar1 = *(HDC *)(iVar2 + 4);
    }
    pHVar1 = CreateCompatibleDC(pHVar1);
    FUN_00569c75(pHVar1);
    iVar3 = FUN_0057497f();
    pHVar4 = LoadBitmapA(*(HINSTANCE *)(iVar3 + 0xc),(LPCSTR)0x82);
    FUN_0056a6e5(pHVar4);
    FUN_00569db6(uStack_18,0);
    if ((((sVar5 == 0x1b) || (sVar5 == 0x1c)) || (sVar5 == 0x25)) || (sVar5 == 0x26)) {
      BitBlt(*(HDC *)(iVar2 + 4),0xdd,0x140,0x5b,0x4f,
             (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x1c) & uStack_18),0xdb,0x13e,0xcc0020)
      ;
    }
    else {
      BitBlt(*(HDC *)(iVar2 + 4),local_2c,iStack_28,(local_24 - local_2c) + 4,
             (iStack_20 - iStack_28) + 4,
             (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x1c) & uStack_18),local_2c + -2,
             iStack_28 + -2,0xcc0020);
    }
    ReleaseDC(*(HWND *)(param_1 + 0x1c),*(HDC *)(iVar2 + 4));
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0056a73c();
    local_4 = 0xffffffff;
    FUN_00569cf3();
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}

