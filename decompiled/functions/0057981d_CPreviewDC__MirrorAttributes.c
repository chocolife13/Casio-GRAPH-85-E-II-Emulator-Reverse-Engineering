// decompiled from GRAPH85emulator.exe
// function: CPreviewDC::MirrorAttributes
// entry: 0057981d  size: 218


/* Library Function - Single Match
    protected: void __thiscall CPreviewDC::MirrorAttributes(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CPreviewDC::MirrorAttributes(CPreviewDC *this)

{
  HGDIOBJ pvVar1;
  int iVar2;
  UINT UVar3;
  COLORREF CVar4;
  
  if (*(int *)(this + 4) != 0) {
    pvVar1 = GetStockObject(7);
    pvVar1 = SelectObject(*(HDC *)(this + 8),pvVar1);
    SelectObject(*(HDC *)(this + 8),pvVar1);
    SelectObject(*(HDC *)(this + 4),pvVar1);
    pvVar1 = GetStockObject(4);
    pvVar1 = SelectObject(*(HDC *)(this + 8),pvVar1);
    SelectObject(*(HDC *)(this + 8),pvVar1);
    SelectObject(*(HDC *)(this + 4),pvVar1);
    iVar2 = GetROP2(*(HDC *)(this + 8));
    FUN_00569eda(iVar2);
    iVar2 = GetBkMode(*(HDC *)(this + 8));
    FUN_00569e7e(iVar2);
    UVar3 = GetTextAlign(*(HDC *)(this + 8));
    FUN_0056a314(UVar3);
    iVar2 = GetPolyFillMode(*(HDC *)(this + 8));
    FUN_00569eac(iVar2);
    iVar2 = GetStretchBltMode(*(HDC *)(this + 8));
    FUN_00569f08(iVar2);
    CVar4 = GetTextColor(*(HDC *)(this + 8));
    CVar4 = GetNearestColor(*(HDC *)(this + 8),CVar4);
    (**(code **)(*(int *)this + 0x30))(CVar4);
    CVar4 = GetBkColor(*(HDC *)(this + 8));
    CVar4 = GetNearestColor(*(HDC *)(this + 8),CVar4);
    (**(code **)(*(int *)this + 0x2c))(CVar4);
  }
  return;
}

