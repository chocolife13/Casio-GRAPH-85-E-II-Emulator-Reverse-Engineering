// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a72b0
// entry: 004a72b0  size: 77


void FUN_004a72b0(uint param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_004a7290((ushort)param_1 >> 0xc);
  *param_2 = uVar1;
  uVar1 = FUN_004a7290(param_1 >> 8 & 0xff);
  param_2[1] = uVar1;
  param_2[2] = 0x2e;
  uVar1 = FUN_004a7290((ushort)param_1 >> 4);
  param_2[3] = uVar1;
  uVar1 = FUN_004a7290(param_1);
  param_2[4] = uVar1;
  param_2[5] = 0;
  return;
}

