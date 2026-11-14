// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040aca0
// entry: 0040aca0  size: 83


void FUN_0040aca0(int param_1,int param_2)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x7f < param_1) {
    param_1 = 0x7f;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x3f < param_2) {
    param_2 = 0x3f;
  }
  DAT_005cdba4 = 1;
  DAT_005cd744 = param_1;
  DAT_005cd748 = param_2;
  FUN_00413a10(param_1,param_2);
  FUN_00413ac0(1);
  return;
}

