// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054c7e0
// entry: 0054c7e0  size: 173


char * FUN_0054c7e0(int param_1,char *param_2)

{
  short sVar1;
  int iVar2;
  
  if (param_1 < 10) {
    if (param_1 < 100) {
      *param_2 = (char)param_1 + '0';
      param_2[1] = '\0';
      return param_2;
    }
  }
  else if (param_1 < 100) {
    param_2[2] = '\0';
    *param_2 = (((char)(param_1 / 10) + (char)(param_1 >> 0x1f)) -
               (char)((longlong)param_1 * 0x66666667 >> 0x3f)) + '0';
    param_2[1] = (char)(param_1 % 10) + '0';
    return param_2;
  }
  sVar1 = (short)param_1;
  sVar1 = (sVar1 / 10 + (sVar1 >> 0xf)) - (short)((longlong)(int)sVar1 * 0x66666667 >> 0x3f);
  iVar2 = (int)sVar1;
  param_2[3] = '\0';
  *param_2 = (((char)(iVar2 / 10) + (char)(sVar1 >> 7)) -
             (char)((longlong)iVar2 * 0x66666667 >> 0x3f)) + '0';
  param_2[1] = (char)(iVar2 % 10) + '0';
  param_2[2] = (char)(param_1 % 10) + '0';
  return param_2;
}

