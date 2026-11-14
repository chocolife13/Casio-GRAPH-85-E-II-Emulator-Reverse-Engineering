// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004427c0
// entry: 004427c0  size: 53


byte FUN_004427c0(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 & 0x100) == 0) {
    iVar1 = FUN_00442800(param_1,param_2);
    return -(iVar1 != 0) & 4;
  }
  iVar1 = FUN_004429f0(param_1,param_2);
  return -(iVar1 != 0) & 4;
}

