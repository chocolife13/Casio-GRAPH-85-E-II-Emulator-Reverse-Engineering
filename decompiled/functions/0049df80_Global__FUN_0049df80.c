// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049df80
// entry: 0049df80  size: 1333


int FUN_0049df80(byte *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_49c;
  int local_498;
  undefined2 local_494;
  undefined2 local_492;
  undefined2 local_490;
  undefined2 local_48e;
  undefined2 local_48c;
  undefined1 local_488 [24];
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined1 local_464;
  undefined1 local_454 [2];
  short local_452;
  undefined1 local_440 [14];
  undefined1 local_432 [550];
  undefined4 local_20c [131];
  
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_464 = 0;
  puVar4 = local_20c;
  for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  iVar3 = 0;
  iVar2 = 0;
  iVar5 = 0;
  local_494 = 99;
  local_492 = 0x72;
  local_490 = 100;
  local_48e = 0x30;
  local_48c = 0;
  local_49c = 4;
  if (*(short *)(param_1 + 0x1e) != 0) {
    do {
      cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar3,8);
      if (cVar1 != '\0') {
        if ((*param_1 & 0xf) == 1) {
          iVar3 = FUN_004ab180();
          if ((iVar3 == 0) || (iVar3 = FUN_004a2200(0x294,0x295,0x298,0x297), iVar3 == 0x31))
          goto LAB_0049e18a;
          if (iVar3 != 0x32) {
            return 0;
          }
          FUN_0042aac0(&local_494,&PTR_DAT_005bff00,4);
          uVar6 = 3;
        }
        else {
          if ((*param_1 & 0xf) != 2) {
            return -5;
          }
          iVar3 = FUN_004a2200(0x294,0x295,0x298,0x299);
          if (iVar3 == 0x31) {
LAB_0049e18a:
            uVar6 = 1;
            goto LAB_0049e0a4;
          }
          if (iVar3 != 0x32) {
            return 0;
          }
          FUN_0042aac0(&local_494,&DAT_005be7ec,4);
          uVar6 = 2;
        }
        iVar3 = FUN_0049d080(&local_494,local_20c);
        if (iVar3 == -1) {
          return 0;
        }
        if ((uVar6 == 3) && (iVar2 = FUN_004300c0(1), iVar2 != 0)) {
          return iVar2;
        }
LAB_0049e0a4:
        FUN_0052f840();
        iVar3 = 0;
        local_498 = 0;
        if (*(short *)(param_1 + 0x1e) == 0) {
LAB_0049e3ec:
          if (iVar2 == 0) {
LAB_0049e3ff:
            FUN_0049dc90(iVar2,local_440,local_20c,uVar6);
          }
          return iVar2;
        }
        do {
          cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar3,8);
joined_r0x0049e0cb:
          if (cVar1 != '\0') {
            iVar2 = FUN_0052f820();
            if (iVar2 == 1) {
LAB_0049e49e:
              FUN_0052b240(1);
              return 0;
            }
            cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar3,7);
            if (cVar1 == '\0') {
              FUN_0049d5c0(param_1,local_498,local_440);
              if (uVar6 == 1) {
                iVar2 = FUN_00422260(local_440,1);
                if (iVar2 == -0xd) {
                  return -0xd;
                }
                if (iVar2 == 1) goto LAB_0049e49e;
              }
              else {
                if (uVar6 < 2) {
                  return -5;
                }
                if (3 < uVar6) {
                  return -5;
                }
                iVar2 = FUN_0049d6d0(local_20c,local_440);
              }
              if (iVar2 != 0) {
                iVar2 = FUN_0049dc90(iVar2,local_440,local_20c,uVar6);
                if (iVar2 == 0) goto code_r0x0049e1e0;
                if (iVar2 == 1) {
                  return 0;
                }
                if (iVar2 != -0xd) {
                  return iVar2;
                }
              }
            }
            else {
              FUN_004b6ef0(local_488,*(int *)(param_1 + 0x20) + 0x10 + iVar3);
              FUN_004b6e70(local_488,&DAT_005bd6b8);
              FUN_004a2c40(*param_1,local_440);
              FUN_0042aac0(local_432,local_488,0x112);
              iVar2 = FUN_0042a100(local_440,&local_49c,&local_470,local_454);
              if (iVar2 == 0) {
                do {
                  iVar2 = FUN_0052f820();
                  if (iVar2 == 1) {
LAB_0049e43d:
                    FUN_0042a180(local_49c);
                    FUN_0052b240(1);
                    return 0;
                  }
                  if ((((local_452 != 0) && (local_452 != 10)) && (local_452 != 8)) &&
                     (local_452 != 9)) {
                    FUN_004b6ef0(local_488,*(int *)(param_1 + 0x20) + 0x10 + iVar3);
                    FUN_004b6e70(local_488,&DAT_005bfefc);
                    FUN_004a2c40(*param_1,local_440);
                    FUN_0042aac0(local_432,local_488,0x112);
                    iVar2 = FUN_0042a410(local_440,&local_470);
                    FUN_0042a490(local_440 + iVar2 * 2);
                    do {
                      if (uVar6 == 1) {
                        iVar2 = FUN_00422260(local_440,1);
                        if (iVar2 == -0xd) {
                          FUN_0042a180(local_49c);
                          return -0xd;
                        }
                        if (iVar2 == 1) goto LAB_0049e43d;
                      }
                      else {
                        if (uVar6 < 2) {
                          return -5;
                        }
                        if (3 < uVar6) {
                          return -5;
                        }
                        iVar2 = FUN_0049d6d0(local_20c,local_440);
                      }
                      if (iVar2 == 0) goto LAB_0049e384;
                      iVar2 = FUN_0049dc90(iVar2,local_440,local_20c,uVar6);
                    } while (iVar2 == 0);
                    if (iVar2 != -0xd) {
                      if (iVar2 == 1) {
                        iVar2 = 0;
                      }
                      FUN_0042a180(local_49c);
                      return iVar2;
                    }
                  }
LAB_0049e384:
                  iVar2 = FUN_0042a150(local_49c,&local_470,local_454);
                } while (iVar2 == 0);
                FUN_0042a180(local_49c);
              }
              if ((iVar2 != -0x10) && (iVar2 != -1)) goto LAB_0049e3ff;
              iVar2 = 0;
            }
          }
          local_498 = local_498 + 1;
          iVar3 = iVar3 + 0x1c;
          if ((int)(uint)*(ushort *)(param_1 + 0x1e) <= local_498) goto LAB_0049e3ec;
        } while( true );
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x1e));
  }
  return 0;
code_r0x0049e1e0:
  cVar1 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar3,8);
  goto joined_r0x0049e0cb;
}

