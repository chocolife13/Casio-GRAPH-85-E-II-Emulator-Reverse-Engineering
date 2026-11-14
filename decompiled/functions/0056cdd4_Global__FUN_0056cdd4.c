// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056cdd4
// entry: 0056cdd4  size: 139


void __thiscall FUN_0056cdd4(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  tagRECT local_14;
  
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = FUN_005661de();
    if ((uVar1 & 0x300000) != 0) {
      FUN_00564c7c(0,0,1);
      FUN_00564c7c(1,0,1);
      FUN_00564d37(3,0);
    }
  }
  GetClientRect(*(HWND *)(param_1 + 0x1c),&local_14);
  *(LONG *)(param_1 + 0x4c) = local_14.right - local_14.left;
  *(LONG *)(param_1 + 0x50) = local_14.bottom - local_14.top;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_0056d2b4();
    InvalidateRect(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,1);
  }
  return;
}

