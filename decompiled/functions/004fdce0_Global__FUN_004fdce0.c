// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fdce0
// entry: 004fdce0  size: 122


undefined4 FUN_004fdce0(ushort param_1,byte *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  int *piVar3;
  
  uVar2 = *(ushort *)(param_2 + 2);
  piVar3 = *(int **)(param_2 + 8);
  if (uVar2 < param_1) {
    return 0;
  }
  puVar1 = (undefined4 *)(*piVar3 + (uint)(ushort)(param_1 - 1) * 0xc);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  param_3[2] = puVar1[2];
  if ((*param_2 & 0x80) != 0) {
    puVar1 = (undefined4 *)(*piVar3 + ((uint)uVar2 + (uint)(ushort)(param_1 - 1)) * 0xc);
    param_3[3] = *puVar1;
    param_3[4] = puVar1[1];
    param_3[5] = puVar1[2];
  }
  return 1;
}

