// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049d080
// entry: 0049d080  size: 1294


undefined4 FUN_0049d080(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  uint local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined2 local_53c [14];
  undefined2 local_520;
  undefined2 local_51e;
  undefined2 local_51c;
  undefined2 local_51a;
  undefined2 local_518;
  undefined2 local_516;
  undefined2 local_514;
  undefined2 local_512;
  undefined2 local_510;
  undefined2 local_50e;
  undefined2 local_50c;
  undefined1 local_508 [2];
  short local_506;
  ushort local_4f4;
  undefined4 uStack_4f2;
  undefined2 uStack_4ee;
  ushort local_4ec;
  ushort uStack_4ea;
  undefined2 auStack_4e8 [2];
  undefined1 local_4e4;
  undefined1 local_4e0 [792];
  char local_1c8 [264];
  undefined1 local_c0 [192];
  
  local_544 = 4;
  local_540 = 0;
  local_520 = 0x5c;
  local_51e = 0x5c;
  local_51c = 0x66;
  local_51a = 0x6c;
  local_518 = 0x73;
  local_516 = 0x30;
  local_514 = 0x5c;
  local_512 = 0x2a;
  local_510 = 0x2e;
  local_50e = 0x2a;
  local_50c = 0;
  local_53c[0] = 0;
  local_53c[1] = 0;
  local_53c[2] = 0;
  local_53c[3] = 0;
  local_53c[4] = 0;
  local_53c[5] = 0;
  local_53c[6] = 0;
  local_53c[7] = 0;
  local_53c[8] = 0;
  local_53c[9] = 0;
  local_53c[10] = 0;
  local_53c[0xb] = 0;
  local_53c[0xc] = 0;
  thunk_FUN_0040add0();
  iVar4 = FUN_004299c0(param_1);
  if ((iVar4 == 1) || (iVar4 == 2)) {
    FUN_004a2610(&local_4f4,local_c0);
    FUN_00525b70(4);
    auStack_4e8[0] = (undefined2)DAT_005bfef4;
    auStack_4e8[1] = (undefined2)((uint)DAT_005bfef4 >> 0x10);
    local_4e4 = DAT_005bfef8;
    local_4f4 = 0;
    FUN_0042a4c0(&local_51c,param_1,4);
    uVar5 = 1;
    iVar4 = FUN_0042a100(&local_520,&local_544,local_53c,local_508);
    do {
      if (iVar4 < 0) break;
      if (local_506 == 0) {
        iVar4 = FUN_0042a410(local_53c);
        local_53c[iVar4] = 0;
        FUN_0042ab20(local_53c,0,0xc);
        FUN_0042aa50(auStack_4e8 + (uint)uVar5 * 4,local_53c,8);
        uVar5 = uVar5 + 1;
      }
      iVar4 = FUN_0042a150(local_544,local_53c,local_508);
    } while (uVar5 < 100);
    FUN_0042a180(local_544);
    FUN_0055531d(local_4e0,uVar5 - 1,8,&LAB_0049d060);
    uVar3 = 0;
    do {
      uStack_4ea = uVar5;
      if (uVar5 <= uVar3) {
        if (uVar3 < 4) {
          local_548 = (uint)uVar3;
          goto LAB_0049d2f6;
        }
        break;
      }
      *(ushort *)((int)&uStack_4f2 + (uint)uVar3 * 2) = uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
switchD_0049d347_caseD_7533:
    do {
      do {
        FUN_004a27a0(&local_4f4,local_c0);
        iVar4 = FUN_00526620(&local_540);
      } while (iVar4 != 0);
      switch(local_540) {
      case 0x7532:
      case 0x754d:
        FUN_00525bc0();
        return 0xffffffff;
      case 0x7534:
        FUN_0042a4c0(param_2,&local_520,7);
        *(undefined2 *)(param_2 + 0xe) = 0;
        FUN_0042ab20(param_2,0,0x105);
        if (local_4f4 == 0) {
          FUN_00525bc0();
          return 0;
        }
        iVar4 = FUN_0042a410(param_2,auStack_4e8 + (uint)local_4f4 * 4,8);
        FUN_0042aac0(param_2 + iVar4 * 2);
        FUN_0042ab20(param_2,0,0x105);
        iVar4 = FUN_0042a410(param_2);
        *(undefined2 *)(param_2 + iVar4 * 2) = 0x5c;
        FUN_00525bc0();
        return 1;
      case 0x7542:
        if (local_4f4 < uStack_4ea) {
          if (local_4f4 != (ushort)uStack_4f2) {
            local_4f4 = local_4f4 - 1;
            break;
          }
          if (local_4f4 == 0) {
            bVar2 = 0;
            if ((uint)(ushort)uStack_4f2 != uStack_4ea - 1) {
              do {
                if (3 < bVar2) goto LAB_0049d3b5;
                bVar2 = bVar2 + 1;
              } while ((uint)*(ushort *)((int)&uStack_4f2 + (uint)bVar2 * 2) != uStack_4ea - 1);
              if (3 < bVar2) {
LAB_0049d3b5:
                local_4f4 = uStack_4ea - 1;
                uStack_4f2._2_2_ = 0xffff;
                uStack_4ee = 0xffff;
                local_4ec = 0xffff;
                uStack_4f2._0_2_ = local_4f4;
                break;
              }
            }
            local_4f4 = uStack_4ea - 1;
            break;
          }
          local_4f4 = (ushort)uStack_4f2 - 1;
          bVar2 = 0;
          local_548 = 0;
          uVar5 = local_4f4;
          do {
            uVar6 = local_548;
            if (uStack_4ea <= uVar5) goto LAB_0049d480;
            bVar2 = bVar2 + 1;
            local_548 = (uint)bVar2;
            *(ushort *)((int)&uStack_4f2 + uVar6 * 2) = uVar5;
            uVar5 = uVar5 + 1;
          } while (bVar2 < 4);
        }
        break;
      case 0x7547:
        if (local_4f4 < uStack_4ea) {
          if ((uint)local_4f4 == uStack_4ea - 1) {
            bVar2 = 0;
            uStack_4f2._0_2_ = 0;
            local_4f4 = 0;
            local_548 = 0;
            do {
              uVar6 = local_548;
              uVar5 = (ushort)bVar2;
              if (uStack_4ea <= uVar5) goto LAB_0049d480;
              bVar2 = bVar2 + 1;
              local_548 = (uint)bVar2;
              *(ushort *)((int)&uStack_4f2 + uVar6 * 2) = uVar5;
            } while (bVar2 < 4);
          }
          else if (local_4f4 == local_4ec) {
            local_4f4 = local_4f4 + 1;
            bVar2 = 4;
            local_548 = 4;
            uVar5 = local_4ec + 1;
            do {
              uVar6 = local_548;
              if (uVar5 == 0) break;
              bVar2 = bVar2 - 1;
              local_548 = (uint)bVar2;
              (&local_4f4)[uVar6] = uVar5;
              uVar5 = uVar5 - 1;
            } while (bVar2 != 0);
          }
          else {
            local_4f4 = local_4f4 + 1;
          }
        }
      }
    } while( true );
  }
  if (iVar4 != 3) {
    return 0xffffffff;
  }
  iVar4 = FUN_00406df0(local_1c8);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_005bfefc;
  do {
    pcVar10 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar4 = -1;
  pcVar8 = local_1c8;
  do {
    pcVar9 = pcVar8;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar6;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_0042aac0(param_2,local_1c8,0x105);
  return 0;
LAB_0049d480:
  if (bVar2 < 4) {
LAB_0049d2f6:
    puVar11 = (undefined4 *)((int)&uStack_4f2 + local_548 * 2);
    for (uVar6 = 4 - local_548 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    for (uVar6 = (uint)((4 - local_548 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined2 *)puVar11 = 0xffff;
      puVar11 = (undefined4 *)((int)puVar11 + 2);
    }
  }
  goto switchD_0049d347_caseD_7533;
}

