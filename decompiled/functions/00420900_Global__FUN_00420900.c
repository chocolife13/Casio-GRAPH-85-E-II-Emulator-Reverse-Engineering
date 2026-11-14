// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00420900
// entry: 00420900  size: 194


void FUN_00420900(int param_1,short param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  
  if (param_2 == 0) {
    *(ushort *)(param_1 + 8) =
         CONCAT11((char)*(undefined2 *)(param_1 + 8),
                  (char)((ushort)*(undefined2 *)(param_1 + 8) >> 8));
    *(ushort *)(param_1 + 10) =
         CONCAT11((char)*(undefined2 *)(param_1 + 10),
                  (char)((ushort)*(undefined2 *)(param_1 + 10) >> 8));
  }
  uVar2 = FUN_0041f8e0(param_1 + 0x10,*(short *)(param_1 + 10) * *(short *)(param_1 + 8));
  if ((short)uVar2 == 1) {
    FUN_0041f8e0(param_1 + 0x10 +
                 (uint)*(ushort *)(param_1 + 10) * (uint)*(ushort *)(param_1 + 8) * 0xc,
                 CONCAT22((short)((uint)uVar2 >> 0x10),*(ushort *)(param_1 + 10)) *
                 CONCAT22(extraout_var,*(ushort *)(param_1 + 8)));
  }
  if (param_2 == 1) {
    *(ushort *)(param_1 + 8) =
         CONCAT11((char)*(undefined2 *)(param_1 + 8),
                  (char)((ushort)*(undefined2 *)(param_1 + 8) >> 8));
    *(ushort *)(param_1 + 10) =
         CONCAT11((char)*(undefined2 *)(param_1 + 10),
                  (char)((ushort)*(undefined2 *)(param_1 + 10) >> 8));
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  return;
}

