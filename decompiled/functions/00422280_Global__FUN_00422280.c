// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00422280
// entry: 00422280  size: 1786


int FUN_00422280(undefined4 param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  uint local_4b0;
  int local_4ac;
  undefined4 local_4a8;
  undefined1 local_4a1;
  byte local_4a0 [12];
  int local_494;
  int local_490;
  byte local_48c [12];
  uint local_480;
  int local_47c;
  undefined1 local_475;
  int local_474;
  uint local_470;
  undefined4 local_46c;
  uint local_468;
  undefined1 local_464 [8];
  undefined1 local_45c [8];
  undefined4 local_454;
  undefined1 uStack_450;
  undefined1 local_44c [4];
  undefined1 local_448 [4];
  undefined1 local_444 [4];
  undefined1 local_440 [4];
  undefined1 local_43c [4];
  undefined1 local_438 [8];
  char local_430;
  undefined2 local_41a;
  undefined1 local_418 [18];
  uint local_406;
  undefined4 local_400 [256];
  
  local_4a8 = 0xc;
  local_490 = 0;
  local_480 = 0;
  local_4b0 = 0;
  local_4ac = 0;
  *param_3 = 1;
  thunk_FUN_0040add0();
  FUN_0052f840();
  local_4a0[0] = 0;
  local_4a0[1] = 0;
  local_4a0[2] = 0;
  local_4a0[3] = 0;
  local_48c[0] = 0;
  local_48c[1] = 0;
  local_48c[2] = 0;
  local_48c[3] = 0;
  local_4a0[4] = 0;
  local_4a0[5] = 0;
  local_4a0[6] = 0;
  local_4a0[7] = 0;
  local_48c[4] = 0;
  local_48c[5] = 0;
  local_48c[6] = 0;
  local_48c[7] = 0;
  local_4a0[8] = 0;
  local_48c[8] = 0;
  local_48c[9] = 0;
  local_48c[10] = 0;
  local_48c[0xb] = 0;
  iVar2 = FUN_0049d690(param_1,&local_4a8);
  iVar3 = iVar2;
  if ((-1 < iVar2) && (iVar3 = FUN_00429d30(local_4a8,local_438,0x20,0), -1 < iVar3)) {
    FUN_0041f800(local_438,0x20);
    iVar3 = FUN_0041f690(local_438);
    if ((iVar3 == 0) || (local_430 != '1')) {
      iVar3 = -0x22;
    }
    else {
      iVar3 = FUN_0041f710(local_438,iVar2);
      if (iVar3 != 0) {
        iVar3 = FUN_0041f6c0(local_438);
        if (iVar3 != 0) {
          iVar3 = -0x2a;
          goto LAB_00422960;
        }
        uVar7 = CONCAT11((char)local_41a,(char)((ushort)local_41a >> 8));
        local_468 = (uint)uVar7;
        if (uVar7 != 0) {
          iVar2 = 0x20;
          uVar5 = (uint)uVar7;
          local_470 = uVar5;
          FUN_0049c8f0(param_1,0,uVar5);
          iVar3 = FUN_00429d30(local_4a8,local_418,0x14,0x20);
          if (-1 < iVar3) {
            while( true ) {
              iVar10 = (local_406 & 0xff) * 0x100 + (local_406 >> 8 & 0xff);
              local_474 = iVar10;
              iVar3 = FUN_00429d30(local_4a8,local_464,0x18,iVar2 + 0x14);
              if (iVar3 < 0) break;
              local_4b0 = CONCAT13(uStack_450,local_454._1_3_);
              iVar2 = iVar2 + 0x2c;
              local_494 = iVar2;
              FUN_004b71f0(local_4a0,local_464,8);
              FUN_004b71f0(local_48c,local_45c,8);
              if (*param_3 == 0) {
                param_2 = 0;
              }
              local_4ac = FUN_00421f60(local_418,local_4a0,local_48c,param_2);
              if (local_4ac == 4) {
LAB_00422929:
                iVar3 = 1;
                break;
              }
              if (local_4ac == 6) {
                local_4ac = 1;
                *param_3 = 0;
              }
              local_47c = 0;
              if (iVar10 != 0) {
                do {
                  iVar10 = local_4ac;
                  if (local_47c != 0) {
                    iVar3 = FUN_00429d30(local_4a8,local_464,0x18,iVar2);
                    if (iVar3 < 0) goto LAB_00422939;
                    local_4b0 = CONCAT13(uStack_450,local_454._1_3_);
                    local_494 = iVar2 + 0x18;
                    FUN_004b71f0(local_4a0,local_464,8);
                    FUN_004b71f0(local_48c,local_45c,8);
                  }
                  pcVar8 = s__GLOBAL_005be058;
                  pbVar4 = local_4a0;
                  local_4b0 = (local_4b0 & 0xff0000 | local_4b0 >> 0x10) >> 8 |
                              (local_4b0 & 0xff00 | local_4b0 << 0x10) << 8;
                  do {
                    bVar1 = *pbVar4;
                    bVar12 = bVar1 < (byte)*pcVar8;
                    if (bVar1 != *pcVar8) {
LAB_00422589:
                      iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_0042258e;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar4[1];
                    bVar12 = bVar1 < ((byte *)pcVar8)[1];
                    if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00422589;
                    pbVar4 = pbVar4 + 2;
                    pcVar8 = (char *)((byte *)pcVar8 + 2);
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_0042258e:
                  if (iVar3 == 0) {
                    pcVar8 = s_ALPHAMEM_005bdd44;
                    pbVar4 = local_48c;
                    do {
                      bVar1 = *pbVar4;
                      bVar12 = bVar1 < (byte)*pcVar8;
                      if (bVar1 != *pcVar8) {
LAB_004225c5:
                        iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                        goto LAB_004225ca;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar4[1];
                      bVar12 = bVar1 < ((byte *)pcVar8)[1];
                      if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_004225c5;
                      pbVar4 = pbVar4 + 2;
                      pcVar8 = (char *)((byte *)pcVar8 + 2);
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_004225ca:
                    if (iVar3 == 0) {
                      local_490 = 1;
                    }
                    else {
                      pcVar8 = s_SETUP_005be050;
                      pbVar4 = local_48c;
                      do {
                        bVar1 = *pbVar4;
                        bVar12 = bVar1 < (byte)*pcVar8;
                        if (bVar1 != *pcVar8) {
LAB_00422608:
                          iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                          goto LAB_0042260d;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar4[1];
                        bVar12 = bVar1 < ((byte *)pcVar8)[1];
                        if (bVar1 != ((byte *)pcVar8)[1]) goto LAB_00422608;
                        pbVar4 = pbVar4 + 2;
                        pcVar8 = (char *)((byte *)pcVar8 + 2);
                      } while (bVar1 != 0);
                      iVar3 = 0;
LAB_0042260d:
                      if (iVar3 == 0) {
                        local_490 = 2;
                      }
                    }
                  }
                  else {
                    local_490 = 0;
                    if (0 < iVar10) {
                      if (iVar10 < 3) {
                        iVar3 = FUN_004103d0(local_4a0,local_440,&local_4a1);
                        if ((iVar3 == 0) || (iVar3 = FUN_00410440(local_4a0,&local_4a1), iVar3 == 0)
                           ) {
                          FUN_00410e00(local_4a0,local_48c);
                          uVar6 = FUN_004ab920(local_454,local_4b0,DAT_005d67e8);
                          iVar3 = FUN_004106b0(local_4a0,local_48c,uVar6);
                          if (iVar3 == 0) goto LAB_00422777;
                        }
LAB_00422930:
                        iVar3 = -4;
                        goto LAB_00422939;
                      }
                      if (iVar10 == 5) {
                        if ((param_2 != 0) &&
                           (iVar3 = FUN_004105d0(local_4a0,local_48c,&local_475,local_448,local_444,
                                                 local_44c), iVar3 == 0)) {
                          iVar3 = FUN_00421ef0(local_48c);
                          if (iVar3 == 4) goto LAB_00422929;
                          if (iVar3 == 6) {
                            param_2 = 0;
                          }
                          else if (iVar3 != 1) {
                            local_4ac = 3;
                            goto LAB_00422777;
                          }
                        }
                        local_4ac = 1;
                        FUN_00410e00(local_4a0,local_48c);
                        uVar6 = FUN_004ab920(local_454,local_4b0,DAT_005d67e8);
                        iVar3 = FUN_004106b0(local_4a0,local_48c,uVar6);
                        if (iVar3 != 0) goto LAB_00422930;
                      }
                    }
                  }
LAB_00422777:
                  iVar2 = 0;
                  do {
                    uVar5 = 0x400;
                    if (local_4b0 < 0x401) {
                      uVar5 = local_4b0;
                    }
                    iVar3 = FUN_00429d30(local_4a8,local_400,uVar5,local_494);
                    if (iVar3 < 0) goto LAB_00422939;
                    if (local_490 == 0) {
                      if ((0 < local_4ac) && (local_4ac < 3)) {
                        FUN_00411520(local_4a0,local_48c,iVar2,iVar3,local_400);
                      }
                    }
                    else if (local_490 == 1) {
                      puVar9 = local_400;
                      puVar11 = (undefined4 *)PTR_DAT_005c421c;
                      for (iVar10 = 0xae; iVar10 != 0; iVar10 = iVar10 + -1) {
                        *puVar11 = *puVar9;
                        puVar9 = puVar9 + 1;
                        puVar11 = puVar11 + 1;
                      }
                    }
                    else if (local_490 == 2) {
                      puVar9 = local_400;
                      puVar11 = (undefined4 *)PTR_DAT_005c4218;
                      for (iVar10 = 0x19; iVar10 != 0; iVar10 = iVar10 + -1) {
                        *puVar11 = *puVar9;
                        puVar9 = puVar9 + 1;
                        puVar11 = puVar11 + 1;
                      }
                    }
                    local_4b0 = local_4b0 - iVar3;
                    local_494 = local_494 + iVar3;
                    iVar2 = iVar2 + iVar3;
                  } while (local_4b0 != 0);
                  if ((((0 < local_4ac) && (local_4ac < 3)) && (local_490 == 0)) &&
                     (iVar2 = FUN_004105d0(local_4a0,local_48c,&local_454,local_43c,&local_46c,
                                           &local_4b0), iVar2 == 0)) {
                    uVar6 = FUN_004215f0(local_4a0,local_48c,local_454,0);
                    FUN_00421250(local_46c,uVar6);
                  }
                  FUN_00422980(local_4a0,local_48c);
                  local_480 = local_480 + 1;
                  if ((ushort)local_468 <= (ushort)local_480) {
                    iVar3 = 0;
                    goto LAB_00422939;
                  }
                  local_474 = local_474 + -1;
                  local_47c = local_47c + 1;
                  uVar5 = local_470;
                  iVar2 = local_494;
                } while (0 < local_474);
              }
              iVar10 = FUN_00429cd0(local_4a8,iVar2);
              if (iVar10 < 0) break;
              FUN_0049c8f0(param_1,local_480 & 0xffff,uVar5);
              iVar3 = FUN_00429d30(local_4a8,local_418,0x14,iVar2);
              if (iVar3 < 0) break;
            }
          }
LAB_00422939:
          FUN_0049c8f0(param_1,local_470,local_470);
          FUN_00525bc0();
          if (local_4ac == 3) {
            iVar3 = -0xd;
          }
          goto LAB_00422960;
        }
      }
      iVar3 = -0x2b;
    }
  }
LAB_00422960:
  FUN_00429be0(local_4a8);
  return iVar3;
}

