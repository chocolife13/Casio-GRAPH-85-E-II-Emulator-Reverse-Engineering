// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004060f0
// entry: 004060f0  size: 481


void __thiscall FUN_004060f0(int param_1,undefined4 *param_2,int param_3)

{
  HDC pHVar1;
  int iVar2;
  int iVar3;
  HBITMAP pHVar4;
  undefined4 *puVar5;
  uint uStack_40;
  tagRECT local_34;
  undefined1 auStack_24 [8];
  int iStack_1c;
  int iStack_18;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0057a718;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  GetWindowRect(*(HWND *)(param_1 + 0x1c),&local_34);
  FUN_005662f3(&DAT_005d4c28,local_34.left,local_34.top,param_3 * 0x81 + 4,param_3 * 0x40 + 0x24,
               0x10);
  FUN_00569bbe();
  uStack_4 = 0;
  pHVar1 = GetDC(*(HWND *)(param_1 + 0x1c));
  iVar2 = FUN_00569c60(pHVar1);
  if (iVar2 != 0) {
    uStack_4._0_1_ = 1;
    pHVar1 = CreateCompatibleDC(*(HDC *)(iVar2 + 4));
    FUN_00569c75(pHVar1);
    iVar3 = FUN_0057497f();
    pHVar4 = LoadBitmapA(*(HINSTANCE *)(iVar3 + 0xc),(LPCSTR)0x84);
    FUN_0056a6e5(pHVar4);
    GetObjectA((HANDLE)0x0,0x18,auStack_24);
    puStack_10 = (undefined4 *)FUN_00566937(iStack_1c * iStack_18);
    GetBitmapBits((HBITMAP)0x0,iStack_1c * iStack_18,puStack_10);
    puVar5 = puStack_10;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    SetBitmapBits((HBITMAP)0x0,iStack_1c * iStack_18,puStack_10);
    FUN_00569db6(uStack_40,0);
    StretchBlt(*(HDC *)(iVar2 + 4),0,0,param_3 << 7,param_3 * 0x40,
               (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x44) & uStack_40),0,0,0x80,0x40,
               0xcc0020);
    ReleaseDC(*(HWND *)(param_1 + 0x1c),*(HDC *)(iVar2 + 4));
    FUN_00566960(puStack_10);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    FUN_0056a73c();
  }
  uStack_4 = 0xffffffff;
  FUN_00569cf3();
  ExceptionList = pvStack_c;
  return;
}

