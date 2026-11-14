// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047cb50
// entry: 0047cb50  size: 83


byte FUN_0047cb50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 < 0x1b) {
    iVar1 = FUN_005278d0(0,param_1,param_2,param_3);
    return -(iVar1 != 0) & 4;
  }
  if (param_1 < 0x65) {
    return 0x17;
  }
  iVar1 = FUN_005278d0(0xff,(char)param_1 + -100,param_2,param_3);
  return -(iVar1 != 0) & 4;
}

