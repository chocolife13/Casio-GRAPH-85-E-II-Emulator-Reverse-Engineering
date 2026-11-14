// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056db9f
// entry: 0056db9f  size: 84


int __thiscall FUN_0056db9f(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_0056d867(0);
    if (-1 < iVar1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + iVar1 * 0x14 + 0x10);
      iVar2 = *(int *)(iVar1 + -8);
      if (param_2 < iVar2) {
        iVar2 = param_2 + -1;
      }
      FUN_00555c70(param_3,iVar1,iVar2);
    }
    *(undefined1 *)(iVar2 + param_3) = 0;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

