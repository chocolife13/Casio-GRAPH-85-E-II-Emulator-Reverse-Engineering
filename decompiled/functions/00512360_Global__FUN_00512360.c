// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00512360
// entry: 00512360  size: 888


int FUN_00512360(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined3 uVar8;
  int iVar9;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar4 = param_1;
  local_20 = 0;
  FUN_00512910(param_1,param_2);
  bVar1 = *(byte *)(param_1 + 0x8e2);
  local_1c = 0x7f;
  param_1 = 1;
  if ((bVar1 & 0x10) == 0) {
    iVar9 = 1;
    if ((bVar1 & 0x80) != 0) {
      local_1c = 0x3f;
    }
    if ((*(char *)(*(int *)(iVar4 + 0x8dc) + 0x1c + param_2 * 0x20) == '\v') &&
       ((*(byte *)(iVar4 + 0x8e1) & 0x40) != 0)) {
      param_1 = 2;
    }
  }
  else if ((bVar1 & 8) == 0) {
    iVar9 = 10;
    local_1c = 1;
    param_1 = -1;
  }
  else {
    iVar9 = 0x76;
  }
  FUN_004d4da0(local_c,iVar9,iVar4 + 0x800,bVar1);
  iVar5 = param_2 * 0x20;
  if (((*(uint *)(iVar5 + 0x18 + *(int *)(iVar4 + 0x8dc)) & 0x4000) == 0) ||
     (uVar6 = FUN_005100c0(iVar9,iVar4,param_2), uVar6 == 0)) {
    iVar7 = FUN_0050f060(local_c,local_18,iVar4,param_2,param_3);
    if (iVar7 != 0) {
      return iVar7;
    }
    uVar6 = FUN_004d5210(local_18,&local_20,iVar4 + 0x800);
  }
  if ((*(byte *)(iVar4 + 0x8e2) & 4) == 0) {
    *(short *)(*(int *)(iVar4 + 0x8d8) + 8) = (short)iVar9;
    iVar7 = *(int *)(iVar4 + 0x8d8);
    *(undefined2 *)(iVar7 + 10) = (undefined2)local_20;
    iVar2 = *(int *)(iVar4 + 0x8d8);
    *(short *)(iVar2 + 0xc) = (short)uVar6;
    DAT_005d6800 = 0;
    if ((*(byte *)(iVar4 + 0x8e1) & 1) == 0) {
      if (uVar6 == 0) {
        uVar8 = (undefined3)((uint)iVar2 >> 8);
        FUN_0050f940(iVar9,local_20,iVar9,local_20,iVar4,
                     CONCAT31(uVar8,*(undefined1 *)(iVar5 + 0x1c + *(int *)(iVar4 + 0x8dc))),
                     CONCAT31(uVar8,*(undefined1 *)(iVar4 + 0x8e2)));
      }
    }
    else if (uVar6 == 0) {
      uVar8 = (undefined3)((uint)iVar7 >> 8);
      FUN_0050f990(iVar9,local_20,iVar4,
                   CONCAT31(uVar8,*(undefined1 *)(iVar5 + 0x1c + *(int *)(iVar4 + 0x8dc))),
                   CONCAT31(uVar8,*(undefined1 *)(iVar4 + 0x8e2)));
    }
    uVar3 = *(uint *)(iVar5 + 0x18 + *(int *)(iVar4 + 0x8dc));
    if ((uVar3 & 0x80) == 0) {
      if ((uVar3 & 0x40) != 0) {
        FUN_00512950(iVar9,local_20,uVar6,iVar4,param_2);
      }
    }
    else {
      FUN_00512dd0(iVar9,local_20,uVar6,param_2,iVar4);
    }
  }
  else {
    FUN_00510880(local_c,local_18,uVar6 | 0x2000,iVar4);
  }
  do {
    iVar9 = iVar9 + param_1;
    FUN_004d4da0(local_c,iVar9,iVar4 + 0x800,*(undefined1 *)(iVar4 + 0x8e2));
    if (((*(uint *)(iVar5 + 0x18 + *(int *)(iVar4 + 0x8dc)) & 0x4000) == 0) ||
       (uVar6 = FUN_005100c0(iVar9,iVar4,param_2), uVar6 == 0)) {
      iVar7 = FUN_0050f2c0(local_c,local_18,iVar4,param_2,param_3);
      if (iVar7 != 0) {
        return iVar7;
      }
      uVar6 = FUN_004d5210(local_18,&local_20,iVar4 + 0x800);
    }
    if ((*(byte *)(iVar4 + 0x8e2) & 4) == 0) {
      **(undefined2 **)(iVar4 + 0x8d8) = (short)iVar9;
      *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 2) = (undefined2)local_20;
      *(short *)(*(int *)(iVar4 + 0x8d8) + 4) = (short)uVar6;
      if ((*(byte *)(iVar5 + 0x18 + *(int *)(iVar4 + 0x8dc)) & 0x80) != 0) {
        FUN_00512dd0(iVar9,local_20,uVar6,param_2,iVar4);
      }
      if ((*(byte *)(iVar4 + 0x8e1) & 1) == 0) {
        FUN_0050fd30(iVar4,param_2,1);
      }
      else if (uVar6 == 0) {
        FUN_0050f990(iVar9,local_20,iVar4,*(undefined1 *)(iVar5 + 0x1c + *(int *)(iVar4 + 0x8dc)),
                     *(undefined1 *)(iVar4 + 0x8e2));
      }
      if ((*(byte *)(iVar5 + 0x18 + *(int *)(iVar4 + 0x8dc)) & 0x40) != 0) {
        FUN_00512950(iVar9,local_20,uVar6,iVar4,param_2);
      }
      *(short *)(*(int *)(iVar4 + 0x8d8) + 8) = (short)iVar9;
      *(undefined2 *)(*(int *)(iVar4 + 0x8d8) + 10) = (undefined2)local_20;
      *(short *)(*(int *)(iVar4 + 0x8d8) + 0xc) = (short)uVar6;
    }
    else {
      FUN_00510880(local_c,local_18,uVar6 | 0x2000,iVar4);
    }
  } while (iVar9 != local_1c);
  return 0;
}

