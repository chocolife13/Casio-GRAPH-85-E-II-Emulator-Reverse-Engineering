// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00408040
// entry: 00408040  size: 103


void FUN_00408040(undefined1 *param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_1 = 0;
  iVar1 = FUN_00413ad0(&local_10);
  if (iVar1 != 0) {
    if (DAT_005cdba4 == 1) {
      FUN_00553f40(param_1,s__2D_cursor_Xdot_Ydot____d__d___005a8f50,DAT_005cd744,DAT_005cd748);
      return;
    }
    FUN_00553f40(param_1,s__Text_cursor_x_y____d__d___005a8f34,local_10,local_c);
  }
  return;
}

