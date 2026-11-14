// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00566cbd
// entry: 00566cbd  size: 267


bool __thiscall FUN_00566cbd(int param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if ((iVar3 != 0) && (*(HWND *)(iVar3 + 0x1c) != (HWND)0x0)) {
      BVar1 = IsWindowVisible(*(HWND *)(iVar3 + 0x1c));
      if (BVar1 != 0) {
        FUN_00563272(iVar3,*(undefined4 *)(iVar3 + 0x1c),0x363,1,0);
        FUN_00564bff(*(undefined4 *)(iVar3 + 0x1c),0x363,1,0,1,1);
      }
    }
    FUN_0057497f();
    iVar2 = FUN_005762a6(&LAB_005749f1);
    for (iVar2 = *(int *)(iVar2 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x54)) {
      if ((*(int *)(iVar2 + 0x1c) != 0) && (iVar2 != iVar3)) {
        if (*(int *)(iVar2 + 0x88) == 0) {
          FUN_00566342(0);
        }
        BVar1 = IsWindowVisible(*(HWND *)(iVar2 + 0x1c));
        if ((BVar1 != 0) || (-1 < *(int *)(iVar2 + 0x88))) {
          FUN_00563272(iVar2,*(undefined4 *)(iVar2 + 0x1c),0x363,1,0);
          FUN_00564bff(*(undefined4 *)(iVar2 + 0x1c),0x363,1,0,1,1);
        }
        if (0 < *(int *)(iVar2 + 0x88)) {
          FUN_00566342(*(int *)(iVar2 + 0x88));
        }
        *(undefined4 *)(iVar2 + 0x88) = 0xffffffff;
      }
    }
  }
  else {
    FUN_0057497f();
    iVar3 = FUN_005762a6(&LAB_005749f1);
    if (*(int *)(iVar3 + 0x10) == 0) {
      FUN_00567f05();
      FUN_00567f0e(1);
    }
  }
  return param_2 < 0;
}

