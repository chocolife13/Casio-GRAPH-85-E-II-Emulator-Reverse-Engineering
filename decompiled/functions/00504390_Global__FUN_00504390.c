// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00504390
// entry: 00504390  size: 496


undefined4 FUN_00504390(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  undefined1 local_74 [8];
  undefined1 local_6c [12];
  undefined4 local_60 [24];
  
  iVar2 = FUN_00505f10(param_1,0x20);
  if (iVar2 == 0) {
    FUN_0052b240(0x1e);
    return 0xfffffff5;
  }
  FUN_00528a20(*(undefined1 *)(param_1 + 0x8e4),local_78,&local_80);
  iVar2 = 0;
  if ((((local_80 == 0) || (bVar1 = *(byte *)(param_1 + 0x8e0) & 0x30, bVar1 == 0x10)) ||
      (bVar1 == 0x20)) && (iVar3 = FUN_00509890(param_1), iVar3 != 0)) goto LAB_0050446d;
  iVar4 = FUN_00517c00();
  switch((*(byte *)(param_1 + 0x8e0) & 0x30) >> 4) {
  case 0:
    FUN_00414240();
    break;
  case 1:
  case 2:
    FUN_00515dd0();
    FUN_00526070(0x22,2);
    *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) | 0x30;
  case 3:
    *(byte *)(param_1 + 0x8e2) = *(byte *)(param_1 + 0x8e2) | 0x80;
    if (iVar4 == 0) {
      iVar3 = FUN_00514820();
      if (iVar3 != 0) {
LAB_0050446d:
        FUN_0052b240(iVar3);
        return 0xfffffff5;
      }
    }
    else {
      FUN_00516760(param_1);
    }
    FUN_0050ad60(param_1);
  }
  local_7c = FUN_00526410();
  FUN_00538a00(local_6c);
  FUN_00538980(0,1,local_74);
  if (((*(byte *)(param_1 + 0x8e0) & 0x30) == 0) || (iVar4 == 0)) {
    uVar7 = 0xb;
  }
  else {
    uVar7 = 0xd;
  }
  FUN_0053c6f0(uVar7);
  FUN_0053edf0(1);
  if (iVar4 == 0) {
    uVar7 = 2;
  }
  else {
    uVar7 = 6;
  }
  FUN_0053c690(uVar7);
  FUN_00526420(0x44);
  local_84 = 0;
  do {
    puVar5 = (undefined4 *)((int)&DAT_0058c000 + iVar2);
    puVar6 = (undefined4 *)((int)local_60 + iVar2);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00538860(local_84,(undefined4 *)((int)local_60 + iVar2));
    iVar2 = iVar2 + 0x30;
    local_84 = local_84 + 1;
  } while (iVar2 < 0x60);
  FUN_005387f0(0);
  uVar7 = FUN_00504730(param_1,param_2);
  FUN_00538810();
  FUN_00538a50(local_6c);
  FUN_005389c0(0,1,local_74);
  FUN_00526420(local_7c);
  return uVar7;
}

