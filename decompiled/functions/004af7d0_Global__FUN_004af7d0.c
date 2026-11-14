// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004af7d0
// entry: 004af7d0  size: 527


void FUN_004af7d0(void)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  char *local_ec;
  byte local_e8 [12];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  char local_d0 [52];
  undefined1 local_9c [52];
  undefined4 local_68 [13];
  undefined4 local_34 [13];
  
  local_f4 = 0;
  FUN_00414240();
  local_fc = 0x41;
  do {
    FUN_00414240();
    iVar5 = 2;
    local_ec = "";
    iVar4 = local_fc;
    do {
      puVar6 = local_68;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0x20202020;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0x2020;
      puVar6 = local_34;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0x20202020;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0x2020;
      iVar3 = 0xc;
      pcVar7 = local_d0;
      while (iVar3 != 0) {
        iVar3 = iVar3 + -1;
        builtin_strncpy(pcVar7,"    ",4);
        pcVar7 = pcVar7 + 4;
      }
      pcVar7[0] = ' ';
      pcVar7[1] = ' ';
      if (0x1c < iVar4 + -0x41) break;
      cVar1 = local_ec[iVar4];
      local_f0 = CONCAT31(local_f0._1_3_,cVar1);
      FUN_0052f760(local_f0,local_e8);
      local_d0[0] = cVar1;
      if (0x5a < iVar4) {
        if (iVar4 == 0x5b) {
          local_d0[0] = -0x33;
        }
        else if (iVar4 == 0x5c) {
          local_d0[0] = -0x1b;
          local_d0[1] = 0x47;
        }
        else {
          local_d0[0] = 'A';
          local_d0[1] = 0x4e;
          local_d0[2] = 0x53;
        }
      }
      if (((local_e8[0] & 0x80) == 0) || ((local_e8[0] & 0xf0) == 0xf0)) {
        local_dc = 0;
        local_d8 = 0;
        local_d4 = 0;
      }
      FUN_004b5060(local_e8,local_9c,&local_f4);
      puVar2 = (undefined1 *)FUN_004b6f30(local_9c,0xd);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
        FUN_004b71f0(local_34,puVar2 + 1,0x15);
      }
      FUN_004b71f0(local_68,local_9c,0x15);
      FUN_005232d0(1,iVar5 + -1);
      FUN_00523470(local_d0,0x15);
      FUN_005232d0(1,iVar5);
      FUN_00523470(local_68,0x15);
      FUN_005232d0(1,iVar5 + 1);
      FUN_00523470(local_34,0x15);
      iVar5 = iVar5 + 3;
      iVar4 = iVar4 + 1;
    } while (iVar5 < 8);
    iVar4 = FUN_00526620(&local_f8);
    if (iVar4 == 0) {
      switch(local_f8) {
      case 0x7532:
      case 0x753f:
      case 0x754d:
        return;
      case 0x7542:
        if (0x41 < local_fc) {
          local_fc = local_fc + -2;
        }
        break;
      case 0x7547:
        if (local_fc < 0x5d) {
          local_fc = local_fc + 2;
        }
      }
    }
  } while( true );
}

