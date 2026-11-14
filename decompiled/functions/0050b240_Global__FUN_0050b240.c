// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050b240
// entry: 0050b240  size: 120


int FUN_0050b240(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00517c00();
  if (iVar1 == param_2) {
    return 0x23;
  }
  iVar1 = FUN_00516800(param_1);
  if (iVar1 != 0) {
    FUN_0052b240(4);
    return -0xb;
  }
  FUN_0050b130(*(undefined4 *)(param_1 + 0x8dc),param_2);
  iVar1 = FUN_0051b520(param_1,0);
  if (iVar1 == 0) {
    FUN_00517ac0(param_2);
    iVar1 = FUN_0050b2c0(param_1,param_2,param_3);
    FUN_005167a0(param_1);
  }
  return iVar1;
}

