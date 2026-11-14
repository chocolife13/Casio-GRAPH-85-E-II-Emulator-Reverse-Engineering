// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a52a0
// entry: 004a52a0  size: 949


/* WARNING: Type propagation algorithm not settling */

void FUN_004a52a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_8c;
  int local_88 [9];
  undefined1 local_64 [4];
  undefined4 local_60;
  uint local_5c;
  undefined1 local_58 [24];
  undefined1 local_40 [12];
  undefined1 local_34 [52];
  
  iVar4 = 0;
  local_88[6] = 0;
  local_88[0] = 0;
  local_8c = 0;
  local_88[5] = 0;
  local_88[7] = 0;
  local_88[2] = 1;
  local_88[1] = 1;
  local_88[8] = 0;
  local_60 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,2,local_40);
  iVar5 = 0;
  do {
    puVar6 = (undefined4 *)((int)&DAT_00585438 + iVar4);
    puVar7 = (undefined4 *)((int)&DAT_005cffc8 + iVar4);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_00538860(iVar5,(undefined4 *)((int)&DAT_005cffc8 + iVar4));
    iVar4 = iVar4 + 0x30;
    iVar5 = iVar5 + 1;
  } while (iVar4 < 0x90);
  FUN_004ab0a0(0,local_88 + 3);
  if (4 < local_88[3]) {
    local_88[5] = local_88[3];
    local_88[3] = 0;
  }
  local_8c = local_88[5];
  FUN_004ab0a0(1,local_88 + 4);
  local_88[0] = local_88[3];
LAB_004a5365:
  do {
    iVar4 = local_88[6];
    uVar1 = FUN_004aaf50(local_88[6]);
    if (iVar4 != 0) {
      FUN_004a5660(1,local_88,&local_8c,local_58,uVar1,local_88 + 2,local_88 + 1);
      FUN_00538810();
    }
    else {
      FUN_004a5660(0,local_88,&local_8c,local_58,uVar1,local_88 + 2,local_88 + 1);
      FUN_00538810();
    }
    FUN_005387f0(iVar4 != 0);
LAB_004a53ce:
    do {
      while( true ) {
        do {
          FUN_00538b30();
          iVar5 = FUN_00526620(&local_5c);
        } while (iVar5 != 0);
        if (local_5c < 0x7535) break;
        if (local_5c == 0x7542) {
          FUN_004a5920(iVar4,local_88,&local_8c,local_58,uVar1,local_88 + 2,local_88 + 1);
        }
        else if (local_5c == 0x7547) {
          FUN_004a59c0(iVar4,local_88,&local_8c,local_58,uVar1,local_88 + 2,local_88 + 1);
        }
        else if (local_5c == 0x754d) {
LAB_004a5626:
          FUN_00538810();
          FUN_005389c0(0,2,local_40);
          FUN_00526440();
          FUN_00526420(local_60);
          return;
        }
      }
      if (local_5c == 0x7534) {
LAB_004a5419:
        if (iVar4 == 0) {
          FUN_004ab030(0,local_8c + local_88[0]);
          FUN_005237c0(5);
          FUN_00525b40(5);
          FUN_005232d0(7,3);
          uVar2 = FUN_004ab0a0(0,local_64);
          FUN_005233e0(uVar2);
          FUN_005232d0(1,5);
          uVar2 = FUN_0052f6f0(1,local_34);
          FUN_005233e0(uVar2);
          FUN_004a5a70();
          FUN_00523800(5);
          local_88[1] = 1;
          FUN_004a5660(0,local_88,&local_8c,local_58,uVar1,local_88 + 2,local_88 + 1);
        }
        else {
          FUN_004ab030(1,local_8c + local_88[0]);
          FUN_005237c0(5);
          FUN_00525b40(5);
          FUN_005232d0(7,3);
          uVar2 = FUN_004ab0a0(1,local_64);
          FUN_005233e0(uVar2);
          FUN_005232d0(1,5);
          uVar2 = FUN_0052f6f0(1,local_34);
          FUN_005233e0(uVar2);
          FUN_004a5a70();
          FUN_00523800(5);
          local_88[1] = 1;
          FUN_004a5660(1,local_88,&local_8c,local_58,uVar1,local_88 + 2,local_88 + 1);
        }
        goto LAB_004a53ce;
      }
      if (3 < local_5c) {
        if (local_5c == 0x7532) goto LAB_004a5626;
        goto LAB_004a53ce;
      }
      if (local_5c == 3) {
        local_88[4] = local_88[0];
        local_88[7] = local_8c;
        local_88[6] = 0;
        local_88[2] = 1;
        local_88[1] = 1;
        local_88[0] = local_88[3];
        local_8c = local_88[5];
        goto LAB_004a5365;
      }
      if (local_5c == 1) goto LAB_004a5419;
    } while (local_5c != 2);
    local_88[6] = 1;
    local_88[2] = 1;
    local_88[1] = 1;
    if ((local_88[8] == 0) && (local_88[8] = 1, 4 < local_88[4])) {
      local_88[7] = local_88[4];
      local_88[4] = 0;
    }
    local_88[3] = local_88[0];
    local_88[5] = local_8c;
    local_8c = local_88[7];
    local_88[0] = local_88[4];
  } while( true );
}

