// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00466240
// entry: 00466240  size: 109


undefined4 FUN_00466240(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0xfc;
  FUN_00514940(param_1,1);
  iVar1 = FUN_00514820(param_1);
  if (iVar1 != 0) {
    FUN_0052b240(iVar1);
    return 0xfffffffe;
  }
  FUN_0050ae10(param_1,0);
  iVar1 = FUN_004662b0(param_1);
  FUN_0050acb0(param_1);
  if (iVar1 != 0) {
    FUN_0052b240(iVar1);
    return 0xfffffffe;
  }
  return 0;
}

