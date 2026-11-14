// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535020
// entry: 00535020  size: 304


undefined4 FUN_00535020(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  if (param_1 != (char *)0x0) {
    cVar1 = FUN_00532fb0(param_1);
    cVar2 = FUN_00532a30(cVar1);
    if ((cVar2 != '\0') || (cVar1 == '\a')) {
      return 1;
    }
    cVar2 = FUN_00532a50(cVar1);
    if ((cVar2 == '\0') && (cVar1 = FUN_00532ad0(cVar1), cVar1 == '\0')) {
      iVar3 = FUN_004f9e20(param_1);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_004fa240(param_1);
      if (iVar3 != 0) {
        return 1;
      }
      cVar1 = param_1[1];
      if (*param_1 != -7) {
        if (*param_1 == '$') {
          return 1;
        }
        iVar3 = FUN_004f9a00(param_1);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = FUN_004f9a20(param_1);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = FUN_004f9960(param_1);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = FUN_004f9c30(param_1);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = FUN_004f9f40(param_1);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = FUN_004f9980(param_1);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = FUN_004f9af0(param_1);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = FUN_004f9a40(param_1);
        if (iVar3 != 0) {
          return 1;
        }
        return 0;
      }
      if (cVar1 == '\x1b') {
        return 1;
      }
      if (cVar1 == '\x12') {
        return 1;
      }
      if (cVar1 == '\x13') {
        return 1;
      }
      if (cVar1 == '\x15') {
        return 1;
      }
      if (cVar1 == '\x16') {
        return 1;
      }
      if (cVar1 == '\x17') {
        return 1;
      }
      if (cVar1 == '\x18') {
        return 1;
      }
      if (cVar1 == '!') {
        return 1;
      }
      if (cVar1 == '\"') {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

