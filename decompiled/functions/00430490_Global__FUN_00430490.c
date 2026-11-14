// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00430490
// entry: 00430490  size: 1040


void FUN_00430490(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_168;
  int local_164;
  uint local_160;
  char *local_15c;
  int local_158;
  int local_154 [4];
  undefined1 local_144 [24];
  undefined1 local_12c [8];
  undefined1 local_124 [12];
  undefined1 auStack_118 [12];
  undefined1 auStack_10c [12];
  char local_100 [256];
  
  local_158 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,1,local_12c);
  iVar4 = 0;
  iVar5 = 0;
  do {
    puVar6 = (undefined4 *)((int)&DAT_0057e7d8 + iVar5);
    puVar7 = (undefined4 *)((int)&DAT_005cdd30 + iVar5);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_00538860(iVar4,(undefined4 *)((int)&DAT_005cdd30 + iVar5));
    iVar5 = iVar5 + 0x30;
    iVar4 = iVar4 + 1;
  } while (iVar5 < 0x60);
  FUN_005387f0(0);
  local_154[0] = 0;
  local_154[1] = 0;
  local_154[2] = 0;
  local_154[3] = 0;
  iVar4 = 1;
  do {
    FUN_005232d0(1,iVar4);
    FUN_00523470(&DAT_005cd010,0x15);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  local_168 = 0;
  local_164 = 0;
  local_100[0] = '\0';
  bVar1 = false;
  FUN_005232d0(6,1);
  FUN_00527030();
  FUN_004e5780(local_144);
  iVar5 = local_158;
LAB_00430558:
  while( true ) {
    while( true ) {
      FUN_00431b90(local_154);
      FUN_00538b30();
      if (bVar1) {
        bVar1 = false;
      }
      else {
        iVar5 = FUN_00526620(&local_160);
      }
      if (iVar5 == 0) break;
      switch(local_160) {
      case 0x81:
        local_160 = 0x1d;
        break;
      case 0x82:
        local_160 = 0x1e;
        break;
      case 0x83:
        local_160 = 0x1f;
        break;
      case 0x85:
        local_160 = 0x1c;
        break;
      case 0x95:
        local_160 = 0x1b;
      }
      local_164 = FUN_00525300(local_100,0xff,local_164,local_160);
      local_168 = FUN_005252a0(local_100,local_168,local_164,6,1);
    }
    if (0x7545 < local_160) goto code_r0x004308bf;
    if (0x7543 < local_160) goto LAB_004308ef;
    if (local_160 < 0x7533) break;
    if (local_160 == 0x7534) {
      local_15c = local_100;
      if (local_100[0] != '\0') {
        iVar3 = FUN_004f64a0(&local_15c,2,local_144);
        if (iVar3 == 0) {
          uVar2 = FUN_004e4020();
          FUN_0052b240(uVar2);
          local_164 = FUN_004b7780(local_100,local_15c);
          local_164 = local_164 - (int)local_100;
          local_168 = FUN_00523dc0(6,0x15,local_100,local_164,local_168);
          local_168 = FUN_005252a0(local_100,local_168,local_164,6,1);
        }
        else {
          iVar3 = FUN_004e4000(local_144);
          if (iVar3 == 1) {
            FUN_0052b240(3);
            local_164 = (int)local_15c - (int)local_100;
            local_168 = FUN_00523dc0(6,0x15,local_100,local_164,local_168);
            local_168 = FUN_005252a0(local_100,local_168,local_164,6,1);
          }
          else {
            FUN_004e75d0(local_144,local_124);
            FUN_004e76a0(local_124,auStack_118);
            FUN_004e6b80(local_124,auStack_118,auStack_10c);
            iVar5 = FUN_00430f30(local_154,local_144,&local_160);
            if (iVar5 == 0) {
              if (local_160 == 0x7544) {
                local_168 = 0;
                local_164 = 0;
              }
              else if (local_160 != 0x7545) {
                if (local_160 != 0x754d) goto LAB_00430860;
                goto LAB_00430946;
              }
              FUN_00527030();
              FUN_005252a0(local_100,local_168,local_164,6,1);
              FUN_00527030();
            }
            else {
LAB_00430860:
              local_168 = 0;
              local_164 = 0;
              local_100[0] = '\0';
              bVar1 = true;
              FUN_00527030();
            }
          }
        }
      }
    }
    else if (local_160 == 0x753f) goto LAB_004308ef;
  }
  if (local_160 == 0x7532) goto LAB_00430946;
  if (4 < local_160) {
    if (local_160 == 0x7531) {
      local_164 = FUN_00525300(local_100,0xff,local_164,0x1a);
      local_168 = FUN_005252a0(local_100,local_168,local_164,6,1);
    }
    goto LAB_00430558;
  }
  if (local_160 == 4) {
    FUN_004309e0(local_154);
    goto LAB_004308d8;
  }
  if ((local_160 == 0) || (3 < local_160)) goto LAB_00430558;
  local_154[0] = local_160 - 1;
  if (local_160 == 1) {
    iVar4 = 0;
  }
  else {
    if (local_160 == 2) {
      iVar4 = 0xf;
      FUN_00526070(0x17,0xf);
      goto LAB_00430558;
    }
    if (local_160 == 3) {
      iVar4 = 1;
      FUN_00526070(0x17,1);
      goto LAB_00430558;
    }
  }
  FUN_00526070(0x17,iVar4);
  goto LAB_00430558;
code_r0x004308bf:
  switch(local_160) {
  case 0x7549:
  case 0x7554:
  case 0x755a:
  case 0x755b:
LAB_004308ef:
    iVar3 = FUN_005249f0(local_100,0xff,&local_168,&local_164,&local_160,6,1);
    if (iVar3 == 0) {
      local_168 = FUN_005252a0(local_100,local_168,local_164,6,1);
    }
    break;
  case 0x754d:
LAB_00430946:
    FUN_00523740();
    FUN_00526070(0x17,0);
    FUN_00538810();
    FUN_005389c0(0,1,local_12c);
    FUN_00526440();
    FUN_00526420(local_158);
    return;
  case 0x7555:
    FUN_00430c40(local_154);
LAB_004308d8:
    FUN_00431030(local_154,local_144);
  }
  goto LAB_00430558;
}

