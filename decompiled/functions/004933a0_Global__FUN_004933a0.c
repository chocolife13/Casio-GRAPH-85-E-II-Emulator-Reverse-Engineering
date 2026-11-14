// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004933a0
// entry: 004933a0  size: 548


int FUN_004933a0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_34 = 1;
  local_30 = 1;
  FUN_005387f0(0);
  bVar2 = *(byte *)(param_1 + 0x24) & 0xf0;
  if ((bVar2 == 0x50) || (bVar2 == 0x60)) {
    local_30 = -1;
  }
  uVar3 = FUN_004e50a0(param_1);
  *(int *)(param_3 + 0x84) = local_34;
  local_24 = uVar3;
  iVar4 = FUN_00489a20(param_1,&local_20,param_3,param_4);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = param_4 + 0x800;
  uVar5 = FUN_004e5070(local_34,&local_20,&local_14,iVar4,0);
  local_c = FUN_004d5130(uVar5);
  if (local_30 == -1) {
    FUN_004e7620((undefined4 *)(param_3 + 0x54),&local_20);
  }
  else {
    local_20 = *(undefined4 *)(param_3 + 0x54);
    local_1c = *(undefined4 *)(param_3 + 0x58);
    local_18 = *(undefined4 *)(param_3 + 0x5c);
  }
  uVar6 = FUN_004d5210(&local_20,&local_10,iVar4);
  local_c = local_c | uVar6;
  FUN_00493620(param_3,local_34);
  FUN_00522500(&local_14);
  piVar1 = (int *)(param_2 + 4);
  do {
    iVar7 = FUN_00526620(piVar1);
    if (iVar7 == 0) {
      switch(*piVar1) {
      case 0x7532:
      case 0x754d:
        FUN_00522930(&local_14);
        FUN_00538810();
        return 0;
      default:
        goto LAB_004934e5;
      case 0x7544:
        uVar5 = 0xffffffff;
        break;
      case 0x7545:
        uVar5 = 1;
      }
      FUN_00494090(&local_34,uVar3,uVar5);
    }
LAB_004934e5:
    *(int *)(param_3 + 0x84) = local_34;
    if (*piVar1 == 0x7545) {
      *(int *)(param_3 + 0x88) = local_34 + -1;
    }
    else {
      *(undefined4 *)(param_3 + 0x88) = 0;
    }
    iVar7 = FUN_00489a20(param_1,&local_20,param_3,param_4);
    if (iVar7 != 0) {
      return iVar7;
    }
    uVar3 = FUN_004e5070(local_34,&local_20,&local_2c,iVar4,0);
    uVar6 = FUN_004d5130(uVar3);
    if (local_30 == -1) {
      FUN_004e7620(param_3 + 0x54,&local_20);
    }
    else {
      local_20 = *(undefined4 *)(param_3 + 0x54);
      local_1c = *(undefined4 *)(param_3 + 0x58);
      local_18 = *(undefined4 *)(param_3 + 0x5c);
    }
    uVar8 = FUN_004d5210(&local_20,&local_28,iVar4);
    FUN_00522930(&local_14);
    local_14 = local_2c;
    local_10 = local_28;
    local_c = uVar6 | uVar8;
    FUN_00493620(param_3,local_34);
    FUN_00522500(&local_14);
    uVar3 = local_24;
  } while( true );
}

