// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f8a0
// entry: 0041f8a0  size: 63


void FUN_0041f8a0(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      param_2 = param_2 + -1;
      *param_1 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

