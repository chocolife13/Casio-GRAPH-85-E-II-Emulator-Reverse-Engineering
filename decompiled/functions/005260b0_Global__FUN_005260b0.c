// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005260b0
// entry: 005260b0  size: 90


uint FUN_005260b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_2) {
  case 0:
    return *(uint *)(&DAT_00598064 + param_1 * 4);
  case 1:
    return *(uint *)(&DAT_0059824c + param_1 * 4);
  default:
    uVar1 = 0;
    break;
  case 4:
  case 0x84:
    return *(uint *)(&DAT_00598158 + param_1 * 4);
  case 8:
  case 0x88:
    uVar1 = *(uint *)(&DAT_00598158 + param_1 * 4);
    if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
      return uVar1 + 0x20;
    }
  }
  return uVar1;
}

