// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005117e0
// entry: 005117e0  size: 844


int FUN_005117e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined3 uVar5;
  int iVar6;
  int iVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = param_1;
  iVar6 = *(int *)(param_1 + 0x8dc);
  local_28 = 0;
  iVar7 = 1;
  if (*(char *)(iVar6 + 0x1c) != '\0') {
    local_20 = 0;
    do {
      uVar1 = *(uint *)(local_20 + 0x18 + iVar6);
      if (((uVar1 & 0x200) != 0) && ((uVar1 & 0x800) == 0)) {
        if ((uVar1 & 0xa000) == 0) {
          local_24 = 1;
        }
        else {
          local_24 = *(int *)(local_20 + 0x10 + iVar6);
        }
        iVar6 = 1;
        if (0 < local_24) {
          do {
            FUN_004d4e70(local_18,0x3f,iVar2 + 0x800);
            iVar3 = FUN_0050f060(local_18,local_c,iVar2,local_28,iVar6);
            if (iVar3 != 0) {
              return iVar3;
            }
            iVar3 = FUN_004d5130(local_c,&param_1,iVar2 + 0x800,*(undefined1 *)(iVar2 + 0x8e2));
            DAT_005d6800 = 0;
            if ((*(byte *)(iVar2 + 0x8e1) & 1) == 0) {
              if (iVar3 == 0) {
                FUN_0050f940(param_1,0x3f,param_1,0x3f,iVar2,
                             *(undefined1 *)(local_20 + 0x1c + *(int *)(iVar2 + 0x8dc)),
                             *(undefined1 *)(iVar2 + 0x8e2));
              }
            }
            else if (iVar3 == 0) {
              FUN_0050f990(param_1,0x3f,iVar2,
                           *(undefined1 *)(local_20 + 0x1c + *(int *)(iVar2 + 0x8dc)),
                           *(undefined1 *)(iVar2 + 0x8e2));
            }
            *(undefined2 *)(*(int *)(iVar2 + 0x8d8) + iVar7 * 8) = (undefined2)param_1;
            *(undefined2 *)(*(int *)(iVar2 + 0x8d8) + 2 + iVar7 * 8) = 0x3f;
            *(short *)(*(int *)(iVar2 + 0x8d8) + 4 + iVar7 * 8) = (short)iVar3;
            *(undefined2 *)(*(int *)(iVar2 + 0x8d8) + 6 + iVar7 * 8) = (undefined2)DAT_005d6800;
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar6 <= local_24);
        }
      }
      local_28 = local_28 + 1;
      iVar6 = *(int *)(iVar2 + 0x8dc);
      iVar3 = local_20 + 0x3c;
      local_20 = local_20 + 0x20;
    } while (*(char *)(iVar3 + iVar6) != '\0');
    if (iVar7 != 1) {
      iVar6 = 0x3e;
      while( true ) {
        iVar7 = *(int *)(iVar2 + 0x8dc);
        local_28 = 0;
        iVar3 = 1;
        if (*(char *)(iVar7 + 0x1c) != '\0') {
          local_1c = 0;
          do {
            uVar1 = *(uint *)(local_1c + 0x18 + iVar7);
            if (((uVar1 & 0x200) != 0) && ((uVar1 & 0x800) == 0)) {
              if ((uVar1 & 0xa000) == 0) {
                local_24 = 1;
              }
              else {
                local_24 = *(int *)(local_1c + 0x10 + iVar7);
              }
              local_20 = 1;
              if (0 < local_24) {
                do {
                  FUN_004d4e70(local_18,iVar6,iVar2 + 0x800);
                  iVar7 = FUN_0050f060(local_18,local_c,iVar2,local_28,local_20);
                  if (iVar7 != 0) {
                    return iVar7;
                  }
                  iVar4 = FUN_004d5130(local_c,&param_1,iVar2 + 0x800,*(undefined1 *)(iVar2 + 0x8e2)
                                      );
                  **(undefined2 **)(iVar2 + 0x8d8) = (undefined2)param_1;
                  *(short *)(*(int *)(iVar2 + 0x8d8) + 2) = (short)iVar6;
                  iVar7 = *(int *)(iVar2 + 0x8d8);
                  *(short *)(iVar7 + 4) = (short)iVar4;
                  DAT_005d6800 = (int)*(short *)(*(int *)(iVar2 + 0x8d8) + 6 + iVar3 * 8);
                  if ((*(byte *)(iVar2 + 0x8e1) & 1) == 0) {
                    FUN_0050ff00(iVar2,local_28,iVar3);
                  }
                  else if (iVar4 == 0) {
                    uVar5 = (undefined3)((uint)iVar7 >> 8);
                    FUN_0050f990(param_1,iVar6,iVar2,
                                 CONCAT31(uVar5,*(undefined1 *)
                                                 (local_1c + 0x1c + *(int *)(iVar2 + 0x8dc))),
                                 CONCAT31(uVar5,*(undefined1 *)(iVar2 + 0x8e2)));
                  }
                  *(undefined2 *)(*(int *)(iVar2 + 0x8d8) + iVar3 * 8) = (undefined2)param_1;
                  *(short *)(*(int *)(iVar2 + 0x8d8) + 2 + iVar3 * 8) = (short)iVar6;
                  *(short *)(*(int *)(iVar2 + 0x8d8) + 4 + iVar3 * 8) = (short)iVar4;
                  *(undefined2 *)(*(int *)(iVar2 + 0x8d8) + 6 + iVar3 * 8) =
                       (undefined2)DAT_005d6800;
                  iVar3 = iVar3 + 1;
                  local_20 = local_20 + 1;
                } while (local_20 <= local_24);
              }
            }
            iVar7 = *(int *)(iVar2 + 0x8dc);
            local_28 = local_28 + 1;
            iVar4 = local_1c + 0x3c;
            local_1c = local_1c + 0x20;
          } while (*(char *)(iVar4 + iVar7) != '\0');
        }
        if (iVar6 == 1) break;
        iVar6 = iVar6 + -1;
      }
    }
  }
  return 0;
}

