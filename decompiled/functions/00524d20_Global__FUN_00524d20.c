// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00524d20
// entry: 00524d20  size: 121


void FUN_00524d20(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  
  if (param_5 == 0x7544) {
    if (*param_3 == 0) {
      return;
    }
  }
  else if (param_5 == 0x7545) {
    iVar1 = FUN_004b7370(*(undefined1 *)(*param_3 + param_1));
    if (iVar1 == 0) {
      iVar1 = *param_3 + 1;
    }
    else {
      iVar1 = *param_3 + 2;
    }
    if (*(char *)(iVar1 + param_1) == '\0') {
      return;
    }
  }
  FUN_00524cc0(param_1,param_2,param_3,param_4,param_5);
  iVar1 = *param_4;
  if ((iVar1 != 0) && (iVar1 == *param_3)) {
    *param_4 = iVar1 + -1;
    iVar1 = FUN_004b7610(param_1,iVar1 + -1);
    if (iVar1 == 2) {
      *param_4 = *param_4 + -1;
    }
  }
  return;
}

