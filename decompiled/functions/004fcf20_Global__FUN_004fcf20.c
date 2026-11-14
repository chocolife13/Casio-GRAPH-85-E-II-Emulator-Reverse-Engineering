// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fcf20
// entry: 004fcf20  size: 758


undefined4 FUN_004fcf20(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  uint *puVar12;
  uint local_c;
  uint local_8;
  uint local_4;
  
  pbVar4 = param_2;
  bVar1 = *param_2;
  if (bVar1 < 6) {
    uVar5 = (ushort)(byte)(~(bVar1 - 6) + 1) * 0x30;
  }
  else {
    uVar5 = (ushort)bVar1 * 0x30 - 0xf0;
  }
  if (0x9f < uVar5) {
    uVar5 = uVar5 + 0x60;
  }
  bVar2 = *param_1;
  param_2 = (byte *)CONCAT31(CONCAT21(param_2._2_2_,(char)uVar5),(char)(uVar5 >> 8));
  if ((bVar2 & 0x70) == 0x30) {
    uVar6 = FUN_00501ed0(param_1);
    return uVar6;
  }
  if ((bVar2 & 0x70) == 0x20) {
    uVar5 = *(ushort *)(param_1 + 2);
    piVar3 = *(int **)(param_1 + 8);
    if ((bVar2 & 0x80) == 0) {
      uVar10 = 0;
      if (uVar5 != 0) {
        while( true ) {
          puVar12 = (uint *)((uint)uVar10 * 0xc + *piVar3);
          local_c = *puVar12;
          local_8 = puVar12[1];
          local_4 = puVar12[2];
          iVar7 = FUN_004fce70(&local_c,&param_2,CONCAT31((int3)(local_c >> 8),*pbVar4));
          if (iVar7 == 0) break;
          puVar12 = (uint *)((uint)uVar10 * 0xc + *piVar3);
          uVar10 = uVar10 + 1;
          *puVar12 = local_c;
          puVar12[1] = local_8;
          puVar12[2] = local_4;
          if (uVar5 <= uVar10) {
            return 1;
          }
        }
LAB_004fd17d:
        FUN_004fd9e0(param_1);
        uVar6 = FUN_00501ed0(param_1);
        return uVar6;
      }
    }
    else {
      uVar10 = 0;
      if (uVar5 != 0) {
        do {
          iVar7 = *piVar3;
          iVar9 = (uint)uVar10 * 0xc;
          puVar12 = (uint *)(iVar7 + iVar9);
          if ((*(byte *)(iVar7 + iVar9) & 0x80) == 0) {
            local_c = *puVar12;
            local_8 = puVar12[1];
            local_4 = puVar12[2];
            iVar7 = FUN_004fce70(&local_c,&param_2,CONCAT31((int3)((uint)puVar12 >> 8),*pbVar4));
            if (iVar7 == 0) goto LAB_004fd17d;
            puVar12 = (uint *)(iVar9 + *piVar3);
            *puVar12 = local_c;
            puVar12[1] = local_8;
            puVar12[2] = local_4;
          }
          else {
            iVar11 = ((uint)uVar5 + (uint)uVar10) * 0xc;
            local_c = *(uint *)(iVar11 + iVar7);
            local_8 = *(uint *)(iVar11 + iVar7 + 4);
            local_4 = *(uint *)(iVar11 + iVar7 + 8);
            iVar7 = FUN_004fce70(&local_c,&param_2,CONCAT31((int3)(local_c >> 8),*pbVar4));
            if (iVar7 == 0) goto LAB_004fd17d;
            puVar12 = (uint *)(iVar11 + *piVar3);
            *puVar12 = local_c;
            puVar12[1] = local_8;
            puVar12[2] = local_4;
            puVar12 = (uint *)(iVar9 + *piVar3);
            local_8 = puVar12[1];
            local_4 = puVar12[2];
            local_c = *puVar12 & 0xffffff7f;
            iVar7 = FUN_004fce70(&local_c,&param_2,CONCAT31((int3)(*puVar12 >> 8),*pbVar4));
            if (iVar7 == 0) goto LAB_004fd17d;
            local_c = CONCAT31(local_c._1_3_,(char)local_c + -0x80);
            puVar12 = (uint *)(iVar9 + *piVar3);
            *puVar12 = local_c;
            puVar12[1] = local_8;
            puVar12[2] = local_4;
          }
          uVar10 = uVar10 + 1;
          if (uVar5 <= uVar10) {
            return 1;
          }
        } while( true );
      }
    }
  }
  else {
    if ((bVar2 & 0x80) == 0) {
      uVar6 = FUN_004fce70(param_1,&param_2,bVar1);
      return uVar6;
    }
    iVar7 = FUN_004fce70(param_1 + 0xc,&param_2,bVar1);
    if (iVar7 == 0) {
      uVar6 = FUN_00501ed0(param_1);
      return uVar6;
    }
    uVar8 = CONCAT31((int3)((uint)iVar7 >> 8),*param_1) & 0xffffff7f;
    *param_1 = (byte)uVar8;
    iVar7 = FUN_004fce70(param_1,&param_2,CONCAT31((int3)(uVar8 >> 8),*pbVar4));
    if (iVar7 == 0) {
      uVar6 = FUN_00501ed0(param_1);
      return uVar6;
    }
    *param_1 = *param_1 + 0x80;
  }
  return 1;
}

