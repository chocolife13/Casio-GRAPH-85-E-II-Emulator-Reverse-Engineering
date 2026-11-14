// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00407580
// entry: 00407580  size: 62


int FUN_00407580(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00407560(param_1);
  if (param_2 != 1) {
    if (param_2 == 2) {
      if (*(char *)(iVar1 + 1) != '\0') {
        return iVar1 + 1;
      }
    }
    else if ((param_2 == 3) && (*(char *)(iVar1 + 1) != '\0')) {
      iVar1 = FUN_00407560(iVar1 + 2);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

