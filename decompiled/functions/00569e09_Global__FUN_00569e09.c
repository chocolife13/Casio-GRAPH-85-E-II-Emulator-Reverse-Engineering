// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00569e09
// entry: 00569e09  size: 70


void __thiscall FUN_00569e09(int param_1,int param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = (HGDIOBJ)0x0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    if (param_2 != 0) {
      pvVar1 = *(HGDIOBJ *)(param_2 + 4);
    }
    pvVar1 = SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    if (param_2 == 0) {
      pvVar1 = (HGDIOBJ)0x0;
    }
    else {
      pvVar1 = *(HGDIOBJ *)(param_2 + 4);
    }
    pvVar1 = SelectObject(*(HDC *)(param_1 + 8),pvVar1);
  }
  FUN_0056a6d0(pvVar1);
  return;
}

