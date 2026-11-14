// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056be61
// entry: 0056be61  size: 94


undefined4 FUN_0056be61(int param_1,int param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  
  pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
  uVar2 = FUN_00563433(pHVar1);
  iVar3 = FUN_00567a2c(&PTR_s_CSplitterWnd_0059c230);
  if (iVar3 != 0) {
    if (param_2 != 0) {
      return uVar2;
    }
    do {
      pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
      param_1 = FUN_00563433(pHVar1);
      if (param_1 == 0) {
        return uVar2;
      }
      BVar4 = IsIconic(*(HWND *)(param_1 + 0x1c));
    } while (BVar4 == 0);
  }
  return 0;
}

