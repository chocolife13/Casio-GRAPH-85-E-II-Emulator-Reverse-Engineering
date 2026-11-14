// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514390
// entry: 00514390  size: 151


int FUN_00514390(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  param_1[1] = iVar2;
  if (iVar2 < 0) {
    return -2;
  }
  iVar1 = *param_1;
  if ((iVar1 < 1) || (5 < iVar1)) {
    if (iVar1 == 6) {
      if (param_1[3] <= iVar2) {
        return 0;
      }
      iVar2 = FUN_00513f30(param_1,param_1[4] + 1);
      return (-(uint)(iVar2 != 0) & 0xfffffff5) + 9;
    }
    if (iVar2 != param_1[2]) {
      return 0;
    }
    if (iVar1 == 7) {
      return 2;
    }
  }
  else {
    if (iVar2 != param_1[2]) {
      return 0;
    }
    if (iVar1 == 1) {
      return 2;
    }
    if ((((iVar1 != 3) && (iVar1 != 4)) && (iVar1 != 5)) &&
       (iVar2 = FUN_00513f30(param_1,2), iVar2 == 0)) {
      return 9;
    }
  }
  *param_1 = 0;
  return 0;
}

