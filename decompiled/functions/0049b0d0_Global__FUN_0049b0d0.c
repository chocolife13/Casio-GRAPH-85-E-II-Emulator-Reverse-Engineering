// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049b0d0
// entry: 0049b0d0  size: 723


undefined4 FUN_0049b0d0(void)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte local_9c [12];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined1 local_70 [12];
  undefined4 local_64 [12];
  undefined1 local_34 [52];
  
  puVar7 = DAT_005d6db8;
  local_84 = DAT_005bec50;
  local_9c[0] = 0;
  local_9c[1] = 0;
  local_9c[2] = 0;
  local_9c[3] = 0;
  local_9c[4] = 0;
  local_9c[5] = 0;
  local_9c[6] = 0;
  local_9c[7] = 0;
  local_9c[8] = 0;
  local_80 = DAT_005bec54;
  local_7c = DAT_005bec58;
  local_7a = DAT_005bec5a;
  local_78 = FUN_00526410();
  FUN_00538a00(local_70);
  FUN_00538980(0,0,local_74);
  FUN_00526420(0xf7);
  puVar8 = &DAT_005847a8;
  puVar9 = local_64;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_00538860(0,local_64);
  FUN_005387f0(0);
  FUN_00414240();
  FUN_005232d0(1,1);
  FUN_0052f6f0(0x21f,local_34);
  FUN_00523470(local_34,0x15);
  FUN_005232d0(1,2);
  uVar4 = FUN_004b6bd0(&local_84);
  FUN_00523470(&local_84,uVar4);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
  local_88 = 0;
  local_8c = 0;
switchD_0049b232_caseD_7533:
  do {
    FUN_00538b30();
    uVar4 = FUN_0040ad00();
    iVar5 = FUN_00526620(&local_90);
    if (iVar5 == 0) goto code_r0x0049b22a;
    iVar5 = FUN_0049b090(local_90);
  } while (iVar5 == 0);
  goto LAB_0049b241;
code_r0x0049b22a:
  switch(local_90) {
  case 0x7531:
    local_90 = 0x58;
LAB_0049b241:
    local_88 = FUN_005254d0(local_9c,8,local_88,local_90);
    local_8c = FUN_005252d0(local_9c,local_8c,local_88,2,2,9);
    break;
  case 0x7534:
    iVar5 = FUN_004b7550(local_9c);
    if (iVar5 == 0) {
      FUN_00450f60(uVar4);
      break;
    }
    uVar2 = *puVar7;
    while (uVar2 != 0) {
      puVar7 = puVar7 + 1;
      uVar2 = *puVar7;
    }
    puVar3 = puVar7 + -1;
    if (puVar7[-1] != 0x5c) {
      do {
        puVar7 = puVar3;
        puVar3 = puVar7 + -1;
      } while (puVar7[-1] != 0x5c);
      *puVar7 = 0;
    }
    pbVar6 = local_9c;
    bVar1 = local_9c[0];
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      *puVar7 = (ushort)bVar1;
      puVar7 = puVar7 + 1;
      bVar1 = *pbVar6;
    }
    *puVar7 = 0x2e;
    puVar7[1] = 0x67;
    puVar7[2] = 0x31;
    puVar7[3] = 0x65;
    puVar7[4] = 0;
  case 0x7532:
  case 0x754d:
    FUN_00523740();
    FUN_00538810();
    FUN_00538a50(local_70);
    FUN_005389c0(0,0,local_74);
    FUN_00526420(local_78);
    FUN_005262e0(0);
    return local_90;
  case 0x753f:
    FUN_005262e0(0x84);
  case 0x7544:
  case 0x7545:
  case 0x7549:
    FUN_00524a50(local_9c,8,&local_8c,&local_88,&local_90,2,2);
    local_8c = FUN_005252d0(local_9c,local_8c,local_88,2,2,9);
  }
  goto switchD_0049b232_caseD_7533;
}

