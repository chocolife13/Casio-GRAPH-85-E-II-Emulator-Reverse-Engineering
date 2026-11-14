// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486330
// entry: 00486330  size: 213


int FUN_00486330(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  short sVar2;
  short sStack_e;
  short sStack_a;
  
  if (param_1 < 1) {
    return 0;
  }
  sStack_e = (short)((uint)*param_4 >> 0x10);
  if (param_2 == 0) {
    if (sStack_e < param_1) {
      return 0;
    }
    iVar1 = param_4[param_1 + 3];
    *param_3 = iVar1;
    return 2 - (uint)(iVar1 != 0);
  }
  sVar2 = (short)param_4[1];
  if (param_2 == 1) {
    sStack_a = (short)((uint)param_4[1] >> 0x10);
    if (sStack_a < param_1) {
      return 0;
    }
    iVar1 = param_4[(int)sStack_e + param_1 + sVar2 + 3];
    *param_3 = iVar1;
    return 2 - (uint)(iVar1 != 0);
  }
  if (param_2 != 2) {
    return 0;
  }
  if (sVar2 < param_1) {
    return 0;
  }
  iVar1 = param_4[sStack_e + param_1 + 3];
  *param_3 = iVar1;
  return 2 - (uint)(iVar1 != 0);
}

