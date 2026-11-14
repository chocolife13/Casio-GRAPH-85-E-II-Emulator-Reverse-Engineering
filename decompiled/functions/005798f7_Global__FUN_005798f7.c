// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005798f7
// entry: 005798f7  size: 112


undefined4 __thiscall FUN_005798f7(int param_1,int param_2)

{
  HGDIOBJ pvVar1;
  HGDIOBJ pvVar2;
  undefined4 uVar3;
  
  pvVar1 = GetStockObject(param_2);
  if ((param_2 < 10) || ((0xe < param_2 && ((param_2 < 0x10 || (0x11 < param_2)))))) {
    if (*(HDC *)(param_1 + 4) != (HDC)0x0) {
      SelectObject(*(HDC *)(param_1 + 4),pvVar1);
    }
    pvVar1 = SelectObject(*(HDC *)(param_1 + 8),pvVar1);
    uVar3 = FUN_0056a6d0(pvVar1);
  }
  else {
    pvVar2 = SelectObject(*(HDC *)(param_1 + 8),pvVar1);
    uVar3 = FUN_0056a6d0(pvVar2);
    if (*(HGDIOBJ *)(param_1 + 0x2c) != pvVar1) {
      *(HGDIOBJ *)(param_1 + 0x2c) = pvVar1;
      FUN_00579967();
    }
  }
  return uVar3;
}

