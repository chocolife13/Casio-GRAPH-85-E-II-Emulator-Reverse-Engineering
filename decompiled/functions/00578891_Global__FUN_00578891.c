// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578891
// entry: 00578891  size: 146


void __thiscall FUN_00578891(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0xf4) = param_2;
  uVar1 = (uint)*(ushort *)(*(int *)(**(int **)(param_1 + 0x114) + 0x5c) + 0x1e);
  if (uVar1 < param_2) {
    *(uint *)(param_1 + 0xf4) = uVar1;
  }
  uVar1 = (uint)*(ushort *)(*(int *)(**(int **)(param_1 + 0x114) + 0x5c) + 0x1c);
  if (*(uint *)(param_1 + 0xf4) < uVar1) {
    *(uint *)(param_1 + 0xf4) = uVar1;
  }
  if (*(int *)(param_1 + 0xec) == 0) {
    FUN_00564c7c(1,*(undefined4 *)(param_1 + 0xf4),1);
  }
  if (param_3 != 0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0xf0) != 0) {
      iVar2 = 0;
      do {
        uVar1 = uVar1 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x18 + iVar2) = 0;
        iVar2 = iVar2 + 0x28;
      } while (uVar1 < *(uint *)(param_1 + 0xf0));
    }
  }
  InvalidateRect(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,1);
  return;
}

