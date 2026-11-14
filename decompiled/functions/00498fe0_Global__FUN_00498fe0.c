// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00498fe0
// entry: 00498fe0  size: 439


undefined4 FUN_00498fe0(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar2 = *param_1;
  if (((bVar2 & 0x80) == 0) || (bVar5 = true, (bVar2 & 0xf0) == 0xf0)) {
    bVar5 = false;
  }
  uVar3 = *(ushort *)(param_1 + 2);
  uVar11 = (uint)uVar3;
  uVar4 = *(ushort *)(param_1 + 4);
  if ((bVar2 & 0x70) == 0x20) {
    iVar6 = FUN_005284b0(0,0,uVar11);
    if (iVar6 != 0) {
      uVar7 = FUN_00501ef0(param_1);
      return uVar7;
    }
    iVar6 = 1;
    puVar9 = (undefined4 *)**(int **)(param_1 + 8) + uVar11 * 3;
    puVar8 = (undefined4 *)**(int **)(param_1 + 8);
    if (uVar3 != 0) {
      do {
        local_18 = *puVar8;
        local_14 = puVar8[1];
        local_10 = puVar8[2];
        puVar10 = puVar9;
        if (bVar5) {
          puVar10 = puVar9 + 3;
          local_c = *puVar9;
          local_8 = puVar9[1];
          local_4 = puVar9[2];
        }
        FUN_005278d0(0,0,iVar6,&local_18);
        iVar6 = iVar6 + 1;
        puVar9 = puVar10;
        puVar8 = puVar8 + 3;
      } while (iVar6 <= (int)uVar11);
    }
  }
  else {
    if ((bVar2 & 0x70) != 0x30) {
      FUN_0052f780(0xc0,param_1);
      return 1;
    }
    iVar6 = FUN_00529980(0,uVar11,(uint)uVar4);
    if (iVar6 != 0) {
      uVar7 = FUN_00501ef0(param_1);
      return uVar7;
    }
    pbVar1 = param_1 + 8;
    param_1 = (byte *)0x1;
    puVar9 = (undefined4 *)**(int **)pbVar1;
    local_1c = puVar9 + uVar11 * 3;
    if (uVar3 != 0) {
      do {
        iVar6 = 1;
        puVar8 = puVar9;
        if (uVar4 != 0) {
          do {
            puVar9 = puVar8 + 3;
            local_18 = *puVar8;
            local_14 = puVar8[1];
            local_10 = puVar8[2];
            if (bVar5) {
              local_c = *local_1c;
              local_8 = local_1c[1];
              local_4 = local_1c[2];
              local_1c = local_1c + 3;
            }
            FUN_00528bf0(0,param_1,iVar6,&local_18);
            iVar6 = iVar6 + 1;
            puVar8 = puVar9;
          } while (iVar6 <= (int)(uint)uVar4);
        }
        param_1 = (byte *)((int)param_1 + 1);
      } while ((int)param_1 <= (int)uVar11);
      return 1;
    }
  }
  return 1;
}

