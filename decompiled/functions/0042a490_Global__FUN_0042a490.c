// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a490
// entry: 0042a490  size: 45


void FUN_0042a490(short *param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  do {
    param_2 = param_2 + 1;
    *param_1 = sVar1;
    param_1 = param_1 + 1;
    sVar1 = *param_2;
    if (sVar1 == 0) {
      *param_1 = *param_2;
      return;
    }
  } while (sVar1 != -1);
  *param_1 = -1;
  return;
}

