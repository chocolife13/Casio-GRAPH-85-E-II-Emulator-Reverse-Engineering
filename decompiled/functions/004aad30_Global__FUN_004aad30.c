// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aad30
// entry: 004aad30  size: 444


void FUN_004aad30(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 local_450;
  int local_448;
  undefined1 local_444 [16];
  undefined1 local_434 [52];
  undefined4 local_400 [256];
  
  FUN_005234d0(local_444);
  uVar1 = DAT_005d8260;
  DAT_005d8260 = 0;
  puVar3 = (undefined4 *)FUN_004138b0();
  puVar8 = puVar3;
  puVar9 = local_400;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_00414650(8,5);
  if (param_1 == 0) {
    uVar7 = 0x2d;
    uVar10 = 0x2e;
    uVar6 = 0x2f;
    uVar5 = 0x30;
    local_450 = 0x31;
  }
  else if (param_1 == 1) {
    uVar7 = 0x1f1;
    uVar10 = 0x1f2;
    uVar6 = 499;
    uVar5 = 0x26;
    local_450 = 9;
  }
  else {
    uVar7 = 0x23;
    uVar10 = 0x24;
    uVar6 = 0x25;
    uVar5 = 0x26;
    local_450 = 9;
  }
  FUN_005232d0(1,2);
  uVar7 = FUN_0052f6f0(uVar7,local_434);
  FUN_005233e0(uVar7);
  FUN_005232d0(1,3);
  uVar7 = FUN_0052f6f0(uVar10,local_434);
  FUN_005233e0(uVar7);
  FUN_005232d0(1,4);
  uVar6 = FUN_0052f6f0(uVar6,local_434);
  FUN_005233e0(uVar6);
  FUN_005232d0(1,5);
  uVar5 = FUN_0052f6f0(uVar5,local_434);
  FUN_005233e0(uVar5);
  FUN_005232d0(1,6);
  uVar5 = FUN_0052f6f0(local_450,local_434);
  FUN_005233e0(uVar5);
  uVar2 = DAT_005d6c30;
  if (param_1 == 0) {
    FUN_0040ae30();
    uVar2 = DAT_005d6c30;
  }
  else {
    DAT_005d6c30 = 1;
    FUN_005262e0(0);
    do {
      do {
        iVar4 = FUN_00526620(&local_448);
      } while (iVar4 != 0);
    } while (local_448 != 0x7533);
  }
  DAT_005d6c30 = uVar2;
  puVar8 = local_400;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0040ae30();
  FUN_00523630(local_444);
  DAT_005d8260 = uVar1;
  return;
}

