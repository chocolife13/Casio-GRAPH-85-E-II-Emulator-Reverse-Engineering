// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523630
// entry: 00523630  size: 93


void FUN_00523630(int *param_1)

{
  if (param_1[3] == 0) {
    FUN_005232d0(param_1[1],param_1[2]);
  }
  else {
    DAT_005d8681 = (char)param_1[1] + -1;
    DAT_005d8680 = (char)param_1[2] + -1;
  }
  if (*param_1 == -1) {
    FUN_00523740();
    DAT_005cdba4 = param_1[3];
    return;
  }
  FUN_00523690((char)*param_1);
  DAT_005cdba4 = param_1[3];
  return;
}

