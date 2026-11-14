// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00503dd0
// entry: 00503dd0  size: 991


int FUN_00503dd0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_a;
  int local_8;
  int local_4;
  
  iVar2 = FUN_00517c00();
  if (iVar2 == 7) {
    return 0x23;
  }
  iVar2 = FUN_00516800(param_1);
  if (iVar2 != 0) {
    FUN_0052b240(4);
    return -0xb;
  }
  if (((*(byte *)(param_1 + 0x8e0) & 0x30) == 0x10) &&
     (local_8 = FUN_00514940(param_1,0), local_8 != 0)) {
    FUN_0052b240(local_8);
    return -0xb;
  }
  FUN_00517e40();
  switch((*(byte *)(param_1 + 0x8e0) & 0x30) >> 4) {
  case 0:
    iVar2 = FUN_00505f10(param_1,0x80);
    if ((iVar2 == 0) && ((FUN_004ab610(&local_4,&local_a), local_4 != 0 || (local_a != 0)))) {
      FUN_0052b240(0x1e);
      return -0xb;
    }
    FUN_00517ac0(7);
    local_8 = FUN_0051b520(param_1,0);
    if (local_8 == 0) {
      local_8 = FUN_00503050(param_1,param_2);
    }
    break;
  case 1:
    *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x80;
    iVar2 = FUN_00505f10(param_1,0x40);
    if (((iVar2 == 0) && (iVar2 = FUN_00505f10(param_1,0x80), iVar2 == 0)) &&
       ((FUN_004ab610(&local_4,&local_a), local_4 != 0 || (local_a != 0)))) {
      FUN_0052b240(0x1e);
      return -0xb;
    }
    FUN_00517ac0(7);
    local_8 = FUN_0051b520(param_1,0);
    if (local_8 == 0) {
      local_8 = FUN_00503120(param_1,param_2);
    }
    break;
  case 2:
    *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x80;
    iVar2 = FUN_00505f10(param_1,0x80);
    if ((iVar2 == 0) && ((FUN_004ab610(&local_4,&local_a), local_4 != 0 || (local_a != 0)))) {
      FUN_0052b240(0x1e);
      return -0xb;
    }
    FUN_00513550(param_1,&local_8);
    iVar4 = *(int *)(param_1 + 0x8dc);
    local_8 = 0;
    cVar1 = *(char *)(iVar4 + 0x1c);
    iVar3 = iVar4;
    while (cVar1 != '\0') {
      if ((*(uint *)(iVar3 + 0x18) & 0xe000) != 0) {
        FUN_0052b240(2);
        return -0xb;
      }
      local_8 = local_8 + 1;
      iVar3 = local_8 * 0x20 + iVar4;
      cVar1 = *(char *)(iVar3 + 0x1c);
    }
    iVar4 = FUN_00503d90(*(undefined4 *)(iVar4 + 0x18),
                         CONCAT31((int3)((uint)local_8 >> 8),*(byte *)(param_1 + 0x8e1) >> 1) &
                         0xffffff01);
    iVar2 = FUN_00529980(*(undefined1 *)(param_1 + 0x8e4),0,iVar4 * iVar2 + 1);
    if (iVar2 != 0) {
      FUN_0052b240(4);
      return -0xb;
    }
    local_8 = FUN_00514820(param_1);
    if (local_8 == 0) {
      FUN_0050ad60(param_1);
      *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0xfc;
      local_8 = FUN_00510270(param_1);
      FUN_0050acb0(param_1);
      if (local_8 == 0) {
        FUN_00517ac0(7);
        local_8 = FUN_005031f0(param_1,param_2);
        break;
      }
    }
    goto LAB_0050416a;
  case 3:
    *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x80;
    iVar2 = FUN_00505f10(param_1,0x20);
    if (iVar2 == 0) {
      FUN_0052b240(0x1e);
      return -0xb;
    }
    local_8 = FUN_00509890(param_1);
    if (local_8 != 0) {
      FUN_0052b240(local_8);
      return -0xb;
    }
    local_8 = FUN_00514820(param_1);
    if (local_8 == 0) {
      FUN_00414240();
      FUN_0050a800(param_1,2);
      FUN_0050aed0(param_1);
      *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0xfc;
      local_8 = FUN_00510270(param_1);
      FUN_0050acb0(param_1);
      if (local_8 == 0) {
        FUN_00517ac0(7);
        local_8 = FUN_005032f0(param_1,param_2);
        break;
      }
    }
LAB_0050416a:
    FUN_0052b240(local_8);
    FUN_00515dd0();
    return -0xb;
  }
  FUN_005167a0(param_1);
  return local_8;
}

