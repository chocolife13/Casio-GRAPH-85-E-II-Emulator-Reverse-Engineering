// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00415070
// entry: 00415070  size: 235


void FUN_00415070(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4);
  *param_1 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = *(uint *)(param_2 + 8);
  param_1[1] = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = *(uint *)(param_2 + 0xc);
  param_1[2] = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = *(uint *)(param_2 + 0x10);
  param_1[3] = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = *(uint *)(param_2 + 0x14);
  param_1[4] = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  *(ushort *)(param_1 + 5) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x18),
                (char)((ushort)*(undefined2 *)(param_2 + 0x18) >> 8));
  return;
}

