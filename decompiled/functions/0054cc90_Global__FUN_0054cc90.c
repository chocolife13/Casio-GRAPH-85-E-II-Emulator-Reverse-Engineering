// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054cc90
// entry: 0054cc90  size: 180


void FUN_0054cc90(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  
  sVar4 = 1;
  if (*param_1 < param_2[1]) {
    *param_1 = 1;
  }
  else {
    *param_1 = (*param_1 - param_2[1]) + 1;
  }
  if (param_1[2] < param_2[2]) {
    param_1[2] = 1;
  }
  else {
    param_1[2] = (param_1[2] - param_2[2]) + 1;
  }
  sVar1 = param_2[1];
  sVar2 = param_1[1];
  if ((int)sVar2 < sVar1 + 3) {
    if (sVar2 < sVar1) {
      sVar4 = 0;
    }
    else {
      param_1[1] = (sVar2 - sVar1) + 1;
    }
  }
  else {
    param_1[1] = 4;
  }
  sVar1 = param_2[2];
  sVar2 = *param_2;
  sVar3 = param_1[3];
  if (sVar2 + -1 + (int)sVar1 <= (int)sVar3) {
    param_1[4] = sVar4;
    param_1[3] = sVar2;
    return;
  }
  if (sVar1 <= sVar3) {
    param_1[4] = sVar4;
    param_1[3] = (sVar3 - sVar1) + 1;
    return;
  }
  param_1[4] = 0;
  return;
}

