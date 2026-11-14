// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00490670
// entry: 00490670  size: 23


int FUN_00490670(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_00490720(param_2,param_4);
  if (((iVar1 == 0) && (iVar1 = FUN_00490800(param_1), iVar1 == 0)) &&
     (iVar1 = FUN_00490890(param_3), iVar1 == 0)) {
    FUN_0048fbf0(*param_2,&param_4);
    if (*param_2 == 2) {
      iVar1 = *param_3 + -0x76c;
      param_4 = param_4 + 1;
      if (-1 < iVar1) {
        iVar1 = iVar1 + (*param_3 - 0x768U >> 2) * -4;
      }
      if (iVar1 != -4) {
        return ((param_4 <= *param_1) - 1 & 0xfffffffd) + 3;
      }
    }
    iVar1 = ((param_4 + 1 <= *param_1) - 1 & 0xfffffffd) + 3;
  }
  return iVar1;
}

