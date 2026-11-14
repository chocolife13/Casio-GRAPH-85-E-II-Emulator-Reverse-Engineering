// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054c8d0
// entry: 0054c8d0  size: 184


char * FUN_0054c8d0(char param_1,short param_2,char *param_3)

{
  short sVar1;
  int iVar2;
  
  *param_3 = param_1 + '@';
  if (param_2 < 10) {
    if (param_2 < 100) {
      param_3[2] = '\0';
      param_3[1] = (char)param_2 + '0';
      return param_3;
    }
  }
  else if (param_2 < 100) {
    iVar2 = (int)param_2;
    param_3[3] = '\0';
    param_3[1] = (((char)(iVar2 / 10) + (char)(param_2 >> 7)) -
                 (char)((longlong)iVar2 * 0x66666667 >> 0x3f)) + '0';
    param_3[2] = (char)(iVar2 % 10) + '0';
    return param_3;
  }
  param_3[4] = '\0';
  sVar1 = (param_2 / 10 + (param_2 >> 0xf)) - (short)((longlong)(int)param_2 * 0x66666667 >> 0x3f);
  iVar2 = (int)sVar1;
  param_3[1] = (((char)(iVar2 / 10) + (char)(sVar1 >> 7)) -
               (char)((longlong)iVar2 * 0x66666667 >> 0x3f)) + '0';
  param_3[2] = (char)(iVar2 % 10) + '0';
  param_3[3] = (char)((int)param_2 % 10) + '0';
  return param_3;
}

