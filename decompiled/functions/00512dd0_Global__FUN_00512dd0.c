// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00512dd0
// entry: 00512dd0  size: 815


void FUN_00512dd0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  
  uVar2 = DAT_005d6800;
  DAT_005d6800 = 0;
  if (((*(byte *)(param_5 + 0x8e0) & 0xc0) == 0x40) &&
     (*(char *)(*(int *)(param_5 + 0x8dc) + 0x1d + param_4 * 0x20) != '\0')) {
    bVar1 = *(byte *)(param_5 + 0x8e2);
    bVar5 = bVar1 | 0x20;
  }
  else {
    bVar1 = *(byte *)(param_5 + 0x8e2);
    bVar5 = bVar1 & 0xdf;
  }
  bVar4 = *(byte *)(param_5 + 0x8e0) & 3;
  if (bVar4 == 1) {
    uVar3 = *(uint *)(*(int *)(param_5 + 0x8dc) + 0x18 + param_4 * 0x20) & 0x10;
    if (((uVar3 == 0) || ((bVar1 & 2) != 0)) && ((uVar3 != 0 || ((bVar1 & 2) == 0)))) {
      if (param_3 == 0) {
        if (7 < param_2) {
          FUN_0050f940(param_1,0x3f,param_1,param_2,param_5,0x40,bVar1);
          DAT_005d6800 = uVar2;
          return;
        }
        FUN_0050f940(param_1,7,param_1,param_2,param_5,0x40,bVar5);
        uVar7 = *(undefined1 *)(param_5 + 0x8e2);
      }
      else {
        if (param_3 != 0x100) {
          DAT_005d6800 = uVar2;
          return;
        }
        FUN_0050f940(param_1,1,param_1,7,param_5,0x40,bVar5);
        uVar7 = *(undefined1 *)(param_5 + 0x8e2);
      }
    }
    else {
      if (param_3 == 0) {
        if (7 < param_2) {
          FUN_0050f940(param_1,1,param_1,7,param_5,0x40,bVar5);
          FUN_0050f940(param_1,8,param_1,param_2,param_5,0x40,*(undefined1 *)(param_5 + 0x8e2));
          DAT_005d6800 = uVar2;
          return;
        }
        FUN_0050f940(param_1,1,param_1,param_2,param_5,0x40,bVar5);
        DAT_005d6800 = uVar2;
        return;
      }
      if (param_3 != 0x200) {
        DAT_005d6800 = uVar2;
        return;
      }
      FUN_0050f940(param_1,1,param_1,7,param_5,0x40,bVar5);
      uVar7 = *(undefined1 *)(param_5 + 0x8e2);
    }
    FUN_0050f940(param_1,8,param_1,0x3f,param_5,0x40,uVar7);
    DAT_005d6800 = uVar2;
    return;
  }
  if (bVar4 != 2) {
    DAT_005d6800 = uVar2;
    return;
  }
  uVar3 = *(uint *)(*(int *)(param_5 + 0x8dc) + 0x18 + param_4 * 0x20) & 0x10;
  if (((uVar3 == 0) || ((bVar1 & 2) != 0)) && ((uVar3 != 0 || ((bVar1 & 2) == 0)))) {
    if (param_3 == 0) {
      if (param_2 < 8) {
        FUN_0050f940(param_1,param_2,param_1,1,param_5,0xc0,bVar5);
        goto LAB_00512f8e;
      }
      FUN_0050f940(param_1,1,param_1,7,param_5,0xc0,bVar5);
      uVar7 = *(undefined1 *)(param_5 + 0x8e2);
      uVar6 = 8;
    }
    else {
      if ((param_3 != 0x200) && (param_3 != 0x1000)) goto LAB_00512f8e;
      FUN_0050f940(param_1,1,param_1,7,param_5,0xc0,bVar5);
      uVar7 = *(undefined1 *)(param_5 + 0x8e2);
      uVar6 = 0x3f;
      param_2 = 8;
    }
  }
  else if (param_3 == 0) {
    if (7 < param_2) {
      FUN_0050f940(param_1,param_2,param_1,0x3f,param_5,0xc0,bVar1);
      goto LAB_00512f8e;
    }
    FUN_0050f940(param_1,param_2,param_1,7,param_5,0xc0,bVar5);
    uVar7 = *(undefined1 *)(param_5 + 0x8e2);
    uVar6 = 0x3f;
    param_2 = 8;
  }
  else {
    if ((param_3 != 0x100) && (param_3 != 0x1000)) goto LAB_00512f8e;
    FUN_0050f940(param_1,1,param_1,7,param_5,0xc0,bVar5);
    uVar7 = *(undefined1 *)(param_5 + 0x8e2);
    uVar6 = 0x3f;
    param_2 = 8;
  }
  FUN_0050f940(param_1,param_2,param_1,uVar6,param_5,0xc0,uVar7);
LAB_00512f8e:
  if (param_1 < 0x7c) {
    DAT_005d6800 = uVar2;
    return;
  }
  thunk_FUN_0040add0();
  DAT_005d6800 = uVar2;
  return;
}

