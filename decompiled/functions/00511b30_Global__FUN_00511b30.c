// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00511b30
// entry: 00511b30  size: 763


undefined4 FUN_00511b30(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined3 uVar8;
  undefined3 uVar9;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar10;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar4 = param_1;
  iVar10 = param_2 * 0x20;
  local_1c = *(int *)(iVar10 + 4 + *(int *)(param_1 + 0x8dc));
  FUN_0050df50(1,local_c,local_18,param_1,param_2);
  iVar1 = iVar4 + 0x800;
  uVar5 = FUN_004d52d0(local_c,&param_1,iVar1,*(undefined1 *)(iVar4 + 0x8e2));
  uVar6 = FUN_004d53c0(local_18,&local_24,iVar1);
  uVar5 = uVar5 | uVar6;
  if ((((*(byte *)(iVar4 + 0x8e2) & 4) == 0) || (iVar7 = FUN_00516d40(local_c), iVar7 != 0)) ||
     (iVar7 = FUN_00516d40(local_18), iVar7 != 0)) {
    iVar7 = *(int *)(iVar4 + 0x8d8);
    *(undefined2 *)(iVar7 + 8) = (undefined2)param_1;
    *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 10) = (undefined2)local_24;
    *(short *)(*(int *)(iVar4 + 0x8d8) + 0xc) = (short)uVar5;
    DAT_005d6800 = 0;
    if (uVar5 == 0) {
      iVar3 = *(int *)(iVar4 + 0x8dc);
      uVar9 = (undefined3)(CONCAT22((short)((uint)iVar7 >> 0x10),(undefined2)local_24) >> 8);
      FUN_005146d0(param_1,local_24,CONCAT31(uVar9,*(undefined1 *)(iVar10 + 0x11 + iVar3)),iVar4,
                   CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(iVar10 + 0x1c + iVar3)),
                   CONCAT31(uVar9,*(undefined1 *)(iVar4 + 0x8e2)));
      iVar7 = *(int *)(iVar4 + 0x8dc);
      if (*(char *)(iVar10 + 0x10 + iVar7) == '\0') {
        FUN_0050f940(param_1,local_24,param_1,local_24,iVar4,
                     CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(iVar10 + iVar7 + 0x1c)),
                     *(undefined1 *)(iVar4 + 0x8e2));
      }
    }
  }
  else {
    FUN_00510880(local_c,local_18,uVar5,iVar4);
  }
  local_20 = 2;
  if (1 < local_1c) {
    do {
      iVar7 = FUN_0052f820();
      if (iVar7 != 0) {
        return 1;
      }
      FUN_0050df50(local_20,local_c,local_18,iVar4,param_2);
      uVar5 = FUN_004d52d0(local_c,&param_1,iVar1,*(undefined1 *)(iVar4 + 0x8e2));
      uVar6 = FUN_004d53c0(local_18,&local_24,iVar1);
      uVar5 = uVar5 | uVar6;
      uVar9 = extraout_var;
      if ((((*(byte *)(iVar4 + 0x8e2) & 4) == 0) ||
          (iVar7 = FUN_00516d40(local_c), uVar9 = extraout_var_00, iVar7 != 0)) ||
         (iVar7 = FUN_00516d40(local_18), uVar9 = extraout_var_01, iVar7 != 0)) {
        if (uVar5 == 0) {
          iVar3 = *(int *)(iVar4 + 0x8dc);
          iVar7 = iVar10 + iVar3;
          cVar2 = *(char *)(iVar10 + 0x1c + iVar3);
          if ((cVar2 == '\x02') || (*(char *)(iVar7 + 0x10) != '\0')) {
            FUN_005146d0(param_1,local_24,
                         CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(iVar7 + 0x11)),iVar4,
                         CONCAT31((int3)((uint)iVar3 >> 8),cVar2),
                         CONCAT31(uVar9,*(undefined1 *)(iVar4 + 0x8e2)));
            uVar9 = extraout_var_02;
          }
          iVar7 = iVar10 + *(int *)(iVar4 + 0x8dc);
          if (*(char *)(iVar10 + 0x10 + *(int *)(iVar4 + 0x8dc)) == '\0') {
            iVar3 = *(int *)(iVar4 + 0x8d8);
            uVar8 = (undefined3)((uint)iVar7 >> 8);
            if (*(short *)(iVar3 + 0xc) == 0) {
              FUN_0050f830((int)*(short *)(iVar3 + 8),(int)*(short *)(iVar3 + 10),param_1,local_24,
                           iVar4,CONCAT31(uVar8,*(undefined1 *)(iVar7 + 0x1c)),
                           CONCAT31(uVar9,*(undefined1 *)(iVar4 + 0x8e2)));
            }
            else {
              DAT_005d6800 = 0;
              FUN_0050f940(param_1,local_24,param_1,local_24,iVar4,
                           CONCAT31((int3)((uint)iVar3 >> 8),
                                    *(undefined1 *)(iVar10 + 0x1c + *(int *)(iVar4 + 0x8dc))),
                           CONCAT31(uVar8,*(undefined1 *)(iVar4 + 0x8e2)));
            }
          }
        }
        *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 8) = (undefined2)param_1;
        *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 10) = (undefined2)local_24;
        *(short *)(*(int *)(iVar4 + 0x8d8) + 0xc) = (short)uVar5;
      }
      else {
        FUN_00510880(local_c,local_18,uVar5,iVar4);
      }
      local_20 = local_20 + 1;
    } while (local_20 <= local_1c);
  }
  return 0;
}

