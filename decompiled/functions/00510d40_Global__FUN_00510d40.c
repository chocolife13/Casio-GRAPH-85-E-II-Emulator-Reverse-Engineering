// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00510d40
// entry: 00510d40  size: 1457


int FUN_00510d40(int param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar3 = param_1;
  local_4c = 0;
  local_48 = 0;
  local_30 = *(undefined4 *)(param_1 + 0x890);
  local_44 = 0;
  iVar9 = 1;
  local_2c = *(undefined4 *)(param_1 + 0x894);
  local_28 = *(undefined4 *)(param_1 + 0x898);
  uVar4 = FUN_004e6b40(param_1 + 0x89c,(undefined4 *)(param_1 + 0x890),local_24,param_1 + 0x884,
                       local_24);
  FUN_004e6d90(uVar4);
  uVar4 = FUN_004e5780(local_18);
  iVar5 = FUN_004e7250(local_24,uVar4);
  if (iVar5 == 0) {
    uVar4 = FUN_004e5860(local_18);
    iVar5 = FUN_004e7310(local_24,uVar4);
    if (iVar5 == 0) {
      uVar4 = FUN_004e76a0(local_24,local_24);
      local_38 = FUN_004e50a0(uVar4);
      iVar5 = *(int *)(param_1 + 0x8dc);
      if (*(char *)(iVar5 + 0x1c) != '\0') {
        local_3c = 0;
        do {
          uVar6 = *(uint *)(local_3c + 0x18 + iVar5);
          if (((uVar6 & 0x400) != 0) && ((uVar6 & 0x800) == 0)) {
            if ((uVar6 & 0xa000) == 0) {
              param_1 = 1;
            }
            else {
              param_1 = *(int *)(local_3c + 0x10 + iVar5);
            }
            local_40 = 1;
            if (0 < param_1) {
              do {
                iVar5 = local_40;
                uVar6 = FUN_0050eec0(&local_30,iVar3,local_44);
                if (uVar6 == 0) {
                  iVar5 = FUN_0050e230(&local_30,local_24,local_18,local_c,iVar3,local_44,iVar5);
                  if (iVar5 != 0) {
                    return iVar5;
                  }
                  uVar6 = FUN_004d52d0(local_24,&local_4c,iVar3 + 0x800,
                                       *(undefined1 *)(iVar3 + 0x8e2));
                  uVar7 = FUN_004d53c0(local_18,&local_48,iVar3 + 0x800);
                  uVar6 = uVar6 | uVar7;
                  iVar5 = local_40;
                }
                DAT_005d6800 = 0;
                if ((*(byte *)(iVar3 + 0x8e1) & 1) == 0) {
                  if (uVar6 == 0) {
                    FUN_0050f940(local_4c,local_48,local_4c,local_48,iVar3,
                                 *(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + local_3c),
                                 *(undefined1 *)(iVar3 + 0x8e2));
                  }
                }
                else if (uVar6 == 0) {
                  FUN_0050f990(local_4c,local_48,iVar3,
                               *(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + local_3c),
                               *(undefined1 *)(iVar3 + 0x8e2));
                }
                *(undefined2 *)(*(int *)(iVar3 + 0x8d8) + iVar9 * 8) = (undefined2)local_4c;
                *(undefined2 *)(*(int *)(iVar3 + 0x8d8) + 2 + iVar9 * 8) = (undefined2)local_48;
                *(short *)(*(int *)(iVar3 + 0x8d8) + 4 + iVar9 * 8) = (short)uVar6;
                *(undefined2 *)(*(int *)(iVar3 + 0x8d8) + 6 + iVar9 * 8) = (undefined2)DAT_005d6800;
                iVar9 = iVar9 + 1;
                local_40 = iVar5 + 1;
              } while (local_40 <= param_1);
            }
          }
          iVar8 = local_3c + 0x20;
          local_44 = local_44 + 1;
          iVar5 = *(int *)(iVar3 + 0x8dc);
          iVar10 = local_3c + 0x3c;
          local_3c = iVar8;
        } while (*(char *)(iVar10 + iVar5) != '\0');
        if (iVar9 != 1) {
          iVar5 = 1;
          do {
            local_34 = iVar5;
            if (local_38 < iVar5) {
              uVar4 = FUN_004e5780(local_c);
              iVar9 = FUN_004e7250(iVar3 + 0x884,uVar4);
              if ((iVar9 == 0) || (iVar9 = FUN_004e7290(&local_30,iVar3 + 0x89c), iVar9 == 0)) {
                uVar4 = FUN_004e5780(local_c);
                iVar9 = FUN_004e7310(iVar3 + 0x884,uVar4);
                if (iVar9 == 0) {
                  return 0;
                }
                iVar9 = FUN_004e7250(&local_30,iVar3 + 0x89c);
                if (iVar9 == 0) {
                  return 0;
                }
              }
              local_30 = *(undefined4 *)(iVar3 + 0x89c);
              local_2c = *(undefined4 *)(iVar3 + 0x8a0);
              local_28 = *(undefined4 *)(iVar3 + 0x8a4);
              local_38 = local_38 + -1;
            }
            else {
              uVar4 = FUN_004e5070(iVar5,local_c,&local_30);
              FUN_004e6d00(iVar3 + 0x884,uVar4);
              FUN_004e7910(&local_30,&local_30);
              FUN_004e6a00(iVar3 + 0x890,&local_30,&local_30);
              FUN_004e7910(&local_30,&local_30);
              FUN_004d4d50(&local_30,iVar3 + 0x884);
            }
            iVar9 = *(int *)(iVar3 + 0x8dc);
            local_44 = 0;
            iVar10 = 1;
            if (*(char *)(iVar9 + 0x1c) != '\0') {
              local_3c = 0;
              do {
                uVar6 = *(uint *)(local_3c + 0x18 + iVar9);
                iVar8 = local_3c;
                if (((uVar6 & 0x400) != 0) && ((uVar6 & 0x800) == 0)) {
                  if ((uVar6 & 0xa000) == 0) {
                    param_1 = 1;
                  }
                  else {
                    param_1 = *(int *)(local_3c + 0x10 + iVar9);
                  }
                  local_40 = 1;
                  if (0 < param_1) {
                    do {
                      uVar6 = FUN_0050eec0(&local_30,iVar3,local_44);
                      if (uVar6 == 0) {
                        iVar5 = FUN_0050e230(&local_30,local_24,local_18,local_c,iVar3,local_44,
                                             local_40);
                        if (iVar5 != 0) {
                          return iVar5;
                        }
                        uVar6 = FUN_004d52d0(local_24,&local_4c,iVar3 + 0x800,
                                             *(undefined1 *)(iVar3 + 0x8e2));
                        uVar7 = FUN_004d53c0(local_18,&local_48,iVar3 + 0x800);
                        uVar6 = uVar6 | uVar7;
                        iVar8 = local_3c;
                      }
                      sVar2 = *(short *)(*(int *)(iVar3 + 0x8d8) + 6 + iVar10 * 8);
                      DAT_005d6800 = (int)sVar2;
                      if ((*(byte *)(iVar3 + 0x8e1) & 1) == 0) {
                        if (uVar6 == 0) {
                          psVar1 = (short *)(*(int *)(iVar3 + 0x8d8) + iVar10 * 8);
                          if (*(short *)(*(int *)(iVar3 + 0x8d8) + 4 + iVar10 * 8) == (short)uVar6)
                          {
                            FUN_0050f830((int)*psVar1,(int)psVar1[1],local_4c,local_48,iVar3,
                                         *(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + iVar8),
                                         *(undefined1 *)(iVar3 + 0x8e2));
                          }
                          else {
                            DAT_005d6800 = 0;
                            FUN_0050f940(local_4c,local_48,local_4c,local_48,iVar3,
                                         *(undefined1 *)(*(int *)(iVar3 + 0x8dc) + 0x1c + iVar8),
                                         CONCAT31((int3)((uint)psVar1 >> 8),
                                                  *(undefined1 *)(iVar3 + 0x8e2)));
                          }
                        }
                      }
                      else if (uVar6 == 0) {
                        FUN_0050f990(local_4c,local_48,iVar3,
                                     CONCAT31((int3)(char)((ushort)sVar2 >> 8),
                                              *(undefined1 *)
                                               (*(int *)(iVar3 + 0x8dc) + 0x1c + iVar8)),
                                     *(undefined1 *)(iVar3 + 0x8e2));
                      }
                      *(undefined2 *)(*(int *)(iVar3 + 0x8d8) + iVar10 * 8) = (undefined2)local_4c;
                      *(undefined2 *)(*(int *)(iVar3 + 0x8d8) + 2 + iVar10 * 8) =
                           (undefined2)local_48;
                      *(short *)(*(int *)(iVar3 + 0x8d8) + 4 + iVar10 * 8) = (short)uVar6;
                      *(undefined2 *)(*(int *)(iVar3 + 0x8d8) + 6 + iVar10 * 8) =
                           (undefined2)DAT_005d6800;
                      iVar10 = iVar10 + 1;
                      local_40 = local_40 + 1;
                    } while (local_40 <= param_1);
                  }
                }
                iVar9 = *(int *)(iVar3 + 0x8dc);
                local_3c = iVar8 + 0x20;
                local_44 = local_44 + 1;
                iVar5 = local_34;
              } while (*(char *)(iVar8 + 0x3c + iVar9) != '\0');
            }
            iVar5 = iVar5 + 1;
          } while( true );
        }
      }
      return 0;
    }
  }
  return 0x1c;
}

