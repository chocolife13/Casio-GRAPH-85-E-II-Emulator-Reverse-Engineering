// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047cbb0
// entry: 0047cbb0  size: 73


byte FUN_0047cbb0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 < 0x1b) {
    iVar1 = FUN_005284b0(0,param_1,param_2);
    return -(iVar1 != 0) & 4;
  }
  if (param_1 < 0x65) {
    return 0x17;
  }
  iVar1 = FUN_005284b0(0xff,(char)param_1 + -100,param_2);
  return -(iVar1 != 0) & 4;
}

