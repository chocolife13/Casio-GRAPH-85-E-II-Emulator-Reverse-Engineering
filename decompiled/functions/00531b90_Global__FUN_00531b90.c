// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00531b90
// entry: 00531b90  size: 192


void FUN_00531b90(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)param_2;
  local_8 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(uint *)(param_2 + 8);
  if ((*param_2 & 0x70) == 0x20) {
    local_c = CONCAT22(CONCAT11((char)*(undefined2 *)(param_2 + 2),
                                (char)((ushort)*(undefined2 *)(param_2 + 2) >> 8)),
                       (undefined2)local_c);
    uVar2 = *(uint *)(param_2 + 8);
    uVar2 = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
  }
  if ((*param_2 & 0x70) == 0x30) {
    uVar2 = *(uint *)(param_2 + 8);
    local_c = CONCAT22(CONCAT11((char)*(undefined2 *)(param_2 + 2),
                                (char)((ushort)*(undefined2 *)(param_2 + 2) >> 8)),
                       (undefined2)local_c);
    uVar1 = (uint)local_8 >> 0x10;
    local_8 = CONCAT22((short)uVar1,
                       CONCAT11((char)*(undefined2 *)(param_2 + 4),
                                (char)((ushort)*(undefined2 *)(param_2 + 4) >> 8)));
    uVar2 = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = uVar2;
  return;
}

