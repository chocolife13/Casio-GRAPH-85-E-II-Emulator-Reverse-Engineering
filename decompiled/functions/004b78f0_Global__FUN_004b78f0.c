// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b78f0
// entry: 004b78f0  size: 46


uint FUN_004b78f0(byte *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  switch(uVar1) {
  case 0x7f:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xf7:
  case 0xf9:
    uVar1 = (uint)param_1[1] + uVar1 * 0x100;
  }
  return uVar1;
}

