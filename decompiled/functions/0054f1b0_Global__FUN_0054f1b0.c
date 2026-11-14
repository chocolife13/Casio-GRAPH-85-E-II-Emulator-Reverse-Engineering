// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054f1b0
// entry: 0054f1b0  size: 173


void FUN_0054f1b0(int param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  
  if (param_2 != (short *)0x0) {
    psVar1 = (short *)(param_1 + 0x26);
    iVar2 = 3;
    do {
      if (psVar1[-3] == 1) {
        psVar1[-1] = *param_2;
        *psVar1 = param_2[1];
        psVar1[1] = *param_2;
        psVar1[2] = param_2[3];
        if (*param_2 + 1 <= (int)param_2[2]) {
          psVar1[3] = *param_2 + 1;
          psVar1[4] = param_2[1];
          psVar1[5] = *param_2 + 1;
          psVar1[6] = param_2[3];
        }
        if (*param_2 + 2 <= (int)param_2[2]) {
          psVar1[7] = *param_2 + 2;
          psVar1[8] = param_2[1];
          psVar1[9] = *param_2 + 2;
          psVar1[10] = param_2[3];
        }
      }
      psVar1 = psVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

