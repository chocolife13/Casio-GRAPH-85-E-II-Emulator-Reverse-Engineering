// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00519290
// entry: 00519290  size: 1194


uint FUN_00519290(int param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  int local_c8;
  undefined4 local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  uint local_90;
  uint local_84;
  undefined1 local_80 [128];
  
  local_c4 = 0;
  FUN_00538710();
  local_9c = 0;
  pcVar10 = (char *)(*(int *)(param_1 + 0x8dc) + 0x1c);
  cVar2 = *pcVar10;
  while (cVar2 != '\0') {
    pcVar1 = pcVar10 + 0x20;
    pcVar10 = pcVar10 + 0x20;
    local_9c = local_9c + 1;
    cVar2 = *pcVar1;
  }
  local_9c = local_9c + -1;
  local_c8 = 0;
  do {
    if ((*(byte *)(param_1 + 0x8e0) & 0xc0) != 0) {
      FUN_00510380(param_1,local_c8);
    }
    iVar7 = *(int *)(local_c8 * 0x20 + 8 + *(int *)(param_1 + 0x8dc));
    if (iVar7 == 1) {
      local_c4 = 0xc;
    }
    else if (iVar7 == 2) {
      local_c4 = 0xd;
    }
    else if (iVar7 == 3) {
      local_c4 = 0xe;
    }
    FUN_004426c0(local_c4,&local_a8);
    FUN_004e5780(&local_b8);
    iVar7 = param_1 + 0x800;
    local_c0 = FUN_004d52d0(&local_a8,&local_bc,iVar7,*(undefined1 *)(param_1 + 0x8e2));
    uVar6 = FUN_004d53c0(&local_b8,&local_ac,iVar7);
    local_c0 = local_c0 | uVar6;
    local_90 = FUN_004d5130(&local_a8,local_98,iVar7,*(undefined1 *)(param_1 + 0x8e2));
    uVar6 = FUN_004d5210(&local_b8,local_94,iVar7);
    local_90 = local_90 | uVar6;
    if ((*(byte *)(param_1 + 0x8e1) & 4) != 0) {
      FUN_0051eaa0(&local_a8,&local_b8);
    }
    bVar3 = true;
LAB_005193cd:
    while( true ) {
      do {
        FUN_0051f7b0(local_80);
        FUN_0051f870();
        FUN_00522500(local_98);
        iVar7 = FUN_00526620(&local_84);
        FUN_00522930(local_98);
        FUN_0051f7f0(local_80);
        iVar8 = FUN_0051c730();
        if (iVar8 != 0) {
          return 0xfffffffa;
        }
      } while (iVar7 != 0);
      if (local_84 < 0x754f) break;
      if (local_84 < 0x7635) {
        if (local_84 == 0x7634) {
          FUN_0051af80(0x7634,param_1);
        }
        else {
          if (local_84 != 0x7555) {
            if (local_84 == 0x7557) {
              return 0xfffffff5;
            }
            goto switchD_00519446_caseD_7533;
          }
          iVar7 = FUN_00502180();
joined_r0x005195a9:
          if (iVar7 != 0) {
            return 0xfffffff2;
          }
        }
      }
      else {
        if (local_84 != 0x7635) goto code_r0x005195fe;
        FUN_0051af80(0x7635,param_1);
        FUN_0050acb0(param_1);
LAB_00519640:
        if ((*(byte *)(param_1 + 0x8e1) & 4) != 0) {
          FUN_0051eaa0(&local_a8,&local_b8);
        }
      }
    }
    if (local_84 == 0x754e) {
      iVar7 = FUN_005022f0(CONCAT31(0x75,*(byte *)(param_1 + 0x8e0) >> 4) & 0xffffff03);
      goto joined_r0x005195a9;
    }
    switch(local_84) {
    case 0x7532:
      return 0xfffffffe;
    default:
      goto switchD_00519446_caseD_7533;
    case 0x7534:
      if (bVar3) {
        iVar7 = FUN_0050f060(&local_a8,&local_b8,param_1,local_c8,1);
        if (iVar7 != 0) {
          uVar6 = FUN_0051ff90(iVar7,local_98);
          return uVar6;
        }
        bVar3 = false;
      }
      else {
        local_a8 = local_b8;
        local_a4 = local_b4;
        local_a0 = local_b0;
        bVar3 = true;
      }
      iVar7 = FUN_004e4020(&local_a8);
      if ((iVar7 != 0) ||
         (iVar7 = FUN_004e4020(&local_b8), uVar5 = local_ac, uVar4 = local_bc, iVar7 != 0)) {
        FUN_0052b240(iVar7);
        return 0xfffffffe;
      }
      uVar6 = FUN_004d52d0(&local_a8,&local_bc,param_1 + 0x800,*(undefined1 *)(param_1 + 0x8e2));
      uVar9 = FUN_004d53c0(&local_b8,&local_ac,param_1 + 0x800);
      uVar6 = uVar6 | uVar9;
      local_90 = FUN_004d5130(&local_a8,local_98,param_1 + 0x800,
                              CONCAT31((int3)(uVar6 >> 8),*(undefined1 *)(param_1 + 0x8e2)));
      uVar9 = FUN_004d5210(&local_b8,local_94,param_1 + 0x800);
      local_90 = local_90 | uVar9;
      bVar11 = local_c0 == 0;
      local_c4 = 0;
      local_c0 = uVar6;
      if ((bVar11) && (uVar6 == 0)) {
        FUN_0050f940(uVar4,uVar5,local_bc,local_ac,param_1,2,*(undefined1 *)(param_1 + 0x8e2));
      }
      goto LAB_00519640;
    case 0x753f:
      return 0x7956;
    case 0x7542:
    case 0x7547:
      if (local_84 == 0x7542) {
        if (local_c8 == 0) {
          local_c8 = local_9c + -1;
        }
        else {
          local_c8 = local_c8 + -1;
        }
      }
      else if (local_84 == 0x7547) {
        if (local_c8 == local_9c + -1) {
          local_c8 = 0;
        }
        else {
          local_c8 = local_c8 + 1;
        }
      }
      break;
    case 0x754d:
      return 0xffffffff;
    }
  } while( true );
code_r0x005195fe:
  if (local_84 != 0x7957) {
switchD_00519446_caseD_7533:
    if ((local_84 != 0) && ((local_84 < 30000 || (0x75f7 < local_84)))) {
      return local_84;
    }
  }
  goto LAB_005193cd;
}

