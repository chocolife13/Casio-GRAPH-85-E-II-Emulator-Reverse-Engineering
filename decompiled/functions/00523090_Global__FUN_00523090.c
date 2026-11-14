// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523090
// entry: 00523090  size: 97


int FUN_00523090(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((0x60 < param_1) && (param_1 < 0x7b)) {
    param_1 = param_1 - 0x20;
  }
  if ((((0x40 < param_1) && (param_1 < 0x5b)) || (param_1 == 0x20)) &&
     (iVar2 = 0, *param_2 != 0xffff)) {
    do {
      if ((*(ushort *)(param_2 + 2) == param_1) ||
         ((param_1 != 0x20 && (param_1 < *(ushort *)(param_2 + 2))))) break;
      piVar1 = param_2 + 3;
      param_2 = param_2 + 3;
      iVar2 = iVar2 + 1;
    } while (*piVar1 != 0xffff);
    if (*param_2 != 0xffff) {
      return iVar2;
    }
  }
  return -1;
}

