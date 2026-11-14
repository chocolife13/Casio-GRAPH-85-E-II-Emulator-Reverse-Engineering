// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00533130
// entry: 00533130  size: 44


uint FUN_00533130(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00532ea0(param_1);
  if ((char)uVar1 != '\x01') {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_005330a0(param_1);
  return (uint)(byte)(&DAT_00599594)[uVar1 & 0xff];
}

