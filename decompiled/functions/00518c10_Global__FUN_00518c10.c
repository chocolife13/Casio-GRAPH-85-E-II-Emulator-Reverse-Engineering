// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518c10
// entry: 00518c10  size: 241


undefined4 FUN_00518c10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_400 [1024];
  
  iVar1 = FUN_00518a70(*(undefined4 *)(param_1 + 0x8dc),local_400,0);
  if (iVar1 < 1) {
    FUN_0052b240(0x1e);
    return 0x1f;
  }
  iVar1 = FUN_00517c00();
  if (iVar1 == 10) {
    return 0x23;
  }
  iVar1 = FUN_00516800(param_1);
  if (iVar1 != 0) {
    FUN_0052b240(4);
    return 0xfffffff5;
  }
  iVar1 = FUN_00514820(param_1);
  if (iVar1 == 0) {
    FUN_0050ad60(param_1);
    iVar1 = FUN_00510270(param_1);
    FUN_0050acb0(param_1);
    if (iVar1 == 0) {
      FUN_00517ac0(10);
      uVar2 = FUN_00518e70(param_1,1,param_2);
      FUN_005167a0(param_1);
      return uVar2;
    }
  }
  FUN_00515dd0();
  FUN_0052b240(iVar1);
  return 0xfffffff5;
}

