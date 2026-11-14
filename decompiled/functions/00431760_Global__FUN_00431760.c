// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00431760
// entry: 00431760  size: 74


void FUN_00431760(undefined2 *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = DAT_005be8d8;
    *(undefined1 *)(param_1 + 1) = DAT_005be8da;
    if (1 < param_2) {
      param_2 = param_2 + -1;
      do {
        FUN_004317b0(param_1);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    return;
  }
  *param_1 = DAT_005a91bc;
  return;
}

