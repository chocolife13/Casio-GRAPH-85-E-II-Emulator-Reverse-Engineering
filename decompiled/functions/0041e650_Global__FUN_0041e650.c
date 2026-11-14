// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041e650
// entry: 0041e650  size: 47


undefined4 FUN_0041e650(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0041bf40(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00419fc0(0xfffffffe);
    return uVar2;
  }
  (&DAT_005d86a0)[param_1 * 0x12] = 0xffe;
  return 0;
}

