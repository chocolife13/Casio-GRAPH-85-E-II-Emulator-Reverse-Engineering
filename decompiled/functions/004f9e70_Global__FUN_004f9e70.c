// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9e70
// entry: 004f9e70  size: 149


bool FUN_004f9e70(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_0052f6b0(0x3b);
  if (((uVar2 & 2) != 0) && (iVar3 = FUN_004f9a90(param_1), iVar3 == 1)) {
    return true;
  }
  if ((((*param_1 != '\x0e') && (iVar3 = FUN_004f9b40(param_1), iVar3 != 1)) &&
      (iVar3 = FUN_004f9b70(param_1), iVar3 != 1)) &&
     (((iVar3 = FUN_004f9e50(param_1), iVar3 != 1 && (cVar1 = *param_1, cVar1 != '\x13')) &&
      ((cVar1 != -10 && ((cVar1 != -0x35 && (cVar1 != -0x34)))))))) {
    if (cVar1 == -9) {
      return param_1[1] == '\x06';
    }
    if (cVar1 == '\x7f') {
      return false;
    }
    if (((cVar1 != -7) || (param_1[1] == 0)) || (7 < (byte)param_1[1])) {
      return false;
    }
  }
  return true;
}

