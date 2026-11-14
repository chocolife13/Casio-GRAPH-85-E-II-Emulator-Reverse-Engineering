// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040bea0
// entry: 0040bea0  size: 261


void FUN_0040bea0(int param_1)

{
  HDC pHVar1;
  int iVar2;
  HBITMAP pHVar3;
  uint uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aa78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00569bbe();
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (param_1 == 0) {
    pHVar1 = (HDC)0x0;
  }
  else {
    pHVar1 = *(HDC *)(param_1 + 4);
  }
  pHVar1 = CreateCompatibleDC(pHVar1);
  FUN_00569c75(pHVar1);
  iVar2 = FUN_0057497f();
  pHVar3 = LoadBitmapA(*(HINSTANCE *)(iVar2 + 0xc),(LPCSTR)0x82);
  FUN_0056a6e5(pHVar3);
  FUN_00569db6(uStack_18,0);
  BitBlt(*(HDC *)(param_1 + 4),0,0xfa,400,0x26e,
         (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x1c) & uStack_18),0,0xfa,0xcc0020);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0056a73c();
  local_4 = 0xffffffff;
  FUN_00569cf3();
  ExceptionList = pvStack_c;
  return;
}

