// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004cc820
// entry: 004cc820  size: 1621


undefined4
FUN_004cc820(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,int param_6
            )

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  int local_494;
  int local_490;
  int local_48c;
  int local_488;
  int *local_484;
  int *local_480;
  int *local_47c;
  int *local_478;
  int *local_474;
  int local_470;
  uint local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  int local_44c;
  int *local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
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
  
  local_448 = (int *)param_2[2];
  local_478 = *(int **)(param_1 + 8);
  local_484 = *(int **)(param_4 + 8);
  local_480 = (int *)param_3[2];
  local_47c = *(int **)(param_5 + 8);
  iVar10 = 0;
  local_474 = *(int **)(param_6 + 8);
  local_468 = 0;
  FUN_004e57a0(&local_42c);
  FUN_004e5780(&local_420);
  uVar1 = *(ushort *)(param_1 + 2);
  uVar6 = (uint)uVar1;
  local_46c = (uint)*(ushort *)(param_1 + 4);
  iVar9 = uVar6 * uVar6;
  if (uVar6 != 0) {
    iVar11 = 0;
    do {
      FUN_004e5070(iVar10,&local_4ac);
      puVar3 = (undefined4 *)(iVar11 + *local_484);
      iVar10 = iVar10 + 1;
      *puVar3 = local_4ac;
      puVar3[1] = local_4a8;
      puVar3[2] = local_4a4;
      iVar11 = iVar11 + 0xc;
    } while (iVar10 < (int)uVar6);
  }
  if (0 < iVar9) {
    iVar10 = 0;
    do {
      puVar3 = (undefined4 *)(iVar10 + *local_478);
      puVar5 = (undefined4 *)(iVar10 + *local_480);
      iVar9 = iVar9 + -1;
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      puVar5[2] = puVar3[2];
      iVar10 = iVar10 + 0xc;
    } while (iVar9 != 0);
  }
  iVar9 = FUN_004cd860(param_3,0,param_4,&local_468);
  if ((iVar9 != 0) && (iVar9 = FUN_004cde80(param_3,param_4,&local_468), iVar9 == 1)) {
    piVar4 = local_3fc;
    for (iVar9 = 0xff; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    if (uVar6 != 0) {
      iVar9 = 0;
      piVar4 = local_3fc;
      uVar7 = uVar6;
      do {
        puVar3 = (undefined4 *)(iVar9 + *local_484);
        local_464 = *puVar3;
        local_460 = puVar3[1];
        local_45c = puVar3[2];
        iVar10 = FUN_004e50a0(&local_464);
        *piVar4 = iVar10;
        iVar9 = iVar9 + 0xc;
        piVar4 = piVar4 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    local_478 = (int *)0x0;
    if (uVar6 != 0) {
      local_470 = 0;
      do {
        iVar9 = 0;
        piVar4 = local_3fc;
        uVar7 = uVar6;
        do {
          if ((int *)*piVar4 == local_478) {
            puVar3 = (undefined4 *)(iVar9 + *local_484);
            *puVar3 = local_42c;
            puVar3[1] = local_428;
            uVar8 = local_424;
          }
          else {
            puVar3 = (undefined4 *)(iVar9 + *local_484);
            *puVar3 = local_420;
            puVar3[1] = local_41c;
            uVar8 = local_418;
          }
          piVar4 = piVar4 + 1;
          iVar9 = iVar9 + 0xc;
          uVar7 = uVar7 - 1;
          puVar3[2] = uVar8;
        } while (uVar7 != 0);
        puVar3 = (undefined4 *)*local_484;
        local_4ac = *puVar3;
        local_4a8 = puVar3[1];
        local_4a4 = puVar3[2];
        puVar3 = (undefined4 *)*local_480;
        local_464 = *puVar3;
        local_460 = puVar3[1];
        local_45c = puVar3[2];
        FUN_004e0ef0(&local_4ac,&local_464,&local_4ac,0);
        iVar9 = 1;
        puVar3 = (undefined4 *)*local_474;
        *puVar3 = local_4ac;
        puVar3[1] = local_4a8;
        puVar3[2] = local_4a4;
        piVar4 = local_474;
        if (1 < uVar1) {
          local_494 = 0xc;
          local_490 = uVar6 * 0xc;
          local_48c = local_490;
          do {
            puVar3 = (undefined4 *)(local_494 + *local_484);
            local_414 = *puVar3;
            local_410 = puVar3[1];
            local_40c = puVar3[2];
            if (-1 < iVar9 + -1) {
              iVar11 = 0;
              iVar10 = local_48c;
              local_488 = iVar9;
              do {
                puVar3 = (undefined4 *)(iVar10 + *local_480);
                local_4ac = *puVar3;
                local_4a8 = puVar3[1];
                local_4a4 = puVar3[2];
                puVar3 = (undefined4 *)(*local_474 + iVar11);
                local_464 = *puVar3;
                local_460 = puVar3[1];
                local_45c = puVar3[2];
                FUN_004e0c40(&local_4ac,&local_464,&local_4ac,0);
                FUN_004e0b00(&local_414,&local_4ac,&local_414,0);
                iVar11 = iVar11 + 0xc;
                iVar10 = iVar10 + 0xc;
                local_488 = local_488 + -1;
              } while (local_488 != 0);
              local_488 = 0;
              piVar4 = local_474;
            }
            puVar3 = (undefined4 *)(*local_480 + (uVar6 + 1) * iVar9 * 0xc);
            local_4ac = *puVar3;
            local_4a8 = puVar3[1];
            local_4a4 = puVar3[2];
            FUN_004e0ef0(&local_414,&local_4ac,&local_4ac,0);
            puVar3 = (undefined4 *)(*piVar4 + local_494);
            iVar9 = iVar9 + 1;
            *puVar3 = local_4ac;
            local_494 = local_494 + 0xc;
            puVar3[1] = local_4a8;
            puVar3[2] = local_4a4;
            local_48c = local_48c + local_490;
          } while (iVar9 < (int)uVar6);
        }
        iVar10 = uVar6 * 0xc;
        iVar9 = *piVar4 + -0xc + iVar10;
        local_4ac = *(undefined4 *)(*piVar4 + -0xc + iVar10);
        local_4a8 = *(undefined4 *)(iVar9 + 4);
        local_4a4 = *(undefined4 *)(iVar9 + 8);
        FUN_004e7910(&local_4ac,&local_4ac);
        iVar9 = *local_47c + -0xc + iVar10;
        *(undefined4 *)(*local_47c + -0xc + iVar10) = local_4ac;
        *(undefined4 *)(iVar9 + 4) = local_4a8;
        *(undefined4 *)(iVar9 + 8) = local_4a4;
        iVar9 = uVar6 - 2;
        if (-1 < iVar9) {
          local_48c = iVar9 * uVar6;
          iVar9 = iVar9 * 0xc;
          local_494 = uVar6 - 1;
          local_44c = -uVar6;
          local_490 = local_494;
          do {
            puVar3 = (undefined4 *)(iVar9 + *piVar4);
            local_444 = *puVar3;
            local_440 = puVar3[1];
            local_43c = puVar3[2];
            local_488 = iVar9;
            if (local_494 < (int)uVar6) {
              iVar10 = (local_494 + local_48c) * 0xc;
              iVar11 = uVar6 - local_494;
              do {
                iVar9 = iVar9 + 0xc;
                puVar3 = (undefined4 *)(iVar10 + *local_480);
                local_4ac = *puVar3;
                local_4a8 = puVar3[1];
                local_4a4 = puVar3[2];
                puVar3 = (undefined4 *)(iVar9 + *local_47c);
                local_464 = *puVar3;
                local_460 = puVar3[1];
                local_45c = puVar3[2];
                FUN_004e0c40(&local_4ac,&local_464,&local_4ac,0);
                FUN_004e0b00(&local_444,&local_4ac,&local_444,0);
                iVar10 = iVar10 + 0xc;
                iVar11 = iVar11 + -1;
                piVar4 = local_474;
              } while (iVar11 != 0);
            }
            FUN_004e7910(&local_444,&local_444);
            puVar3 = (undefined4 *)(local_488 + *local_47c);
            iVar9 = local_488 + -0xc;
            *puVar3 = local_444;
            local_494 = local_494 + -1;
            puVar3[1] = local_440;
            puVar3[2] = local_43c;
            local_48c = local_48c + local_44c;
            local_490 = local_490 + -1;
            local_488 = iVar9;
          } while (local_490 != 0);
        }
        iVar9 = 0;
        local_490 = 0;
        if (0 < (int)local_46c) {
          iVar11 = local_46c * 0xc;
          iVar10 = local_470;
          do {
            puVar3 = (undefined4 *)(iVar9 + *local_47c);
            local_4ac = *puVar3;
            local_4a8 = puVar3[1];
            local_4a4 = puVar3[2];
            puVar3 = (undefined4 *)(iVar10 + *local_448);
            *puVar3 = local_4ac;
            puVar3[1] = local_4a8;
            puVar3[2] = local_4a4;
            iVar2 = FUN_004e4020(&local_4ac);
            if (iVar2 != 0) {
              *param_2 = local_4ac;
              param_2[1] = local_4a8;
              param_2[2] = local_4a4;
              return 0;
            }
            iVar10 = iVar10 + iVar11;
            local_490 = local_490 + 1;
            iVar9 = iVar9 + 0xc;
          } while (local_490 < (int)local_46c);
        }
        local_478 = (int *)((int)local_478 + 1);
        local_470 = local_470 + 0xc;
      } while ((int)local_478 < (int)uVar6);
    }
    return 1;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  return 0;
}

