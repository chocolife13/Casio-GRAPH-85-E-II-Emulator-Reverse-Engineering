// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00416580
// entry: 00416580  size: 88


uint FUN_00416580(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0041c700(0xfff0000,0xffffffff);
  if ((int)uVar1 < 0) {
    uVar1 = FUN_0041ccb0();
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  if (*(ushort *)(param_1 + 0x100c) != uVar1) {
    FUN_0041c2f0(uVar1);
  }
  *(short *)(param_1 + 0x100c) = (short)uVar1;
  *(undefined4 *)(param_1 + 0x207c + uVar1 * 4) = 0xfffffff;
  return 4;
}

