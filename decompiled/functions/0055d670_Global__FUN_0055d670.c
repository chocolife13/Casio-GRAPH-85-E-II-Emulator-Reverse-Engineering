// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055d670
// entry: 0055d670  size: 130


undefined4 FUN_0055d670(uint param_1,HDC param_2,HWND param_3)

{
  HWND pHVar1;
  LONG LVar2;
  
  if (((DAT_005da960 == 0) || (param_1 < 0x134)) || (param_1 == 0x137)) {
    return 0;
  }
  if (param_1 == 0x134) {
    if (DAT_005da980 < 0x35f) {
      pHVar1 = GetWindow(param_3,5);
      if (pHVar1 != (HWND)0x0) {
        LVar2 = GetWindowLongA(param_3,-0x10);
        if (((byte)LVar2 & 3) != 3) goto LAB_0055d6c4;
      }
    }
    return 0;
  }
LAB_0055d6c4:
  SetTextColor(param_2,DAT_005da990);
  SetBkColor(param_2,DAT_005da988);
  return DAT_005da9a8;
}

