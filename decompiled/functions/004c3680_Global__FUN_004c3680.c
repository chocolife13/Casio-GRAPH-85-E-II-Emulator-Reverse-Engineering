// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c3680
// entry: 004c3680  size: 1614


bool FUN_004c3680(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int local_78;
  int local_74;
  undefined1 local_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_0052f840();
  piVar2 = *(int **)(param_1 + 8);
  piVar3 = *(int **)(param_2 + 8);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_004e57a0(local_18);
  FUN_004e57c0(local_30);
  iVar4 = FUN_004c56a0(param_1,param_2,&local_3c);
  if (iVar4 == 0) {
    *param_3 = local_3c;
    param_3[1] = local_38;
    param_3[2] = local_34;
    return false;
  }
  uVar1 = *(ushort *)(param_1 + 2);
  uVar10 = (uint)uVar1;
  iVar4 = (uVar10 * 3 & 0x3fff) << 2;
  piVar5 = (int *)FUN_004ad630(iVar4);
  if (piVar5 == (int *)0x0) {
    FUN_004e5630(4,param_3);
    return false;
  }
  iVar6 = FUN_004c53d0(piVar3,piVar5,CONCAT31((int3)((uint)piVar5 >> 8),(char)uVar1) & 0xffff00ff,
                       local_64);
  if (iVar6 != 0) {
    FUN_004ad6d0(piVar5);
    FUN_004e5630(iVar6,param_3);
    return false;
  }
  piVar7 = (int *)FUN_004ad630(iVar4);
  iVar4 = 0;
  if (piVar7 == (int *)0x0) {
    FUN_004ad6d0(piVar5);
    FUN_004e5630(4,param_3);
    return false;
  }
  local_78 = 0;
  local_74 = 0;
  if (uVar10 != 0) {
    do {
      puVar8 = (undefined4 *)(*piVar2 + iVar4);
      local_60 = *puVar8;
      local_5c = puVar8[1];
      local_58 = puVar8[2];
      puVar8 = (undefined4 *)(*piVar3 + iVar4);
      local_54 = *puVar8;
      local_50 = puVar8[1];
      local_4c = puVar8[2];
      iVar6 = FUN_004c5220(&local_54);
      if (iVar6 == 0) {
        uVar11 = 3;
        goto LAB_004c3cb0;
      }
      iVar6 = FUN_004e7250(&local_54,&local_24);
      if (iVar6 != 0) goto LAB_004c38c1;
      iVar6 = FUN_004e71d0(&local_54,&local_24);
      if (iVar6 == 1) {
        local_78 = local_78 + 1;
      }
      else {
        if (iVar6 == -1) {
          uVar11 = 3;
          goto LAB_004c3cb0;
        }
        iVar6 = (local_74 - local_78) * 0xc;
        puVar9 = (undefined4 *)(*piVar2 + iVar4);
        puVar8 = (undefined4 *)(iVar6 + *piVar5);
        *puVar8 = *puVar9;
        puVar8[1] = puVar9[1];
        puVar8[2] = puVar9[2];
        puVar9 = (undefined4 *)(*piVar3 + iVar4);
        puVar8 = (undefined4 *)(*piVar7 + iVar6);
        *puVar8 = *puVar9;
        puVar8[1] = puVar9[1];
        puVar8[2] = puVar9[2];
      }
      iVar6 = FUN_0052f820();
      if (iVar6 != 0) goto LAB_004c3cae;
      iVar4 = iVar4 + 0xc;
      local_74 = local_74 + 1;
    } while (local_74 < (int)uVar10);
  }
  local_78 = uVar10 - local_78;
  if (local_78 == 0) {
LAB_004c38c1:
    uVar11 = 3;
  }
  else {
    iVar4 = (local_78 * 3 & 0x3fffU) << 2;
    FUN_004ad670(piVar5,iVar4);
    FUN_004ad670(piVar7,iVar4);
    iVar4 = FUN_0052f820();
    if (iVar4 == 0) {
      iVar4 = FUN_004c8e60(local_78,piVar5,piVar7);
      iVar6 = 0;
      if (iVar4 != 0) {
        FUN_004e5630(iVar4,param_3);
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(piVar7);
        return false;
      }
      iVar4 = FUN_004e71d0(&local_3c,local_18);
      if (iVar4 == 1) {
        puVar8 = (undefined4 *)*piVar5;
        *param_3 = *puVar8;
        param_3[1] = puVar8[1];
        param_3[2] = puVar8[2];
        FUN_004ad6d0(piVar5);
        FUN_004ad6d0(piVar7);
      }
      else {
        FUN_004e7950(&local_3c,local_30,&local_60);
        iVar4 = FUN_004e71d0(&local_60,&local_24);
        if (iVar4 == 1) {
          FUN_004e6dd0(&local_3c,local_30);
        }
        else {
          FUN_004e6c30(&local_3c,local_18,&local_54);
          FUN_004e6dd0(&local_54,local_30,&local_54);
        }
        FUN_004e5780(local_48);
        FUN_004e7950(&local_54,local_30,&local_60);
        iVar4 = FUN_004e71d0(&local_60,local_18);
        if (iVar4 == 1) {
          FUN_004e6ab0(&local_54,local_18,&local_60);
          FUN_004e6dd0(&local_60,local_30,local_c);
          if (0 < local_78) {
            local_74 = 0;
            while( true ) {
              puVar8 = (undefined4 *)(*piVar7 + local_74);
              local_60 = *puVar8;
              local_5c = puVar8[1];
              local_58 = puVar8[2];
              FUN_004e6ab0(local_48,&local_60,local_48);
              iVar4 = FUN_004e72d0(local_c,local_48);
              if (iVar4 == 1) break;
              iVar4 = FUN_0052f820();
              if (iVar4 != 0) goto LAB_004c3cae;
              iVar6 = iVar6 + 1;
              local_74 = local_74 + 0xc;
              if (local_78 <= iVar6) {
                return true;
              }
            }
LAB_004c3c63:
            puVar8 = (undefined4 *)(*piVar5 + iVar6 * 0xc);
            *param_3 = *puVar8;
            param_3[1] = puVar8[1];
            param_3[2] = puVar8[2];
            FUN_004ad6d0(piVar5);
            FUN_004ad6d0(piVar7);
            iVar4 = FUN_004e4020(param_3);
            return iVar4 == 0;
          }
        }
        else {
          FUN_004e6dd0(&local_54,local_30,local_c);
          FUN_004e5780(local_48);
          if (0 < local_78) {
            local_74 = 0;
            while( true ) {
              puVar8 = (undefined4 *)(*piVar7 + local_74);
              local_60 = *puVar8;
              local_5c = puVar8[1];
              local_58 = puVar8[2];
              FUN_004e6ab0(local_48,&local_60,local_48);
              iVar4 = FUN_004e71d0(local_c,local_48);
              if (iVar4 == 1) {
                iVar4 = *piVar5 + iVar6 * 0xc;
                local_60 = *(undefined4 *)(*piVar5 + iVar6 * 0xc);
                iVar6 = iVar6 * 3 + 3;
                local_5c = *(undefined4 *)(iVar4 + 4);
                local_58 = *(undefined4 *)(iVar4 + 8);
                iVar4 = *piVar5 + iVar6 * 4;
                local_54 = *(undefined4 *)(*piVar5 + iVar6 * 4);
                local_50 = *(undefined4 *)(iVar4 + 4);
                local_4c = *(undefined4 *)(iVar4 + 8);
                FUN_004e0880(&local_60,&local_54,&local_60,0);
                FUN_004e0dd0(&local_60,local_30,param_3,0);
                FUN_004e3e70(param_3,param_3);
                FUN_004ad6d0(piVar5);
                FUN_004ad6d0(piVar7);
                iVar4 = FUN_004e4020(param_3);
                return iVar4 == 0;
              }
              iVar4 = FUN_004e7250(local_c,local_48);
              if (iVar4 == 1) break;
              iVar4 = FUN_0052f820();
              if (iVar4 != 0) goto LAB_004c3cae;
              iVar6 = iVar6 + 1;
              local_74 = local_74 + 0xc;
              if (local_78 <= iVar6) {
                return true;
              }
            }
            goto LAB_004c3c63;
          }
        }
      }
      return true;
    }
LAB_004c3cae:
    uVar11 = 1;
  }
LAB_004c3cb0:
  FUN_004e5630(uVar11,param_3);
  FUN_004ad6d0(piVar5);
  FUN_004ad6d0(piVar7);
  return false;
}

