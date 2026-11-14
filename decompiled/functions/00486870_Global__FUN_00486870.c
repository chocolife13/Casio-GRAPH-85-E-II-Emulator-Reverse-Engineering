// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486870
// entry: 00486870  size: 171


undefined4 FUN_00486870(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  short sVar2;
  
  if (param_1 == 0) {
    iVar1 = 0x10;
    sVar2 = *(short *)((int)param_5 + 2);
    param_5[2] = param_5[2] + param_3;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 1) {
        return 1;
      }
      sVar2 = *(short *)((int)param_5 + 6);
      iVar1 = ((int)*(short *)(param_5 + 1) + (int)*(short *)((int)param_5 + 2)) * 4 + 0x10;
      goto LAB_004868f3;
    }
    sVar2 = *(short *)(param_5 + 1);
    iVar1 = *(short *)((int)param_5 + 2) * 4 + 0x10;
    param_5[3] = param_5[3] + param_3;
  }
  *param_4 = *param_5;
  param_4[1] = param_5[1];
  param_4[2] = param_5[2];
  param_4[3] = param_5[3];
LAB_004868f3:
  if ((param_2 <= sVar2) && (0 < param_2)) {
    iVar1 = iVar1 + param_2 * 4;
    *(int *)(iVar1 + -4 + (int)param_4) = *(int *)(iVar1 + -4 + (int)param_4) + param_3;
  }
  return 1;
}

