// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054f260
// entry: 0054f260  size: 211


void FUN_0054f260(int param_1,short *param_2)

{
  if (param_2 != (short *)0x0) {
    *(short *)(param_1 + 2) = *param_2;
    *(short *)(param_1 + 4) = param_2[1];
    *(short *)(param_1 + 6) = *param_2;
    *(short *)(param_1 + 8) = param_2[3];
    *(short *)(param_1 + 0x12) = *param_2;
    *(short *)(param_1 + 0x14) = param_2[1];
    *(short *)(param_1 + 0x16) = *param_2;
    *(short *)(param_1 + 0x18) = param_2[3];
    if (*param_2 + 1 <= (int)param_2[2]) {
      *(short *)(param_1 + 10) = *param_2 + 1;
      *(short *)(param_1 + 0xc) = param_2[1];
      *(short *)(param_1 + 0xe) = *param_2 + 1;
      *(short *)(param_1 + 0x10) = param_2[3];
      *(short *)(param_1 + 0x1a) = *param_2 + 1;
      *(short *)(param_1 + 0x1c) = param_2[1];
      *(short *)(param_1 + 0x1e) = *param_2 + 1;
      *(short *)(param_1 + 0x20) = param_2[3];
    }
    if (*param_2 + 2 <= (int)param_2[2]) {
      *(short *)(param_1 + 0x22) = *param_2 + 2;
      *(short *)(param_1 + 0x24) = param_2[1];
      *(short *)(param_1 + 0x26) = *param_2 + 2;
      *(short *)(param_1 + 0x28) = param_2[3];
    }
  }
  return;
}

