// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004cbff0
// entry: 004cbff0  size: 1029


undefined4 FUN_004cbff0(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint local_9c;
  uint local_8c;
  undefined1 local_84 [12];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar3 = FUN_004e4020(param_1);
  if (iVar3 != 0) {
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  }
  iVar3 = FUN_004e4000(param_1);
  bVar12 = iVar3 == 0;
  local_8c = (uint)!bVar12;
  uVar1 = *(ushort *)((int)param_1 + 2);
  uVar11 = (uint)uVar1;
  uVar2 = *(ushort *)(param_1 + 1);
  uVar8 = (uint)uVar2;
  if (uVar11 != uVar8) {
    FUN_004e5630(9,param_2);
    return 0;
  }
  if (uVar11 == 2) {
    if (bVar12) {
      uVar4 = FUN_004cc400(param_1,param_2,0);
      return uVar4;
    }
    FUN_004cb460(param_1,local_30);
    iVar3 = FUN_004e4000(local_30);
    if (iVar3 == 0) {
      FUN_004e5780(local_84);
      iVar3 = FUN_004e71d0(local_30,local_84);
      if (iVar3 != 0) {
        FUN_004e5630(3,param_2);
        return 0;
      }
    }
  }
  if (!bVar12) {
    local_9c = uVar11 * 2;
    iVar3 = uVar8 * uVar11 * 2;
  }
  else {
    iVar3 = uVar8 * uVar11;
    local_9c = uVar11;
  }
  iVar10 = (iVar3 * 3 & 0x3fffU) << 2;
  iVar3 = FUN_004ad630(iVar10);
  if (iVar3 == 0) {
    FUN_004e5630(4,param_2);
    return 0;
  }
  FUN_004f96c0(param_2,iVar3,uVar11,uVar8,bVar12);
  iVar10 = FUN_004ad630(iVar10);
  if (iVar10 == 0) {
    FUN_004e5630(4,param_2);
    FUN_004ad6d0(iVar3);
    return 0;
  }
  FUN_004f96c0(local_18,iVar10,uVar11,uVar8,bVar12);
  iVar5 = FUN_004ad630((local_9c * 3 & 0x3fff) << 2);
  if (iVar5 == 0) {
    FUN_004e5630(4,param_2);
    FUN_004ad6d0(iVar3);
    FUN_004ad6d0(iVar10);
    return 0;
  }
  FUN_004f9690(local_48,iVar5,uVar11,1);
  iVar9 = ((local_8c + 1) * uVar11 * 3 & 0x3fff) << 2;
  iVar6 = FUN_004ad630(iVar9);
  if (iVar6 == 0) {
    FUN_004e5630(4,param_2);
    FUN_004ad6d0(iVar3);
    FUN_004ad6d0(iVar10);
    FUN_004ad6d0(iVar5);
    return 0;
  }
  FUN_004f9690(local_60,iVar6,uVar11,bVar12);
  iVar9 = FUN_004ad630(iVar9);
  if (iVar9 == 0) {
    FUN_004e5630(4,param_2);
    FUN_004ad6d0(iVar3);
    FUN_004ad6d0(iVar10);
    FUN_004ad6d0(iVar5);
    FUN_004ad6d0(iVar6);
    return 0;
  }
  FUN_004f9690(local_78,iVar9,uVar11,bVar12);
  if (local_8c == 0) {
    iVar7 = FUN_004cc820();
    if (iVar7 == 0) {
      FUN_004ad6d0(iVar3);
      FUN_004ad6d0(iVar10);
      FUN_004ad6d0(iVar5);
      FUN_004ad6d0(iVar6);
      FUN_004ad6d0(iVar9);
      return 0;
    }
    *(undefined1 *)param_2 = 0x30;
  }
  else {
    iVar7 = FUN_004cce80(param_1,param_2,local_18,local_48,local_60,local_78);
    if (iVar7 == 0) {
      FUN_004ad6d0(iVar3);
      FUN_004ad6d0(iVar10);
      FUN_004ad6d0(iVar5);
      FUN_004ad6d0(iVar6);
      FUN_004ad6d0(iVar9);
      return 0;
    }
    *(undefined1 *)param_2 = 0xb0;
  }
  *(ushort *)((int)param_2 + 2) = uVar1;
  *(ushort *)(param_2 + 1) = uVar2;
  FUN_004e3e70(param_2,param_2);
  FUN_004ad6d0(iVar10);
  FUN_004ad6d0(iVar5);
  FUN_004ad6d0(iVar6);
  FUN_004ad6d0(iVar9);
  return 1;
}

