// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414ea0
// entry: 00414ea0  size: 221


void FUN_00414ea0(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8);
  *param_1 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = *(uint *)(param_2 + 0xc);
  param_1[1] = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  *(ushort *)(param_1 + 2) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x10),
                (char)((ushort)*(undefined2 *)(param_2 + 0x10) >> 8));
  *(ushort *)((int)param_1 + 10) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x12),
                (char)((ushort)*(undefined2 *)(param_2 + 0x12) >> 8));
  *(ushort *)(param_1 + 3) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x14),
                (char)((ushort)*(undefined2 *)(param_2 + 0x14) >> 8));
  *(ushort *)((int)param_1 + 0xe) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x16),
                (char)((ushort)*(undefined2 *)(param_2 + 0x16) >> 8));
  *(ushort *)(param_1 + 4) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x18),
                (char)((ushort)*(undefined2 *)(param_2 + 0x18) >> 8));
  *(ushort *)((int)param_1 + 0x12) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x1a),
                (char)((ushort)*(undefined2 *)(param_2 + 0x1a) >> 8));
  *(ushort *)(param_1 + 5) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x1c),
                (char)((ushort)*(undefined2 *)(param_2 + 0x1c) >> 8));
  *(ushort *)((int)param_1 + 0x16) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x1e),
                (char)((ushort)*(undefined2 *)(param_2 + 0x1e) >> 8));
  *(ushort *)(param_1 + 6) =
       CONCAT11((char)*(undefined2 *)(param_2 + 0x20),
                (char)((ushort)*(undefined2 *)(param_2 + 0x20) >> 8));
  return;
}

