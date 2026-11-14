// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050b130
// entry: 0050b130  size: 147


void FUN_0050b130(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_1 + 7) = 2;
  *param_1 = *(undefined4 *)(&DAT_0058c0f0 + param_2 * 4);
  *(undefined1 *)((int)param_1 + 0x3d) = 0xc;
  *(undefined1 *)((int)param_1 + 0x1d) = 0xc;
  param_1[10] = param_2;
  *(undefined1 *)((int)param_1 + 0x3e) = 4;
  *(undefined1 *)((int)param_1 + 0x1e) = 4;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  switch(param_2) {
  case 1:
  case 2:
    param_1[6] = 0x1200;
    return;
  case 3:
  case 4:
    param_1[6] = 0x1100;
    return;
  case 5:
  case 6:
  case 7:
    param_1[6] = 0x1401;
    return;
  case 8:
    *(undefined1 *)(param_1 + 0xf) = 2;
    param_1[6] = 0x1200;
    param_1[0xe] = 0x1200;
    param_1[8] = (&PTR_LAB_0058c0f8)[param_2];
    return;
  case 9:
    *(undefined1 *)(param_1 + 0xf) = 2;
    param_1[6] = 0x1100;
    param_1[0xe] = 0x1100;
    param_1[8] = (&PTR_LAB_0058c0f8)[param_2];
    return;
  default:
    *(undefined1 *)(param_1 + 7) = 0;
    return;
  }
}

