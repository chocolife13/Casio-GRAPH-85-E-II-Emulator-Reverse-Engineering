// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00476fd0
// entry: 00476fd0  size: 167


int FUN_00476fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                undefined4 param_5,int *param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  FUN_00476960(param_3,*param_4,param_5,*param_6);
  iVar2 = FUN_00477080(param_1,param_2,param_5,*param_6);
  iVar3 = FUN_00527440(0,param_5);
  *param_7 = iVar3;
  if (iVar2 == -6) {
    if (iVar3 < *param_6) {
      return -6;
    }
  }
  else if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_6 != -1) {
    cVar1 = FUN_00526090(0x51);
    iVar3 = *param_6;
    if ((iVar3 < 999) && (iVar3 <= *param_7)) {
      *param_6 = iVar3 + 1;
      if ((int)((cVar1 != '\0') + 3 + *param_4) < iVar3 + 1) {
        *param_4 = *param_4 + 1;
      }
    }
    return iVar2;
  }
  *param_6 = 1;
  return iVar2;
}

