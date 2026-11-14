// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040d300
// entry: 0040d300  size: 471


void __thiscall FUN_0040d300(int param_1,int param_2)

{
  HDC pHVar1;
  int iVar2;
  int iVar3;
  HBITMAP pHVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uStack_30;
  undefined1 auStack_24 [8];
  int iStack_1c;
  int iStack_18;
  undefined4 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057aaa8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x58) == 0) {
    ExceptionList = &local_c;
    FUN_00569bbe();
    local_4 = 0;
    pHVar1 = GetDC(*(HWND *)(param_1 + 0x1c));
    iVar2 = FUN_00569c60(pHVar1);
    if (iVar2 != 0) {
      local_4 = CONCAT31(local_4._1_3_,1);
      pHVar1 = CreateCompatibleDC(*(HDC *)(iVar2 + 4));
      FUN_00569c75(pHVar1);
      iVar3 = FUN_0057497f();
      pHVar4 = LoadBitmapA(*(HINSTANCE *)(iVar3 + 0xc),(LPCSTR)0x84);
      FUN_0056a6e5(pHVar4);
      GetObjectA((HANDLE)0x0,0x18,auStack_24);
      puStack_10 = (undefined4 *)FUN_00566937(iStack_1c * iStack_18);
      GetBitmapBits((HBITMAP)0x0,iStack_1c * iStack_18,puStack_10);
      if (param_2 == 1) {
        puVar5 = &DAT_005cd75c;
        for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = 0xffffffff;
          puVar5 = puVar5 + 1;
        }
      }
      puVar5 = &DAT_005cd75c;
      puVar6 = puStack_10;
      for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      SetBitmapBits((HBITMAP)0x0,iStack_1c * iStack_18,puStack_10);
      FUN_00569db6(uStack_30,0);
      StretchBlt(*(HDC *)(iVar2 + 4),0x2c,0x53,0x100,0x80,
                 (HDC)(-(uint)(&stack0x00000000 != (undefined1 *)0x34) & uStack_30),0,0,0x80,0x40,
                 0xcc0020);
      ReleaseDC(*(HWND *)(param_1 + 0x1c),*(HDC *)(iVar2 + 4));
      FUN_00566960(puStack_10);
      if (*(int *)(param_1 + 0x84) != 0) {
        FUN_004060f0(&DAT_005cd75c,*(undefined4 *)(param_1 + 0x60),param_1);
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0056a73c();
    }
    local_4 = 0xffffffff;
    FUN_00569cf3();
  }
  ExceptionList = local_c;
  return;
}

