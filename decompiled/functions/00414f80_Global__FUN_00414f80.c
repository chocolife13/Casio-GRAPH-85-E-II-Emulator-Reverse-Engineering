// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414f80
// entry: 00414f80  size: 235


void FUN_00414f80(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *(uint *)(param_2 + 4) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = param_1[1];
  *(uint *)(param_2 + 8) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = param_1[2];
  *(uint *)(param_2 + 0xc) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = param_1[3];
  *(uint *)(param_2 + 0x10) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = param_1[4];
  *(uint *)(param_2 + 0x14) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  *(ushort *)(param_2 + 0x18) =
       CONCAT11((char)(short)param_1[5],(char)((ushort)(short)param_1[5] >> 8));
  return;
}

