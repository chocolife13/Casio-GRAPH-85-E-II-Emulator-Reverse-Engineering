// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004eaee0
// entry: 004eaee0  size: 1060


bool FUN_004eaee0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint local_88;
  undefined1 local_84 [12];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar2 = FUN_004e4020(param_2);
  if (iVar2 != 0) {
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_4 = *param_2;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    }
    return false;
  }
  iVar2 = FUN_004e4000(param_2);
  bVar11 = iVar2 == 0;
  local_88 = (uint)!bVar11;
  uVar1 = *(ushort *)((int)param_2 + 2);
  uVar10 = (uint)uVar1;
  uVar8 = (uint)*(ushort *)(param_2 + 1);
  if (uVar10 != uVar8) {
    FUN_004e5630(9,param_4);
    return false;
  }
  if (uVar10 == 2) {
    if (bVar11) {
      FUN_004cc400(param_2,param_4,0);
      FUN_004e0c40(param_4,param_3,param_4,1);
      FUN_004e3e70(param_4,param_4);
      iVar2 = FUN_004e4020(param_4);
      return iVar2 == 0;
    }
    FUN_004cb460(param_2,local_60);
    iVar2 = FUN_004e4000(local_60);
    if (iVar2 == 0) {
      FUN_004e5780(local_84);
      iVar2 = FUN_004e71d0(local_60,local_84);
      if (iVar2 != 0) {
        FUN_004e5630(3,param_4);
        return false;
      }
    }
  }
  if (!bVar11) {
    iVar2 = uVar8 * uVar10 * 2;
    uVar3 = uVar10 * 2;
  }
  else {
    iVar2 = uVar8 * uVar10;
    uVar3 = uVar10;
  }
  iVar4 = (uVar3 * 3 & 0x3fff) << 2;
  iVar5 = FUN_004ad630(iVar4);
  if (iVar5 == 0) {
    FUN_004e5630(4,param_4);
    return false;
  }
  FUN_004f96c0(param_4,iVar5,uVar10,1,bVar11);
  iVar2 = FUN_004ad630((iVar2 * 3 & 0x3fffU) << 2);
  if (iVar2 == 0) {
    FUN_004e5630(4,param_4);
    FUN_004ad6d0(iVar5);
    return false;
  }
  FUN_004f96c0(local_18,iVar2,uVar10,uVar8,bVar11);
  iVar4 = FUN_004ad630(iVar4);
  if (iVar4 == 0) {
    FUN_004e5630(4,param_4);
    FUN_004ad6d0(iVar5);
    FUN_004ad6d0(iVar2);
    return false;
  }
  FUN_004f9690(local_48,iVar4,uVar10,1);
  iVar9 = ((local_88 + 1) * uVar10 * 3 & 0x3fff) << 2;
  iVar6 = FUN_004ad630(iVar9);
  if (iVar6 == 0) {
    FUN_004e5630(4,param_4);
    FUN_004ad6d0(iVar5);
    FUN_004ad6d0(iVar2);
    FUN_004ad6d0(iVar4);
    return false;
  }
  FUN_004f9690(local_78,iVar6,uVar10,bVar11);
  iVar9 = FUN_004ad630(iVar9);
  if (iVar9 == 0) {
    FUN_004e5630(4,param_4);
    FUN_004ad6d0(iVar5);
    FUN_004ad6d0(iVar2);
    FUN_004ad6d0(iVar4);
    FUN_004ad6d0(iVar6);
    return false;
  }
  FUN_004f9690(local_30,iVar9,uVar10,bVar11);
  if (local_88 == 0) {
    iVar7 = FUN_004eb310();
    if (iVar7 == 0) {
      FUN_004ad6d0(iVar5);
      FUN_004ad6d0(iVar2);
      FUN_004ad6d0(iVar4);
      FUN_004ad6d0(iVar6);
      FUN_004ad6d0(iVar9);
      return false;
    }
    *(undefined1 *)param_4 = 0x30;
  }
  else {
    iVar7 = FUN_004eb8b0(param_2,param_3,param_4,local_18,local_48,local_78,local_30);
    if (iVar7 == 0) {
      FUN_004ad6d0(iVar5);
      FUN_004ad6d0(iVar2);
      FUN_004ad6d0(iVar4);
      FUN_004ad6d0(iVar6);
      FUN_004ad6d0(iVar9);
      return false;
    }
    *(undefined1 *)param_4 = 0xb0;
  }
  *(ushort *)((int)param_4 + 2) = uVar1;
  *(undefined2 *)(param_4 + 1) = 1;
  FUN_004e3e70(param_4,param_4);
  FUN_004ad6d0(iVar2);
  FUN_004ad6d0(iVar4);
  FUN_004ad6d0(iVar6);
  FUN_004ad6d0(iVar9);
  return true;
}

