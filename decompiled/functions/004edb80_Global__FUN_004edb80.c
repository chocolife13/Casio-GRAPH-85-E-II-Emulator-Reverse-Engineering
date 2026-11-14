// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004edb80
// entry: 004edb80  size: 1016


undefined4 FUN_004edb80(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  undefined1 local_6c [2];
  uint local_6a;
  int *local_64;
  undefined1 local_54 [24];
  undefined1 local_3c [24];
  undefined1 local_24 [12];
  undefined1 local_18 [8];
  int *local_10;
  
  FUN_00529950(0x1f);
  FUN_00529950(0x22);
  FUN_004e5780(local_3c);
  iVar3 = FUN_00528ac0(0x1e,1,1,local_54);
  if (3 < iVar3) {
    return 4;
  }
  iVar3 = FUN_004e4000(local_54);
  if (iVar3 != 0) {
    return 0x11;
  }
  FUN_004e23b0(local_54,&local_a4,1);
  iVar3 = FUN_004e71d0(&local_a4,local_3c);
  if (iVar3 != 0) {
    return 3;
  }
  piVar4 = (int *)FUN_004ad630((param_1 * 3 & 0x3fffU) << 2);
  if (piVar4 == (int *)0x0) {
    return 4;
  }
  iVar3 = 1;
  if (0 < param_1) {
    iVar8 = 0xc;
    do {
      iVar3 = iVar3 + 1;
      iVar5 = FUN_00528ac0(0x1e,1,iVar3,&local_a4);
      if (3 < iVar5) {
        FUN_004ad6d0(piVar4);
        return 4;
      }
      iVar5 = FUN_004e4000(&local_a4);
      if (iVar5 != 0) {
        FUN_004ad6d0(piVar4);
        return 0x11;
      }
      FUN_004e6e60(&local_a4,local_54,&local_a4);
      FUN_004e7910(&local_a4,&local_a4);
      FUN_004e9030(&local_a4,&local_a4,local_24);
      iVar5 = FUN_004e4020(&local_a4);
      if (iVar5 != 0) {
        FUN_004ad6d0(piVar4);
        uVar6 = FUN_004e4020(&local_a4);
        return uVar6;
      }
      puVar1 = (undefined4 *)(iVar8 + -0xc + *piVar4);
      iVar8 = iVar8 + 0xc;
      *puVar1 = local_a4;
      puVar1[1] = local_a0;
      puVar1[2] = local_9c;
    } while (iVar3 <= param_1);
  }
  iVar3 = FUN_0052f820();
  if (iVar3 != 0) {
    FUN_004ad6d0(piVar4);
    return 1;
  }
  cVar2 = FUN_004ec130(param_1,piVar4,local_6c,local_18);
  if (cVar2 != '\0') {
    FUN_004ad6d0(piVar4);
    iVar8 = 1;
    uVar9 = local_6a & 0xffff;
    local_a8 = 1;
    iVar3 = FUN_004e4000(local_6c);
    if (iVar3 != 0) {
      local_a8 = 2;
    }
    iVar3 = FUN_00529400(0x1f,uVar9,local_a8);
    if (3 < iVar3) {
      return 4;
    }
    iVar3 = FUN_00529400(0x22,uVar9,1);
    if (3 < iVar3) {
      return 4;
    }
    local_8c = local_64;
    local_70 = local_10;
    if (uVar9 != 0) {
      iVar3 = 0xc;
      do {
        iVar5 = *local_10 + -0xc + iVar3;
        local_88 = *(undefined4 *)(*local_10 + -0xc + iVar3);
        local_84 = *(undefined4 *)(iVar5 + 4);
        local_80 = *(undefined4 *)(iVar5 + 8);
        iVar5 = FUN_00528bf0(0x22,iVar8,1,&local_88);
        if (3 < iVar5) {
          return 4;
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar8 <= (int)uVar9);
    }
    iVar3 = 1;
    piVar4 = local_10;
    if (uVar9 != 0) {
      iVar5 = 0xc;
      iVar8 = (uVar9 * 3 + 3) * 4;
      do {
        iVar7 = *local_8c + -0xc + iVar5;
        local_88 = *(undefined4 *)(*local_8c + -0xc + iVar5);
        local_84 = *(undefined4 *)(iVar7 + 4);
        local_80 = *(undefined4 *)(iVar7 + 8);
        if (local_a8 == 2) {
          iVar7 = *local_8c + -0xc + iVar8;
          local_7c = *(undefined4 *)(*local_8c + -0xc + iVar8);
          local_78 = *(undefined4 *)(iVar7 + 4);
          local_74 = *(undefined4 *)(iVar7 + 8);
        }
        FUN_004e3800(&local_88,&local_a4);
        iVar7 = FUN_00528bf0(0x1f,iVar3,1,&local_a4);
        if (3 < iVar7) {
          return 4;
        }
        if (local_a8 == 2) {
          FUN_004e3870(&local_88,&local_a4);
          iVar7 = FUN_00528bf0(0x1f,iVar3,2,&local_a4);
          if (3 < iVar7) {
            return 4;
          }
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0xc;
        iVar8 = iVar8 + 0xc;
        piVar4 = local_70;
      } while (iVar3 <= (int)uVar9);
    }
    FUN_004ad6d0(local_8c);
    FUN_004ad6d0(piVar4);
    return 0;
  }
  FUN_004ad6d0(piVar4);
  uVar6 = FUN_004e4020(local_6c);
  return uVar6;
}

