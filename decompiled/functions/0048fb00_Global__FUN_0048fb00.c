// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048fb00
// entry: 0048fb00  size: 230


void FUN_0048fb00(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_4;
  iVar4 = 0x37bb94;
  iVar3 = 1;
  iVar2 = 3;
  *param_4 = 0;
  param_1 = param_1 + -0x76d;
  while( true ) {
    for (; -1 < param_1 / 100 + -1; param_1 = param_1 + -100) {
      *param_4 = *param_4 + iVar4;
    }
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
    iVar4 = iVar4 / 10;
    param_1 = (param_1 * 5 & 0x7ffU) << 1;
  }
  iVar4 = *param_4;
  *param_4 = iVar4 / 100;
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      FUN_0048fbf0(iVar3,&param_4);
      if ((iVar3 == 2) && (iVar4 % 100 == 0x4b)) {
        param_4 = (int *)((int)param_4 + 1);
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
      *piVar1 = *piVar1 + (int)param_4;
    } while (param_2 != 0);
    *piVar1 = *piVar1 + param_3;
    return;
  }
  *param_4 = *param_4 + param_3;
  return;
}

