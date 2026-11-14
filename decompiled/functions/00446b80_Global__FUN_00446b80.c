// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00446b80
// entry: 00446b80  size: 975


void FUN_00446b80(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  uint local_5c;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  char local_44 [4];
  char local_40 [12];
  undefined1 local_34 [52];
  
  uVar3 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_58);
  puVar9 = &DAT_0057fbf8;
  puVar11 = &DAT_005ce6f0;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_00538860(0,&DAT_005ce6f0);
  FUN_005387f0(0);
LAB_00446bcc:
  do {
    FUN_00443b00(1,7);
    FUN_005232d0(1,1);
    FUN_0052f6f0(0xb8,local_34);
    FUN_00523470(local_34,0x15);
    iVar5 = FUN_00528a20(0x20,&local_64,local_54);
    if (iVar5 == 0) {
      FUN_005232d0(1,2);
      FUN_0052f6f0(0xbb,local_34);
      FUN_00523470(local_34,0x15);
      FUN_005232d0(1,3);
      FUN_0052f6f0(0xbc,local_34);
      FUN_00523470(local_34,0x15);
      FUN_005232d0(1,4);
      FUN_0052f6f0(0xbd,local_34);
      FUN_00523470(local_34,0x15);
      FUN_0055c2fe(local_64,local_60,10);
      local_70 = (int)(short)local_64;
      FUN_005232d0(0x13,4);
      uVar6 = 0xffffffff;
      pcVar10 = ":";
      do {
        pcVar12 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar12;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar12 + -uVar6;
      pcVar12 = local_44;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_005233e0(local_44);
      FUN_005233e0(local_60);
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
    FUN_0052f6f0(0xbe,local_34);
    FUN_00523470(local_34,0x15);
    FUN_005232d0(1,7);
    FUN_0052f6f0(0xbf,local_34);
    FUN_00523470(local_34,0x15);
    do {
      while( true ) {
        while( true ) {
          do {
            FUN_00538b30();
            iVar5 = FUN_00526620(&local_5c);
            uVar6 = local_5c;
          } while (iVar5 != 0);
          if (local_5c < 0x7535) break;
          if (local_5c == 0x754d) goto LAB_00446f27;
          if (local_5c == 0x7555) {
            local_44[0] = s__EQUA_005be254[0];
            local_44[1] = s__EQUA_005be254[1];
            local_44[2] = s__EQUA_005be254[2];
            local_44[3] = s__EQUA_005be254[3];
            local_40[0] = s__EQUA_005be254[4];
            local_40[1] = s__EQUA_005be254[5];
            FUN_0052d2d0(local_44,local_48);
            goto LAB_00446bcc;
          }
        }
        if (local_5c == 0x7534) break;
        if (local_5c != 0) {
          if (local_5c < 6) {
            iVar5 = local_5c + 1;
            sVar8 = (short)iVar5;
            iVar13 = (int)sVar8;
            if (local_70 == iVar13) goto LAB_00446ee0;
            uVar1 = FUN_004ad550(local_4c,local_50,&local_6c);
            cVar2 = FUN_00444e60(uVar1);
            if (cVar2 != '\0') {
              FUN_0052f8a0(0x20,local_44);
              cVar2 = FUN_004ad2a0(6,local_44,&local_68);
              if (cVar2 == '\0') {
                local_6c = local_6c + 0x14 + local_68;
              }
              FUN_0052f8a0(0x21,local_44);
              cVar2 = FUN_004ad2a0(6,local_44,&local_68);
              if (cVar2 == '\0') {
                local_6c = local_6c + 0x14 + local_68;
              }
              if (local_6c < ((uVar6 + 2) * iVar5 + 3) * 0xc) {
                FUN_00444e60(4);
              }
              else {
                FUN_00529950(0x20);
                FUN_00529950(0x21);
                uVar4 = FUN_00529400(0x20,iVar13,iVar13 + 1);
                cVar2 = FUN_00444e60(uVar4);
                if (cVar2 != '\0') {
                  local_70 = (int)sVar8;
                  goto LAB_00446ee0;
                }
              }
            }
          }
          else if (local_5c == 0x7532) goto LAB_00446f27;
        }
      }
    } while (local_70 == 0);
LAB_00446ee0:
    iVar5 = FUN_00446f50(&local_70);
    if (iVar5 == 0x754d) {
LAB_00446f27:
      FUN_00538810();
      FUN_005389c0(0,0,local_58);
      FUN_00526440();
      FUN_00526420(uVar3);
      return;
    }
  } while( true );
}

