// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056de9c
// entry: 0056de9c  size: 95


void __thiscall FUN_0056de9c(int param_1,int param_2)

{
  HCURSOR pHVar1;
  
  FUN_00576699(2);
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + param_2;
  if (*(int *)(param_1 + 0xa0) < 1) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    SetCursor(*(HCURSOR *)(param_1 + 0xa4));
  }
  else {
    pHVar1 = SetCursor(DAT_005d50e4);
    if ((0 < param_2) && (*(int *)(param_1 + 0xa0) == 1)) {
      *(HCURSOR *)(param_1 + 0xa4) = pHVar1;
    }
  }
  FUN_00576709(2);
  return;
}

