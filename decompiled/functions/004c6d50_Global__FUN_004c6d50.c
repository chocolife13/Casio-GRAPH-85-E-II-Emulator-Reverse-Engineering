// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c6d50
// entry: 004c6d50  size: 773


undefined4 FUN_004c6d50(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 unaff_ESI;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint local_40;
  uint local_3c;
  int *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar7 = param_1;
  uVar1 = *(ushort *)(param_1 + 2);
  iVar9 = CONCAT22((short)((uint)unaff_ESI >> 0x10),uVar1);
  local_34 = iVar9;
  if (uVar1 != *(ushort *)(param_2 + 2)) {
    FUN_004e5630(9,param_3);
    return 0;
  }
  iVar3 = FUN_004e4000(param_1);
  if (iVar3 == 0) {
    iVar3 = FUN_004e4000(param_2);
    if (iVar3 == 0) {
      local_40 = (uint)uVar1;
      piVar4 = (int *)FUN_004ad630(local_40 * 0xc);
      if (piVar4 == (int *)0x0) {
        FUN_004e5630(4,param_3);
        return 0;
      }
      piVar5 = (int *)FUN_004ad630(local_40 * 0xc);
      iVar3 = 0;
      if (piVar5 == (int *)0x0) {
        FUN_004ad6d0(piVar4);
        FUN_004e5630(4,param_3);
        return 0;
      }
      param_1 = 0;
      local_38 = *(int **)(iVar7 + 8);
      piVar2 = *(int **)(param_2 + 8);
      if (uVar1 != 0) {
        iVar7 = 0;
        do {
          if (*(char *)(iVar3 + *piVar2) == '\0') {
            param_1 = param_1 + 1;
          }
          else {
            puVar10 = (undefined4 *)(*piVar4 + iVar7);
            puVar8 = (undefined4 *)(*local_38 + iVar3);
            *puVar10 = *puVar8;
            puVar10[1] = puVar8[1];
            puVar10[2] = puVar8[2];
            puVar8 = (undefined4 *)(iVar3 + *piVar2);
            puVar10 = (undefined4 *)(*piVar5 + iVar7);
            iVar7 = iVar7 + 0xc;
            *puVar10 = *puVar8;
            puVar10[1] = puVar8[1];
            puVar10[2] = puVar8[2];
            iVar9 = local_34;
          }
          iVar3 = iVar3 + 0xc;
          local_40 = local_40 - 1;
        } while (local_40 != 0);
      }
      iVar7 = FUN_004c53d0(piVar5,piVar5,iVar9 - param_1,&local_3c);
      if (iVar7 == 0) {
        uVar11 = iVar9 - param_1 & 0xffff;
        FUN_004f9690(&local_30,piVar4,uVar11,1);
        FUN_004f9690(&local_18,piVar5,uVar11,1);
        iVar7 = FUN_004c8e60(uVar11,piVar4,piVar5);
        if (iVar7 == 0) {
          iVar9 = 0;
          iVar7 = (int)local_3c >> 1;
          if (uVar11 != 0) {
            param_1 = 0;
            do {
              iVar3 = FUN_004c55f0(*piVar5 + param_1);
              iVar7 = iVar7 - iVar3;
              if (iVar7 < 1) break;
              iVar9 = iVar9 + 1;
              param_1 = param_1 + 0xc;
            } while (iVar9 < (int)uVar11);
          }
          uVar12 = 1;
          if (iVar7 == 0) {
            if ((local_3c & 1) == 0) {
              puVar8 = (undefined4 *)(*piVar4 + iVar9 * 0xc);
              local_30 = *puVar8;
              local_2c = puVar8[1];
              iVar9 = iVar9 * 3 + 3;
              local_28 = puVar8[2];
              iVar7 = *piVar4 + iVar9 * 4;
              local_18 = *(undefined4 *)(*piVar4 + iVar9 * 4);
              local_14 = *(undefined4 *)(iVar7 + 4);
              local_10 = *(undefined4 *)(iVar7 + 8);
              FUN_004e6ab0(&local_30,&local_18,param_3);
              uVar6 = FUN_004e57c0(&local_30,param_3);
              FUN_004e6dd0(param_3,uVar6);
              FUN_004e7910(param_3,param_3);
              iVar7 = FUN_004e4020(param_3);
              if (iVar7 != 0) {
                uVar12 = 0;
              }
            }
            else {
              puVar8 = (undefined4 *)(*piVar4 + (iVar9 * 3 + 3) * 4);
              *param_3 = *puVar8;
              param_3[1] = puVar8[1];
              param_3[2] = puVar8[2];
            }
          }
          else {
            puVar8 = (undefined4 *)(*piVar4 + iVar9 * 0xc);
            *param_3 = *puVar8;
            param_3[1] = puVar8[1];
            param_3[2] = puVar8[2];
          }
          FUN_004ad6d0(piVar4);
          FUN_004ad6d0(piVar5);
          return uVar12;
        }
      }
      FUN_004ad6d0(piVar4);
      FUN_004ad6d0(piVar5);
      FUN_004e5630(iVar7,param_3);
      return 0;
    }
  }
  FUN_004e5630(0x19,param_3);
  return 0;
}

