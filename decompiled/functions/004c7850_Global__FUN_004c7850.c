// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c7850
// entry: 004c7850  size: 500


undefined4 FUN_004c7850(int param_1,byte *param_2)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_20;
  uint local_c;
  int local_8;
  
  iVar5 = FUN_004e4000(param_1);
  uVar1 = *(ushort *)(param_1 + 4);
  bVar12 = iVar5 != 0;
  uVar3 = (uint)*(ushort *)(param_1 + 2);
  uVar4 = (uint)uVar1;
  if ((0xff < uVar3) || (0xff < uVar4)) {
    FUN_004e5630(9,param_2);
    return 0;
  }
  iVar5 = (uint)uVar1 * (uint)*(ushort *)(param_1 + 2);
  if (bVar12) {
    iVar5 = iVar5 * 2;
  }
  piVar6 = (int *)FUN_004ad630((iVar5 * 3 & 0x3fffU) << 2);
  if (piVar6 != (int *)0x0) {
    FUN_004f96c0(param_2,piVar6,*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 2),!bVar12);
    piVar2 = *(int **)(param_1 + 8);
    iVar5 = 0;
    local_8 = 0;
    if (uVar1 != 0) {
      local_20 = 0;
      do {
        if (uVar3 != 0) {
          iVar11 = iVar5 * 0xc;
          iVar8 = local_20;
          iVar10 = local_8;
          local_c = uVar3;
          do {
            puVar7 = (undefined4 *)(iVar8 + *piVar2);
            puVar9 = (undefined4 *)(*piVar6 + iVar11);
            *puVar9 = *puVar7;
            puVar9[1] = puVar7[1];
            puVar9[2] = puVar7[2];
            if (bVar12) {
              puVar7 = (undefined4 *)(*piVar2 + (uVar4 * uVar3 + iVar10) * 0xc);
              puVar9 = (undefined4 *)(*piVar6 + (uVar4 * uVar3 + iVar5) * 0xc);
              *puVar9 = *puVar7;
              puVar9[1] = puVar7[1];
              puVar9[2] = puVar7[2];
            }
            iVar8 = iVar8 + uVar4 * 0xc;
            iVar10 = iVar10 + uVar4;
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0xc;
            local_c = local_c - 1;
          } while (local_c != 0);
        }
        local_8 = local_8 + 1;
        local_20 = local_20 + 0xc;
      } while (local_8 < (int)uVar4);
    }
    if (bVar12) {
      *param_2 = *param_2 & 0xf | 0xb0;
    }
    else {
      *param_2 = *param_2 & 0xf0 | 0x30;
    }
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 4);
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_1 + 2);
    return 1;
  }
  FUN_004e5630(4,param_2);
  return 0;
}

