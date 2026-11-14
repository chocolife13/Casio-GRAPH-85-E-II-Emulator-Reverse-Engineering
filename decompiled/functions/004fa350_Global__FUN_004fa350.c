// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fa350
// entry: 004fa350  size: 315


undefined4 FUN_004fa350(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = *param_1;
  bVar2 = param_1[1];
  if (cVar1 == -7) {
    if ((((((bVar2 != 0x1b) && (bVar2 != 0x12)) && (bVar2 != 0x13)) &&
         ((bVar2 != 0x15 && (bVar2 != 0x16)))) &&
        ((bVar2 != 0x17 && ((bVar2 != 0x18 && (bVar2 != 0x21)))))) && (bVar2 != 0x22)) {
      return 0;
    }
  }
  else {
    if ((((cVar1 == '\x7f') && ((bVar2 == 0x20 || (((bVar2 & 0xf0) == 0x20 && (0x2b < bVar2)))))) ||
        (cVar1 == '{')) || (cVar1 == '[')) {
LAB_004fa481:
      *param_1 = -6;
      return 1;
    }
    if (cVar1 != '$') {
      iVar3 = FUN_004f9a00(param_1);
      if (iVar3 != 1) {
        iVar3 = FUN_004f9a20(param_1);
        if (iVar3 != 1) {
          iVar3 = FUN_004f9960(param_1);
          if (iVar3 != 1) {
            iVar3 = FUN_004f9c30(param_1);
            if (iVar3 != 1) {
              iVar3 = FUN_004f9f40(param_1);
              if (iVar3 != 1) {
                iVar3 = FUN_004f9980(param_1);
                if (iVar3 != 1) {
                  iVar3 = FUN_004f9af0(param_1);
                  if (iVar3 != 1) {
                    iVar3 = FUN_004f9a40(param_1);
                    if (iVar3 != 1) {
                      if (*param_1 == -0x79) {
                        return 0;
                      }
                      iVar3 = FUN_004f9ba0(param_1);
                      if (iVar3 != 1) {
                        iVar3 = FUN_004f9f80(param_1);
                        if (iVar3 == 0) {
                          return 0;
                        }
                      }
                      goto LAB_004fa481;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = -8;
  return 1;
}

