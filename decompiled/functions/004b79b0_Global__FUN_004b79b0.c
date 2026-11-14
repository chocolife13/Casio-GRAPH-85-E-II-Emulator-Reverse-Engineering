// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b79b0
// entry: 004b79b0  size: 49


void FUN_004b79b0(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 != 0) {
    do {
      if (iVar1 != 0) {
        return;
      }
      if (*param_1 == *param_2) {
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      }
      else {
        iVar1 = (-(uint)(*param_1 < *param_2) & 0xfffffffe) + 1;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

