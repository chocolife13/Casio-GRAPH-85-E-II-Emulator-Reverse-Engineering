// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434bd0
// entry: 00434bd0  size: 94


void FUN_00434bd0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_5 == 0x7542) {
    iVar2 = *param_4;
    if (iVar2 == param_2) {
      return;
    }
    iVar1 = iVar2 + -1;
    *param_4 = iVar1;
  }
  else {
    if ((param_5 == 0x7547) && (*param_4 == param_3)) {
      return;
    }
    iVar1 = *param_4;
    iVar2 = iVar1 + 1;
    *param_4 = iVar2;
  }
  FUN_00434b80(param_1 + iVar1 * 4,3,iVar1 + 2,iVar2 + 2,*param_4 + 2);
  return;
}

