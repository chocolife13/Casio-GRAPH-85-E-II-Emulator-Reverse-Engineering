// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040bbe0
// entry: 0040bbe0  size: 382


void __fastcall FUN_0040bbe0(int param_1)

{
  HDC pHVar1;
  int iVar2;
  int iVar3;
  HBITMAP pHVar4;
  undefined1 *puVar5;
  undefined1 local_34 [4];
  undefined4 uStack_30;
  undefined1 auStack_24 [8];
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aa48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00569bbe();
  local_4 = 0;
  pHVar1 = GetDC(*(HWND *)(param_1 + 0x1c));
  iVar2 = FUN_00569c60(pHVar1);
  if (iVar2 != 0) {
    local_4._0_1_ = 1;
    pHVar1 = CreateCompatibleDC(*(HDC *)(iVar2 + 4));
    FUN_00569c75(pHVar1);
    iVar3 = FUN_0057497f();
    pHVar4 = LoadBitmapA(*(HINSTANCE *)(iVar3 + 0xc),(LPCSTR)0x84);
    FUN_0056a6e5(pHVar4);
    GetObjectA((HANDLE)0x0,0x18,auStack_24);
    puStack_10 = (undefined1 *)FUN_00566937(iStack_1c * iStack_18);
    GetBitmapBits((HBITMAP)0x0,iStack_1c * iStack_18,puStack_10);
    iVar3 = 0;
    puVar5 = puStack_10;
    do {
      *puVar5 = *(undefined1 *)((int)&DAT_005cd75c + iVar3);
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x400);
    SetBitmapBits((HBITMAP)0x0,iStack_1c * iStack_18,puStack_10);
    FUN_00569db6(uStack_30,0);
    ReleaseDC(*(HWND *)(param_1 + 0x1c),*(HDC *)(iVar2 + 4));
    FUN_0040ba80(local_34,0,0,0x80,0x40);
    FUN_00566960(puStack_10);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_0056a73c();
  }
  local_4 = 0xffffffff;
  FUN_00569cf3();
  ExceptionList = pvStack_c;
  return;
}

