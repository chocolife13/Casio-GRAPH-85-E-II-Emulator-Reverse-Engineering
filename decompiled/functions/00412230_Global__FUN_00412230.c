// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00412230
// entry: 00412230  size: 88


void FUN_00412230(char *param_1,undefined4 *param_2)

{
  switch(*(undefined1 *)((int)param_2 + 0x11)) {
  case 1:
    *(undefined4 *)(param_1 + 4) = *param_2;
    *(undefined4 *)(param_1 + 8) = param_2[1];
    FUN_004136b0(param_1,param_2);
    break;
  case 2:
  case 3:
  case 4:
    FUN_004122a0(param_1,param_2);
    break;
  case 5:
    FUN_004123e0(param_1,param_2);
    break;
  case 6:
    FUN_004124a0(param_1,param_2);
  }
  if (*param_1 != '\x02') {
    return;
  }
  FUN_00414470();
  return;
}

