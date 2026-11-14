// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056671d
// entry: 0056671d  size: 144


void __thiscall FUN_0056671d(int param_1,int param_2)

{
  HWND pHVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      pHVar1 = GetFocus();
      if (pHVar1 == *(HWND *)(iVar2 + 0x1c)) {
        pHVar1 = GetParent(*(HWND *)(iVar2 + 0x1c));
        iVar2 = FUN_00563433(pHVar1);
        pHVar1 = *(HWND *)(param_1 + 0x14);
        if (pHVar1 != (HWND)0x0) {
          pHVar1 = (HWND)pHVar1[7].unused;
        }
        pHVar1 = GetNextDlgTabItem(*(HWND *)(iVar2 + 0x1c),pHVar1,0);
        FUN_00563433(pHVar1);
        FUN_005663ab();
      }
    }
    FUN_00566384(param_2);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return;
    }
    EnableMenuItem(*(HMENU *)(*(int *)(param_1 + 0xc) + 4),*(UINT *)(param_1 + 8),
                   (-(uint)(param_2 != 0) & 0xfffffffd) + 3 | 0x400);
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}

