// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050b1f0
// entry: 0050b1f0  size: 79


undefined4 FUN_0050b1f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00517c00();
  if (iVar1 != param_2) {
    return 0xfffffffa;
  }
  FUN_00516760(param_1);
  FUN_0050acb0(param_1);
  FUN_0050b130(*(undefined4 *)(param_1 + 0x8dc),param_2);
  uVar2 = FUN_0050b2c0(param_1,param_2,param_3);
  FUN_005167a0(param_1);
  return uVar2;
}

