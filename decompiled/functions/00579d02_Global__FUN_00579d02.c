// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579d02
// entry: 00579d02  size: 52


int FUN_00579d02(int param_1,uint param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (param_1 - param_4 < *param_3) {
        param_5 = *param_3;
        goto LAB_00579d2b;
      }
      uVar1 = uVar1 + 1;
      param_3 = param_3 + 1;
    } while (uVar1 < param_2);
  }
  param_5 = ((param_1 - param_4) / param_5 + 1) * param_5;
LAB_00579d2b:
  return param_5 + param_4;
}

