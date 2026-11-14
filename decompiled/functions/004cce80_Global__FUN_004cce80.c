// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004cce80
// entry: 004cce80  size: 2516


undefined4
FUN_004cce80(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,int param_6
            )

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint local_4c4;
  int *local_4c0;
  int local_4bc;
  int local_4b8;
  int local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  int *local_484;
  int local_480;
  int *local_47c;
  int local_478;
  int *local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  uint local_458;
  undefined4 local_454;
  int *local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  int *local_434;
  int local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  int local_3fc [255];
  
  local_450 = (int *)param_2[2];
  local_484 = *(int **)(param_4 + 8);
  local_474 = *(int **)(param_1 + 8);
  local_454 = 0;
  piVar8 = *(int **)(param_6 + 8);
  piVar2 = (int *)param_3[2];
  local_47c = *(int **)(param_5 + 8);
  local_434 = piVar8;
  FUN_004e57a0(&local_420);
  FUN_004e5780(&local_42c);
  uVar1 = *(ushort *)(param_1 + 2);
  uVar9 = (uint)uVar1;
  local_458 = (uint)*(ushort *)(param_1 + 4);
  iVar10 = uVar9 * uVar9 * 2;
  local_48c = 0;
  if (uVar9 != 0) {
    local_4c0 = (int *)0x0;
    do {
      FUN_004e5070(local_48c,&local_4b0);
      puVar6 = (undefined4 *)((int)local_4c0 + *local_484);
      local_4c0 = (int *)((int)local_4c0 + 0xc);
      *puVar6 = local_4b0;
      puVar6[1] = local_4ac;
      puVar6[2] = local_4a8;
      local_48c = local_48c + 1;
    } while (local_48c < (int)uVar9);
  }
  if (0 < iVar10) {
    iVar3 = 0;
    local_4c0 = (int *)iVar10;
    do {
      puVar6 = (undefined4 *)(iVar3 + *local_474);
      puVar7 = (undefined4 *)(iVar3 + *piVar2);
      iVar3 = iVar3 + 0xc;
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
      puVar7[2] = puVar6[2];
      local_4c0 = (int *)((int)local_4c0 + -1);
    } while (local_4c0 != (int *)0x0);
  }
  iVar10 = FUN_004cd860(param_3,0,param_4,&local_454);
  if (iVar10 != 0) {
    iVar10 = FUN_004cde80(param_3,param_4,&local_454);
    if (iVar10 != 1) {
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      return 0;
    }
    piVar5 = local_3fc;
    for (iVar10 = 0xff; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    if (uVar9 != 0) {
      local_4c0 = local_3fc;
      iVar10 = 0;
      local_4c4 = uVar9;
      do {
        puVar6 = (undefined4 *)(iVar10 + *local_484);
        local_470 = *puVar6;
        local_46c = puVar6[1];
        local_468 = puVar6[2];
        iVar3 = FUN_004e50a0(&local_470);
        iVar10 = iVar10 + 0xc;
        *local_4c0 = iVar3;
        local_4c0 = local_4c0 + 1;
        local_4c4 = local_4c4 - 1;
      } while (local_4c4 != 0);
    }
    local_48c = 0;
    if (uVar9 != 0) {
      local_4c0 = (int *)0x0;
      do {
        iVar10 = 0;
        piVar5 = local_3fc;
        local_4c4 = uVar9;
        do {
          if (*piVar5 == local_48c) {
            puVar6 = (undefined4 *)(iVar10 + *local_484);
            *puVar6 = local_420;
            puVar6[1] = local_41c;
            uVar11 = local_418;
          }
          else {
            puVar6 = (undefined4 *)(iVar10 + *local_484);
            *puVar6 = local_42c;
            puVar6[1] = local_428;
            uVar11 = local_424;
          }
          puVar6[2] = uVar11;
          piVar5 = piVar5 + 1;
          iVar10 = iVar10 + 0xc;
          local_4c4 = local_4c4 - 1;
        } while (local_4c4 != 0);
        puVar6 = (undefined4 *)*local_484;
        local_4b0 = *puVar6;
        local_4ac = puVar6[1];
        local_4a8 = puVar6[2];
        puVar6 = (undefined4 *)*piVar2;
        local_470 = *puVar6;
        local_46c = puVar6[1];
        local_474 = (int *)(local_458 * uVar9);
        local_468 = puVar6[2];
        iVar10 = *piVar2 + (int)local_474 * 0xc;
        local_464 = *(undefined4 *)(*piVar2 + (int)local_474 * 0xc);
        local_460 = *(undefined4 *)(iVar10 + 4);
        local_45c = *(undefined4 *)(iVar10 + 8);
        FUN_004e0ef0(&local_4b0,&local_470,&local_4b0,1);
        puVar6 = (undefined4 *)*piVar8;
        *puVar6 = local_4b0;
        iVar10 = uVar9 * 0xc;
        puVar6[1] = local_4ac;
        puVar6[2] = local_4a8;
        puVar6 = (undefined4 *)(*piVar8 + iVar10);
        *puVar6 = local_4a4;
        puVar6[1] = local_4a0;
        puVar6[2] = local_49c;
        local_498 = 1;
        local_430 = iVar10;
        if (1 < uVar1) {
          local_4b8 = 0xc;
          local_4c4 = (uVar9 + 1) * 0xc;
          local_4bc = (local_458 + 1) * uVar9 * 0xc;
          local_4b4 = iVar10;
          do {
            puVar6 = (undefined4 *)(local_4b8 + *local_484);
            local_414 = *puVar6;
            local_410 = puVar6[1];
            local_40c = puVar6[2];
            if (-1 < local_498 + -1) {
              local_490 = 0;
              local_480 = local_4bc;
              local_478 = local_4b4;
              local_494 = local_498;
              local_488 = iVar10;
              do {
                puVar6 = (undefined4 *)(local_478 + *piVar2);
                local_4b0 = *puVar6;
                local_4ac = puVar6[1];
                local_4a8 = puVar6[2];
                puVar6 = (undefined4 *)(local_480 + *piVar2);
                local_4a4 = *puVar6;
                local_4a0 = puVar6[1];
                local_49c = puVar6[2];
                puVar6 = (undefined4 *)(local_490 + *piVar8);
                local_470 = *puVar6;
                local_46c = puVar6[1];
                local_468 = puVar6[2];
                puVar6 = (undefined4 *)(local_488 + *piVar8);
                local_464 = *puVar6;
                local_460 = puVar6[1];
                local_45c = puVar6[2];
                FUN_004e0c40(&local_4b0,&local_470,&local_4b0,1);
                FUN_004e0b00(&local_414,&local_4b0,&local_414,1);
                local_490 = local_490 + 0xc;
                local_478 = local_478 + 0xc;
                local_480 = local_480 + 0xc;
                local_488 = local_488 + 0xc;
                local_494 = local_494 + -1;
              } while (local_494 != 0);
              local_494 = 0;
            }
            iVar4 = (uVar9 + 1) * local_498;
            puVar6 = (undefined4 *)(*piVar2 + iVar4 * 0xc);
            local_4b0 = *puVar6;
            local_4ac = puVar6[1];
            local_4a8 = puVar6[2];
            iVar4 = iVar4 + (int)local_474;
            iVar3 = *piVar2 + iVar4 * 0xc;
            local_4a4 = *(undefined4 *)(*piVar2 + iVar4 * 0xc);
            local_4a0 = *(undefined4 *)(iVar3 + 4);
            local_49c = *(undefined4 *)(iVar3 + 8);
            FUN_004e0ef0(&local_414,&local_4b0,&local_4b0,1);
            puVar6 = (undefined4 *)(local_4b8 + *piVar8);
            local_4b8 = local_4b8 + 0xc;
            *puVar6 = local_4b0;
            puVar6[1] = local_4ac;
            puVar6[2] = local_4a8;
            puVar6 = (undefined4 *)(*piVar8 + local_4c4);
            *puVar6 = local_4a4;
            puVar6[1] = local_4a0;
            puVar6[2] = local_49c;
            local_4b4 = local_4b4 + iVar10;
            local_4bc = local_4bc + iVar10;
            local_498 = local_498 + 1;
            local_4c4 = local_4c4 + 0xc;
          } while (local_498 < (int)uVar9);
        }
        iVar3 = *piVar8 + -0xc + iVar10;
        local_4b0 = *(undefined4 *)(*piVar8 + -0xc + iVar10);
        local_4ac = *(undefined4 *)(iVar3 + 4);
        local_4a8 = *(undefined4 *)(iVar3 + 8);
        local_494 = uVar9 * 0x18;
        puVar6 = (undefined4 *)(*piVar8 + -0xc + local_494);
        local_4a4 = *puVar6;
        local_4a0 = puVar6[1];
        local_49c = puVar6[2];
        FUN_004e3e70(&local_4b0,&local_4b0);
        puVar6 = (undefined4 *)(*local_47c + -0xc + iVar10);
        *puVar6 = local_4b0;
        puVar6[1] = local_4ac;
        puVar6[2] = local_4a8;
        puVar6 = (undefined4 *)(local_494 + -0xc + *local_47c);
        *puVar6 = local_4a4;
        puVar6[1] = local_4a0;
        puVar6[2] = local_49c;
        iVar3 = uVar9 - 2;
        if (-1 < iVar3) {
          local_490 = iVar3 * 0xc;
          local_4b4 = iVar3 * uVar9;
          local_478 = -uVar9;
          iVar4 = uVar9 - 1;
          local_498 = (iVar3 + uVar9) * 0xc;
          local_488 = (iVar3 + local_458) * uVar9;
          local_480 = iVar4;
          do {
            puVar6 = (undefined4 *)(*piVar8 + local_490);
            local_44c = *puVar6;
            local_448 = puVar6[1];
            local_444 = puVar6[2];
            puVar6 = (undefined4 *)(*piVar8 + local_498);
            local_440 = *puVar6;
            local_43c = puVar6[1];
            local_438 = puVar6[2];
            if (iVar4 < (int)uVar9) {
              iVar10 = (local_488 + iVar4) * 0xc;
              iVar3 = (iVar4 + local_4b4) * 0xc;
              local_494 = uVar9 - iVar4;
              local_4c4 = local_490;
              local_4b8 = local_498;
              do {
                local_4b8 = local_4b8 + 0xc;
                local_4c4 = local_4c4 + 0xc;
                puVar6 = (undefined4 *)(*piVar2 + iVar3);
                local_4b0 = *puVar6;
                local_4ac = puVar6[1];
                local_4a8 = puVar6[2];
                puVar6 = (undefined4 *)(*piVar2 + iVar10);
                local_4a4 = *puVar6;
                local_4a0 = puVar6[1];
                local_49c = puVar6[2];
                puVar6 = (undefined4 *)(*local_47c + local_4c4);
                local_470 = *puVar6;
                local_46c = puVar6[1];
                local_468 = puVar6[2];
                puVar6 = (undefined4 *)(*local_47c + local_4b8);
                local_464 = *puVar6;
                local_460 = puVar6[1];
                local_45c = puVar6[2];
                FUN_004e0c40(&local_4b0,&local_470,&local_4b0,1);
                FUN_004e0b00(&local_44c,&local_4b0,&local_44c,1);
                iVar3 = iVar3 + 0xc;
                iVar10 = iVar10 + 0xc;
                local_494 = local_494 + -1;
              } while (local_494 != 0);
              local_494 = 0;
              piVar8 = local_434;
              iVar10 = local_430;
            }
            FUN_004e3e70(&local_44c,&local_44c);
            puVar6 = (undefined4 *)(*local_47c + local_490);
            local_490 = local_490 + -0xc;
            *puVar6 = local_44c;
            puVar6[1] = local_448;
            puVar6[2] = local_444;
            puVar6 = (undefined4 *)(*local_47c + local_498);
            *puVar6 = local_440;
            puVar6[1] = local_43c;
            puVar6[2] = local_438;
            iVar4 = iVar4 + -1;
            local_4b4 = local_4b4 + local_478;
            local_488 = local_488 + local_478;
            local_498 = local_498 + -0xc;
            local_480 = local_480 + -1;
          } while (local_480 != 0);
          local_480 = 0;
        }
        local_494 = 0;
        local_4c4 = (uint)local_4c0;
        local_4bc = 0;
        local_4b8 = ((int)local_474 + local_48c) * 0xc;
        local_4b4 = iVar10;
        do {
          puVar6 = (undefined4 *)(*local_47c + local_4bc);
          local_4b0 = *puVar6;
          local_4ac = puVar6[1];
          local_4a8 = puVar6[2];
          puVar6 = (undefined4 *)(local_4c4 + *local_450);
          *puVar6 = local_4b0;
          puVar6[1] = local_4ac;
          puVar6[2] = local_4a8;
          puVar7 = (undefined4 *)(local_4b4 + *local_47c);
          puVar6 = (undefined4 *)(local_4b8 + *local_450);
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar6[2] = puVar7[2];
          iVar3 = FUN_004e4020(&local_4b0);
          if (iVar3 != 0) {
            *param_2 = local_4b0;
            param_2[1] = local_4ac;
            param_2[2] = local_4a8;
            return 0;
          }
          local_4b8 = local_4b8 + iVar10;
          local_4c4 = local_4c4 + iVar10;
          local_4bc = local_4bc + 0xc;
          local_494 = local_494 + 1;
          local_4b4 = local_4b4 + 0xc;
        } while (local_494 < (int)uVar9);
        local_48c = local_48c + 1;
        local_4c0 = (int *)((int)local_4c0 + 0xc);
      } while (local_48c < (int)uVar9);
    }
    return 1;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  return 0;
}

