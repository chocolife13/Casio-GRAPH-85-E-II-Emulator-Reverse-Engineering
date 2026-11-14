// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00441770
// entry: 00441770  size: 35


void FUN_00441770(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0x7547) {
    iVar1 = *param_1 + 1;
    if (iVar1 < 4) {
      *param_1 = iVar1;
      return;
    }
  }
  else {
    iVar1 = *param_1 + -1;
    if (0 < iVar1) {
      *param_1 = iVar1;
    }
  }
  return;
}

