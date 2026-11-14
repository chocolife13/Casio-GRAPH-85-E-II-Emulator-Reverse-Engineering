// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048ac00
// entry: 0048ac00  size: 667


undefined4 FUN_0048ac00(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_b64 [4];
  undefined1 uStack_b60;
  undefined1 uStack_b5f;
  undefined1 uStack_b5e;
  undefined1 uStack_b5d;
  undefined1 uStack_b5c;
  undefined1 uStack_b5b;
  undefined4 local_b2c;
  undefined1 auStack_b28 [4];
  undefined1 auStack_b24 [12];
  undefined1 auStack_b18 [12];
  undefined1 auStack_b0c [24];
  undefined1 auStack_af4 [52];
  undefined1 auStack_ac0 [52];
  undefined1 auStack_a8c [124];
  undefined4 uStack_a10;
  undefined1 local_9f4 [252];
  undefined1 auStack_8f8 [2296];
  
  uVar3 = FUN_00526410();
  local_b2c = uVar3;
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_b64);
  puVar5 = &DAT_00583840;
  puVar6 = &DAT_005cf840;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00538860(0,&DAT_005cf840);
  FUN_005387f0(0);
  FUN_00491a50(local_9f4);
  uStack_a10 = *param_1;
  iVar4 = FUN_00489a20(local_9f4,auStack_b24,auStack_a8c,auStack_8f8);
  if (iVar4 != 0) {
    FUN_00495540(param_1,iVar4);
    param_1[1] = 0x7532;
    FUN_00538810();
    FUN_005389c0(0,0,local_b64);
    FUN_00526440();
    FUN_00526420(uVar3);
    return 0;
  }
  FUN_004954f0(auStack_b24);
  FUN_0048aeb0();
  FUN_004e5780(auStack_b18);
  FUN_004e4120(auStack_b24,auStack_b18,auStack_b0c);
  switch(*param_1) {
  case 0x29:
    uStack_b60 = 0x50;
    uStack_b5f = 0x52;
    uStack_b5e = 0x4e;
    uStack_b5d = 0x3d;
    uStack_b5c = 0;
    break;
  case 0x2a:
    uStack_b60 = 0x49;
    uStack_b5f = 0x4e;
    uStack_b5e = 0x54;
    uStack_b5d = 0x3d;
    uStack_b5c = 0;
    break;
  case 0x2b:
    uStack_b60 = 0x42;
    uStack_b5f = 0x41;
    uStack_b5e = 0x4c;
    uStack_b5d = 0x3d;
    uStack_b5c = 0;
    break;
  case 0x2c:
    uStack_b5e = 0x50;
    uStack_b5d = 0x52;
    goto LAB_0048ad95;
  case 0x2d:
    uStack_b5e = 0x49;
    uStack_b5d = 0x4e;
LAB_0048ad95:
    uStack_b5f = 0x51;
    uStack_b60 = 0xe5;
    uStack_b5c = 0x3d;
    uStack_b5b = 0;
  }
  FUN_004b6ef0(auStack_af4,&uStack_b60);
  uVar3 = FUN_004b5030(auStack_b0c,auStack_ac0);
  FUN_004b6e70(auStack_af4,uVar3);
  FUN_005232d0(1,2);
  FUN_00523470(auStack_af4,0x15);
  FUN_00491990(3);
  puVar1 = param_1 + 1;
  do {
    while( true ) {
      do {
        FUN_00538b30();
        iVar4 = FUN_00526620(puVar1);
      } while (iVar4 != 0);
      uVar2 = *puVar1;
      uVar3 = 0;
      if (0x7532 < uVar2) break;
      if (uVar2 == 0x7532) {
LAB_0048ae65:
        *(undefined2 *)((int)param_1 + 0xe) = 2;
        goto LAB_0048ae69;
      }
      if (uVar2 == 1) goto LAB_0048ae5d;
      if (uVar2 == 4) {
        *puVar1 = 0x754d;
        uVar3 = 0x14;
        goto LAB_0048ae69;
      }
      if (uVar2 == 6) {
        uVar3 = 0x2e;
        goto LAB_0048ae69;
      }
    }
    if (uVar2 == 0x754d) goto LAB_0048ae65;
  } while (uVar2 != 0x7555);
  FUN_0052d2d0(s__FINANCE_005be230,auStack_b28);
  *(undefined2 *)((int)param_1 + 0xe) = 2;
LAB_0048ae5d:
  *puVar1 = 0x7532;
LAB_0048ae69:
  FUN_00538810();
  FUN_005389c0(0,0,local_b64);
  FUN_00526440();
  FUN_00526420(local_b2c);
  return uVar3;
}

