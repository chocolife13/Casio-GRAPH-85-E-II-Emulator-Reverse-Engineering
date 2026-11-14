// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414dc0
// entry: 00414dc0  size: 221


void FUN_00414dc0(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *(uint *)(param_2 + 8) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  uVar1 = param_1[1];
  *(uint *)(param_2 + 0xc) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  *(ushort *)(param_2 + 0x10) =
       CONCAT11((char)(short)param_1[2],(char)((ushort)(short)param_1[2] >> 8));
  *(ushort *)(param_2 + 0x12) =
       CONCAT11((char)*(undefined2 *)((int)param_1 + 10),
                (char)((ushort)*(undefined2 *)((int)param_1 + 10) >> 8));
  *(ushort *)(param_2 + 0x14) =
       CONCAT11((char)(short)param_1[3],(char)((ushort)(short)param_1[3] >> 8));
  *(ushort *)(param_2 + 0x16) =
       CONCAT11((char)*(undefined2 *)((int)param_1 + 0xe),
                (char)((ushort)*(undefined2 *)((int)param_1 + 0xe) >> 8));
  *(ushort *)(param_2 + 0x18) =
       CONCAT11((char)(short)param_1[4],(char)((ushort)(short)param_1[4] >> 8));
  *(ushort *)(param_2 + 0x1a) =
       CONCAT11((char)*(undefined2 *)((int)param_1 + 0x12),
                (char)((ushort)*(undefined2 *)((int)param_1 + 0x12) >> 8));
  *(ushort *)(param_2 + 0x1c) =
       CONCAT11((char)(short)param_1[5],(char)((ushort)(short)param_1[5] >> 8));
  *(ushort *)(param_2 + 0x1e) =
       CONCAT11((char)*(undefined2 *)((int)param_1 + 0x16),
                (char)((ushort)*(undefined2 *)((int)param_1 + 0x16) >> 8));
  *(ushort *)(param_2 + 0x20) =
       CONCAT11((char)(short)param_1[6],(char)((ushort)(short)param_1[6] >> 8));
  return;
}

