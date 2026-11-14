// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00536cb0
// entry: 00536cb0  size: 54


bool FUN_00536cb0(byte param_1)

{
  char cVar1;
  
  cVar1 = FUN_005380e0();
  if (cVar1 == '\0') {
    return false;
  }
  if (param_1 < 0x1a) {
    return false;
  }
  if (param_1 < 0x20) {
    return true;
  }
  if ((param_1 & 0xf) != 4) {
    return false;
  }
  if (param_1 < 0x84) {
    return false;
  }
  return param_1 < 0xb5;
}

