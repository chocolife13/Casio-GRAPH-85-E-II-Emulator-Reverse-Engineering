// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00559a37
// entry: 00559a37  size: 49


void FUN_00559a37(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_00559a02(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}

