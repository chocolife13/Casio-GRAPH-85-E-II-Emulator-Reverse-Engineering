// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569dcd
// entry: 00569dcd  size: 60


void __thiscall FUN_00569dcd(int param_1,int param_2)

{
  HGDIOBJ h;
  HGDIOBJ pvVar1;
  
  h = GetStockObject(param_2);
  pvVar1 = (HGDIOBJ)0x0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    pvVar1 = SelectObject(*(HDC *)(param_1 + 4),h);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    pvVar1 = SelectObject(*(HDC *)(param_1 + 8),h);
  }
  FUN_0056a6d0(pvVar1);
  return;
}

