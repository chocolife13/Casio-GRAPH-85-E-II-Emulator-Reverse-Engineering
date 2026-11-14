// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00401e40
// entry: 00401e40  size: 46


void FUN_00401e40(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = (uVar1 << 0x10 | uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | (uVar1 >> 0x10 & 0xff) << 8;
  return;
}

