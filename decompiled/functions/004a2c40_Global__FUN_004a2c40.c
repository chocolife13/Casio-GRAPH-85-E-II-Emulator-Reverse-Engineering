// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2c40
// entry: 004a2c40  size: 113


uint FUN_004a2c40(uint param_1,undefined4 param_2)

{
  if ((param_1 & 0xf) == 1) {
    FUN_0042aac0(param_2,s___fls0__005bff2c,0x105);
    return param_1 & 0xf0;
  }
  if ((param_1 & 0xf) != 2) {
    FUN_0042aac0(param_2,s___fls0__005bff2c,0x105);
    return param_1 & 0xf0;
  }
  FUN_0042aac0(param_2,s___crd0__005bff24,0x105);
  return param_1 & 0xf0;
}

