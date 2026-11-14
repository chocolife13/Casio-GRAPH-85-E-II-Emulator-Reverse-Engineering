// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005109b0
// entry: 005109b0  size: 905


undefined4 FUN_005109b0(uint param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  undefined3 extraout_var;
  undefined3 uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar4 = param_1;
  iVar7 = *(int *)(param_1 + 0x8dc);
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_24 = 0;
  local_1c = 1;
  if (*(char *)(iVar7 + 0x1c) != '\0') {
    iVar8 = 0;
    do {
      if ((*(uint *)(iVar8 + 0x18 + iVar7) & 0x800) != 0) {
        FUN_0050df50(1,local_18,local_c,param_1,local_24);
        uVar5 = FUN_004d52d0(local_18,&local_2c,param_1 + 0x800,*(undefined1 *)(param_1 + 0x8e2));
        uVar6 = FUN_004d53c0(local_c,&local_28,param_1 + 0x800);
        DAT_005d6800 = 0;
        if ((uVar5 | uVar6) == 0) {
          iVar7 = *(int *)(param_1 + 0x8dc);
          FUN_005146d0(local_2c,local_28,
                       CONCAT31((int3)((uint)(iVar8 + iVar7) >> 8),
                                *(undefined1 *)(iVar8 + iVar7 + 0x11)),param_1,
                       CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(iVar8 + 0x1c + iVar7)),
                       *(undefined1 *)(param_1 + 0x8e2));
          iVar7 = *(int *)(param_1 + 0x8dc) + iVar8;
          if (*(char *)(iVar7 + 0x10) == '\0') {
            FUN_0050f940(local_2c,local_28,local_2c,local_28,param_1,*(undefined1 *)(iVar7 + 0x1c),
                         *(undefined1 *)(param_1 + 0x8e2));
          }
        }
        iVar7 = *(int *)(iVar8 + 4 + *(int *)(param_1 + 0x8dc));
        if (local_20 < iVar7) {
          local_20 = iVar7;
        }
        *(undefined2 *)(*(int *)(param_1 + 0x8d8) + local_1c * 8) = (undefined2)local_2c;
        *(undefined2 *)(*(int *)(param_1 + 0x8d8) + 2 + local_1c * 8) = (undefined2)local_28;
        *(short *)(*(int *)(param_1 + 0x8d8) + 4 + local_1c * 8) = (short)(uVar5 | uVar6);
        *(undefined2 *)(*(int *)(param_1 + 0x8d8) + 6 + local_1c * 8) = (undefined2)DAT_005d6800;
        local_1c = local_1c + 1;
      }
      iVar7 = *(int *)(param_1 + 0x8dc);
      local_24 = local_24 + 1;
      iVar12 = iVar8 + 0x3c;
      iVar8 = iVar8 + 0x20;
    } while (*(char *)(iVar12 + iVar7) != '\0');
    if ((local_1c != 1) && (local_1c = 2, 1 < local_20)) {
      do {
        iVar7 = local_1c;
        iVar8 = FUN_0052f820();
        if (iVar8 != 0) {
          return 1;
        }
        iVar8 = *(int *)(iVar4 + 0x8dc);
        local_24 = 0;
        if (*(char *)(iVar8 + 0x1c) != '\0') {
          iVar11 = 8;
          iVar12 = 0;
          do {
            if ((*(uint *)(iVar12 + 0x18 + iVar8) & 0x800) != 0) {
              if (*(int *)(iVar12 + 4 + iVar8) < iVar7) {
                param_1 = 0x3000;
              }
              else {
                FUN_0050df50(iVar7,local_18,local_c,iVar4,local_24);
                param_1 = FUN_004d52d0(local_18,&local_2c,iVar4 + 0x800,
                                       *(undefined1 *)(iVar4 + 0x8e2));
                uVar5 = FUN_004d53c0(local_c,&local_28,iVar4 + 0x800);
                param_1 = param_1 | uVar5;
                if (param_1 == 0) {
                  iVar8 = *(int *)(iVar4 + 0x8dc);
                  iVar7 = iVar12 + iVar8;
                  cVar2 = *(char *)(iVar12 + 0x1c + iVar8);
                  if ((cVar2 == '\x02') || (*(char *)(iVar7 + 0x10) != '\0')) {
                    FUN_005146d0(local_2c,local_28,
                                 CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(iVar7 + 0x11)),
                                 iVar4,CONCAT31((int3)((uint)iVar8 >> 8),cVar2),
                                 CONCAT31(extraout_var,*(undefined1 *)(iVar4 + 0x8e2)));
                  }
                  sVar3 = *(short *)(*(int *)(iVar4 + 0x8d8) + 6 + iVar11);
                  DAT_005d6800 = (int)sVar3;
                  iVar7 = *(int *)(iVar4 + 0x8dc);
                  if (*(char *)(iVar12 + 0x10 + iVar7) == '\0') {
                    psVar9 = (short *)(*(int *)(iVar4 + 0x8d8) + iVar11);
                    uVar10 = (undefined3)((uint)iVar7 >> 8);
                    if (psVar9[2] == 0) {
                      FUN_0050f830((int)*psVar9,(int)psVar9[1],local_2c,local_28,iVar4,
                                   CONCAT31(uVar10,*(undefined1 *)(iVar12 + iVar7 + 0x1c)),
                                   CONCAT31((int3)(char)((ushort)sVar3 >> 8),
                                            *(undefined1 *)(iVar4 + 0x8e2)));
                    }
                    else {
                      DAT_005d6800 = 0;
                      FUN_0050f940(local_2c,local_28,local_2c,local_28,iVar4,
                                   CONCAT31(uVar10,*(undefined1 *)
                                                    (iVar12 + 0x1c + *(int *)(iVar4 + 0x8dc))),
                                   CONCAT31((int3)((uint)psVar9 >> 8),*(undefined1 *)(iVar4 + 0x8e2)
                                           ));
                    }
                  }
                }
              }
              *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + iVar11) = (undefined2)local_2c;
              *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 2 + iVar11) = (undefined2)local_28;
              *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 4 + iVar11) = (undefined2)param_1;
              *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 6 + iVar11) = (undefined2)DAT_005d6800;
              iVar11 = iVar11 + 8;
              iVar7 = local_1c;
            }
            local_24 = local_24 + 1;
            iVar8 = *(int *)(iVar4 + 0x8dc);
            iVar1 = iVar12 + 0x3c;
            iVar12 = iVar12 + 0x20;
          } while (*(char *)(iVar1 + iVar8) != '\0');
        }
        local_1c = iVar7 + 1;
      } while (local_1c <= local_20);
    }
  }
  return 0;
}

