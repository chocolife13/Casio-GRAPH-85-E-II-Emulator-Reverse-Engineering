// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00559d7b
// entry: 00559d7b  size: 124


undefined4 FUN_00559d7b(uint param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_005d96a0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_005d95a0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_005cbf64 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00559dd4;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_00559dd4:
      *(HANDLE *)((&DAT_005d95a0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_005542c1();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_005542ca();
  *puVar1 = 0;
  return 0xffffffff;
}

