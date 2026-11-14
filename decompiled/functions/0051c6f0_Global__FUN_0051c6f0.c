// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051c6f0
// entry: 0051c6f0  size: 56


void FUN_0051c6f0(int *param_1)

{
  char cVar1;
  
  if (*param_1 == 0x7531) {
    cVar1 = FUN_00526090(0x18);
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        *param_1 = 0x58;
        return;
      }
      *param_1 = 0x54;
      return;
    }
    *param_1 = 0xce;
  }
  return;
}

