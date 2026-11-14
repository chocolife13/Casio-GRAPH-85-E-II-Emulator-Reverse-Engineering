// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00420870
// entry: 00420870  size: 140


void FUN_00420870(int param_1,char param_2)

{
  uint uVar1;
  short sVar2;
  
  if (param_2 == '\0') {
    *(ushort *)(param_1 + 8) =
         CONCAT11((char)*(undefined2 *)(param_1 + 8),
                  (char)((ushort)*(undefined2 *)(param_1 + 8) >> 8));
  }
  sVar2 = FUN_0041f8e0(param_1 + 0x10,*(undefined2 *)(param_1 + 8));
  if (sVar2 == 1) {
    FUN_0041f8e0(param_1 + 0x10 + (uint)*(ushort *)(param_1 + 8) * 0xc,*(ushort *)(param_1 + 8));
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) =
       (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  if (param_2 == '\x01') {
    *(ushort *)(param_1 + 8) =
         CONCAT11((char)*(undefined2 *)(param_1 + 8),
                  (char)((ushort)*(undefined2 *)(param_1 + 8) >> 8));
  }
  return;
}

