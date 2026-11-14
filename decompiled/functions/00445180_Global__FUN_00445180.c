// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00445180
// entry: 00445180  size: 1088


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445180(void)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 local_64 [4];
  uint local_60;
  int local_5c;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  char local_44 [4];
  char local_40 [12];
  undefined1 local_34 [52];
  
  local_54 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_58);
  _DAT_005ce5a0 = DAT_0057fb18;
  _DAT_005ce5a4 = DAT_0057fb1c;
  _DAT_005ce5a8 = DAT_0057fb20;
  _DAT_005ce5ac = DAT_0057fb24;
  FUN_00538860(0,&DAT_005ce5a0);
  FUN_005387f0(0);
  FUN_00529950(0x1f);
  FUN_00529950(0x22);
LAB_004451fe:
  do {
    FUN_00443b00(1,7);
    FUN_005232d0(1,1);
    FUN_0052f6f0(0xc0,local_34);
    FUN_00523470(local_34,0x15);
    iVar4 = FUN_00528a20(0x1e,local_50,&local_68);
    if (iVar4 == 0) {
      FUN_005232d0(1,2);
      FUN_0052f6f0(0xbb,local_34);
      FUN_00523470(local_34,0x15);
      FUN_005232d0(1,3);
      FUN_0052f6f0(0xbc,local_34);
      FUN_00523470(local_34,0x15);
      FUN_005232d0(1,4);
      FUN_0052f6f0(0xc1,local_34);
      FUN_00523470(local_34,0x15);
      FUN_0055c2fe(local_68 + -1,local_64,10);
      local_70 = local_68 + -1;
      FUN_005232d0(0x13,4);
      uVar6 = 0xffffffff;
      pcVar8 = ":";
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar3 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = local_44;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_005233e0(local_44);
      FUN_005233e0(local_64);
    }
    else {
      FUN_005232d0(1,2);
      FUN_0052f6f0(0xb9,local_34);
      FUN_00523470(local_34,0x15);
      FUN_005232d0(1,3);
      FUN_0052f6f0(0xba,local_34);
      FUN_00523470(local_34,0x15);
      local_70 = 0;
    }
    FUN_005232d0(1,6);
    FUN_0052f6f0(0xc2,local_34);
    FUN_00523470(local_34,0x15);
    FUN_005232d0(1,7);
    FUN_0052f6f0(0xc3,local_34);
    FUN_00523470(local_34,0x15);
    do {
      while( true ) {
        do {
          while( true ) {
            do {
              while( true ) {
                while( true ) {
                  do {
                    FUN_00538b30();
                    iVar4 = FUN_00526620(&local_60);
                  } while (iVar4 != 0);
                  if (local_60 < 0x7535) break;
                  if (local_60 == 0x754d) goto LAB_00445598;
                  if (local_60 == 0x7555) {
                    local_44[0] = s__EQUA_005be254[0];
                    local_44[1] = s__EQUA_005be254[1];
                    local_44[2] = s__EQUA_005be254[2];
                    local_44[3] = s__EQUA_005be254[3];
                    local_40[0] = s__EQUA_005be254[4];
                    local_40[1] = s__EQUA_005be254[5];
                    FUN_0052d2d0(local_44,&local_5c);
                    if (local_5c == 1) {
                      FUN_00529950(0x1f);
                      FUN_00529950(0x22);
                    }
                    goto LAB_004451fe;
                  }
                }
                iVar4 = local_70;
                if (local_60 != 0x7534) break;
                if ((short)local_70 != 0) goto LAB_00445537;
              }
            } while (local_60 == 0);
            if (local_60 < 3) break;
            if (local_60 == 0x7532) goto LAB_00445598;
          }
          iVar1 = local_60 + 1;
          if ((short)local_70 == (short)iVar1) goto LAB_00445537;
          uVar2 = FUN_004ad550(local_48,local_4c,&local_74);
          cVar3 = FUN_00444e60(uVar2);
        } while (cVar3 == '\0');
        FUN_0052f8a0(0x1e,local_44);
        cVar3 = FUN_004ad2a0(6,local_44,&local_6c);
        if (cVar3 == '\0') {
          local_74 = local_74 + 0x14 + local_6c;
        }
        FUN_0052f8a0(0x1f,local_44);
        cVar3 = FUN_004ad2a0(6,local_44,&local_6c);
        if (cVar3 == '\0') {
          local_74 = local_74 + 0x14 + local_6c;
        }
        FUN_0052f8a0(0x22,local_44);
        cVar3 = FUN_004ad2a0(6,local_44,&local_6c);
        if (cVar3 == '\0') {
          local_74 = local_74 + 0x14 + local_6c;
        }
        if ((uint)((iVar1 * 3 + 0xc) * 4) <= local_74) break;
        FUN_00444e60(4);
      }
      FUN_00529950(0x1e);
      FUN_00529950(0x1f);
      FUN_00529950(0x22);
      uVar5 = FUN_00529400(0x1e,1,(short)iVar1 + 1);
      cVar3 = FUN_00444e60(uVar5);
      iVar4 = iVar1;
    } while (cVar3 == '\0');
LAB_00445537:
    local_70 = iVar4;
    iVar4 = FUN_004455d0(&local_70);
    if (iVar4 == 0x754d) {
LAB_00445598:
      FUN_00538810();
      FUN_005389c0(0,0,local_58);
      FUN_00526440();
      FUN_00526420(local_54);
      return;
    }
  } while( true );
}

