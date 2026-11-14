// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b4910
// entry: 004b4910  size: 121


int FUN_004b4910(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 1;
  *param_1 = 0xf;
  if (param_2 < 0) {
    param_1[1] = 0x87;
  }
  else {
    if (param_3 != 1) goto LAB_004b493c;
    param_1[1] = 0x2b;
  }
  iVar1 = 2;
LAB_004b493c:
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if ((param_2 / 10 != 0) || (param_4 == 0)) {
    param_1[iVar1] = (&DAT_00586f74)[param_2 / 10];
    iVar1 = iVar1 + 1;
  }
  param_1[iVar1] = (&DAT_00586f74)[param_2 % 10];
  param_1[iVar1 + 1] = 0;
  return iVar1 + 1;
}

