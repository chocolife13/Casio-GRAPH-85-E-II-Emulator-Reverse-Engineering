// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00496ab0
// entry: 00496ab0  size: 156


void FUN_00496ab0(int param_1,int param_2,int param_3,int param_4)

{
  int local_428;
  int local_424;
  int local_420;
  int local_41c;
  undefined1 *local_418;
  undefined1 local_414;
  undefined1 local_413;
  int local_410;
  int local_40c;
  int local_408;
  int local_404;
  undefined1 local_400 [1024];
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (0x38 < param_2 + param_4) {
    param_4 = 0x38 - param_2;
  }
  local_404 = param_2 + -1 + param_4;
  local_408 = param_1 + -1 + param_3;
  local_410 = param_1;
  local_40c = param_2;
  FUN_004121d0(&local_410,local_400);
  local_418 = local_400;
  local_428 = param_1;
  local_420 = param_3;
  local_414 = 2;
  local_413 = 1;
  local_424 = param_2;
  local_41c = param_4;
  FUN_004121a0(&local_428);
  return;
}

