// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005554bf
// entry: 005554bf  size: 44


void FUN_005554bf(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((param_1 != param_2) && (param_3 != 0)) {
    do {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

