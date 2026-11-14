// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f9db0
// entry: 004f9db0  size: 104


undefined4 FUN_004f9db0(byte *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_004f99e0(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_004f9d40(param_1), iVar2 == 0)) {
    return 0;
  }
  cVar1 = FUN_00526090(0x17);
  if (cVar1 == '\x01') {
    if ((0x2f < *param_1) && (*param_1 < 0x32)) {
      return 1;
    }
  }
  else if (cVar1 == '\a') {
    if (0x2f < *param_1) {
      if (*param_1 < 0x38) {
        return 1;
      }
      return 0;
    }
  }
  else {
    if (cVar1 != '\t') {
      return 1;
    }
    if (0x2f < *param_1) {
      return 1;
    }
  }
  return 0;
}

