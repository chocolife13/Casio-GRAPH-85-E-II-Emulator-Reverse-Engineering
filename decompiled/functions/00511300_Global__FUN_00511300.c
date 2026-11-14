// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00511300
// entry: 00511300  size: 1248


int FUN_00511300(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar4 = param_1;
  iVar7 = 0;
  local_1c = *(byte *)(param_1 + 0x8e0) & 3;
  bVar1 = *(byte *)(param_1 + 0x8e2);
  local_34 = 0;
  local_28 = 1;
  local_24 = 1;
  local_20 = 0x7f;
  if ((bVar1 & 0x10) == 0) {
    iVar8 = 1;
    if ((bVar1 & 0x80) != 0) {
      local_20 = 0x3f;
    }
    if ((*(char *)(*(int *)(param_1 + 0x8dc) + 0x1c) == '\v') &&
       ((*(byte *)(param_1 + 0x8e1) & 0x40) != 0)) {
      local_24 = 2;
    }
  }
  else if ((bVar1 & 8) == 0) {
    iVar8 = 10;
    local_20 = 1;
    local_24 = -1;
  }
  else {
    iVar8 = 0x76;
  }
  iVar5 = *(int *)(param_1 + 0x8dc);
  if (*(char *)(iVar5 + 0x1c) != '\0') {
    local_2c = 0;
    do {
      uVar3 = *(uint *)(local_2c + 0x18 + iVar5);
      if (((uVar3 & 0x100) != 0) && ((uVar3 & 0x800) == 0)) {
        if ((uVar3 & 0xa000) == 0) {
          local_30 = 1;
        }
        else {
          local_30 = *(int *)(local_2c + 0x10 + iVar5);
        }
        param_1 = 1;
        if (0 < local_30) {
          do {
            iVar5 = local_2c;
            FUN_00512910(iVar4,iVar7);
            FUN_004d4da0(local_18,iVar8,iVar4 + 0x800,*(undefined1 *)(iVar4 + 0x8e2));
            if (((*(uint *)(iVar5 + 0x18 + *(int *)(iVar4 + 0x8dc)) & 0x4000) == 0) ||
               (iVar5 = FUN_005100c0(iVar8,iVar4,iVar7), iVar5 == 0)) {
              iVar5 = FUN_0050f060(local_18,local_c,iVar4,iVar7,param_1);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar5 = FUN_004d5210(local_c,&local_34,iVar4 + 0x800);
            }
            DAT_005d6800 = 0;
            if ((*(byte *)(iVar4 + 0x8e1) & 1) == 0) {
              if ((iVar5 == 0) &&
                 (cVar2 = *(char *)(local_2c + 0x1c + *(int *)(iVar4 + 0x8dc)), cVar2 != '\x01')) {
                FUN_0050f940(iVar8,local_34,iVar8,local_34,iVar4,
                             CONCAT31((int3)((uint)*(int *)(iVar4 + 0x8dc) >> 8),cVar2),
                             *(undefined1 *)(iVar4 + 0x8e2));
              }
            }
            else if (iVar5 == 0) {
              cVar2 = *(char *)(local_2c + 0x1c + *(int *)(iVar4 + 0x8dc));
              if (cVar2 != '\x01') {
                FUN_0050f990(iVar8,local_34,iVar4,cVar2,
                             CONCAT31((int3)((uint)*(int *)(iVar4 + 0x8dc) >> 8),
                                      *(undefined1 *)(iVar4 + 0x8e2)));
              }
            }
            uVar3 = *(uint *)(local_2c + 0x18 + *(int *)(iVar4 + 0x8dc));
            if ((uVar3 & 0x80) == 0) {
              if ((uVar3 & 0x40) != 0) {
                FUN_00512950(iVar8,local_34,iVar5,iVar4,iVar7);
              }
            }
            else {
              FUN_00512dd0(iVar8,local_34,iVar5,iVar7,iVar4);
            }
            *(short *)(*(int *)(iVar4 + 0x8d8) + local_28 * 8) = (short)iVar8;
            *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 2 + local_28 * 8) = (undefined2)local_34;
            *(short *)(*(int *)(iVar4 + 0x8d8) + 4 + local_28 * 8) = (short)iVar5;
            *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 6 + local_28 * 8) = (undefined2)DAT_005d6800;
            local_28 = local_28 + 1;
            param_1 = param_1 + 1;
          } while (param_1 <= local_30);
        }
      }
      iVar5 = *(int *)(iVar4 + 0x8dc);
      iVar7 = iVar7 + 1;
      iVar6 = local_2c + 0x3c;
      local_2c = local_2c + 0x20;
    } while (*(char *)(iVar6 + iVar5) != '\0');
    if (local_28 != 1) {
      do {
        iVar8 = iVar8 + local_24;
        local_2c = 0;
        iVar5 = 1;
        iVar7 = *(int *)(iVar4 + 0x8dc);
        *(byte *)(iVar4 + 0x8e0) =
             (*(byte *)(iVar4 + 0x8e0) ^ (byte)local_1c) & 3 ^ *(byte *)(iVar4 + 0x8e0);
        if (*(char *)(iVar7 + 0x1c) != '\0') {
          local_28 = 0;
          do {
            uVar3 = *(uint *)(local_28 + 0x18 + iVar7);
            if (((uVar3 & 0x100) != 0) && ((uVar3 & 0x800) == 0)) {
              if ((uVar3 & 0xa000) == 0) {
                local_30 = 1;
              }
              else {
                local_30 = *(int *)(local_28 + 0x10 + iVar7);
              }
              param_1 = 1;
              if (0 < local_30) {
                do {
                  iVar7 = local_2c;
                  FUN_00512910(iVar4,local_2c);
                  FUN_004d4da0(local_18,iVar8,iVar4 + 0x800,*(undefined1 *)(iVar4 + 0x8e2));
                  if (((*(uint *)(local_28 + 0x18 + *(int *)(iVar4 + 0x8dc)) & 0x4000) == 0) ||
                     (iVar6 = FUN_005100c0(iVar8,iVar4,iVar7), iVar7 = local_2c, iVar6 == 0)) {
                    iVar7 = FUN_0050f060(local_18,local_c,iVar4,iVar7,param_1);
                    if (iVar7 != 0) {
                      return iVar7;
                    }
                    iVar6 = FUN_004d5210(local_c,&local_34,iVar4 + 0x800);
                  }
                  **(undefined2 **)(iVar4 + 0x8d8) = (short)iVar8;
                  *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 2) = (undefined2)local_34;
                  *(short *)(*(int *)(iVar4 + 0x8d8) + 4) = (short)iVar6;
                  DAT_005d6800 = (int)*(short *)(*(int *)(iVar4 + 0x8d8) + 6 + iVar5 * 8);
                  if ((*(byte *)(local_28 + 0x18 + *(int *)(iVar4 + 0x8dc)) & 0x80) != 0) {
                    FUN_00512dd0(iVar8,local_34,iVar6,local_2c,iVar4);
                  }
                  if ((*(byte *)(iVar4 + 0x8e1) & 1) == 0) {
                    FUN_0050fd30(iVar4,local_2c,iVar5);
                  }
                  else if (iVar6 == 0) {
                    cVar2 = *(char *)(local_28 + 0x1c + *(int *)(iVar4 + 0x8dc));
                    if (cVar2 != '\x01') {
                      FUN_0050f990(iVar8,local_34,iVar4,cVar2,
                                   CONCAT31((int3)((uint)*(int *)(iVar4 + 0x8dc) >> 8),
                                            *(undefined1 *)(iVar4 + 0x8e2)));
                    }
                  }
                  if ((*(byte *)(local_28 + 0x18 + *(int *)(iVar4 + 0x8dc)) & 0x40) != 0) {
                    FUN_00512950(iVar8,local_34,iVar6,iVar4,local_2c);
                  }
                  iVar5 = iVar5 + 1;
                  *(short *)(*(int *)(iVar4 + 0x8d8) + -8 + iVar5 * 8) = (short)iVar8;
                  *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + -6 + iVar5 * 8) = (undefined2)local_34;
                  *(short *)(*(int *)(iVar4 + 0x8d8) + -4 + iVar5 * 8) = (short)iVar6;
                  *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + -2 + iVar5 * 8) =
                       (undefined2)DAT_005d6800;
                  param_1 = param_1 + 1;
                } while (param_1 <= local_30);
              }
            }
            iVar7 = *(int *)(iVar4 + 0x8dc);
            local_2c = local_2c + 1;
            iVar6 = local_28 + 0x3c;
            local_28 = local_28 + 0x20;
          } while (*(char *)(iVar6 + iVar7) != '\0');
        }
      } while (iVar8 != local_20);
    }
  }
  return 0;
}

