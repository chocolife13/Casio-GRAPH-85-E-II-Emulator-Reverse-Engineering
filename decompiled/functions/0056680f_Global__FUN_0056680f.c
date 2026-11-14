// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056680f
// entry: 0056680f  size: 86


void __thiscall FUN_0056680f(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 4))(param_2 != 0);
  if ((param_1[3] != 0) && (param_1[4] == 0)) {
    if ((DAT_005d50f8 == (HBITMAP)0x0) && (FUN_005743af(), DAT_005d50f8 == (HBITMAP)0x0)) {
      return;
    }
    SetMenuItemBitmaps(*(HMENU *)(param_1[3] + 4),param_1[2],0x400,(HBITMAP)0x0,DAT_005d50f8);
  }
  return;
}

