// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043f5a0
// entry: 0043f5a0  size: 930


char FUN_0043f5a0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined3 uVar8;
  int iVar7;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int local_1b8;
  uint local_1b4;
  uint local_1b0;
  undefined1 local_1ac [4];
  undefined1 local_1a8 [4];
  undefined1 local_1a4 [24];
  undefined1 local_18c [4];
  undefined1 local_188 [4];
  undefined1 local_184 [256];
  undefined1 local_84 [132];
  
  FUN_00515e10(local_84);
  iVar12 = 0;
  cVar4 = DAT_0057f4d8;
  while (cVar4 != -1) {
    pcVar1 = &DAT_0057f4d9 + iVar12;
    iVar12 = iVar12 + 1;
    cVar4 = *pcVar1;
  }
  cVar4 = FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b8);
  if (cVar4 != '\0') {
    return 'B';
  }
  cVar4 = FUN_004ad3f0(1,iVar12 + 2,local_184);
  if (cVar4 == '\0') {
    uVar2 = local_184[iVar12 + 1];
    uVar3 = local_184[iVar12];
    uVar10 = (uint)CONCAT11(uVar2,uVar3);
    uVar9 = uVar10 * 0x14;
    local_1b0 = uVar10;
    FUN_004ad550(local_18c,local_1a8,&local_1b4);
    iVar11 = 1;
    if (CONCAT11(uVar2,uVar3) != 0) {
      do {
        iVar5 = FUN_00517210(iVar11);
        if (iVar5 != 0) {
          local_1b4 = local_1b4 + 0x14 + iVar5;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 <= (int)uVar10);
    }
    if (DAT_005d6de0 != 0) {
      iVar11 = FUN_0052ffc0(param_2,local_188);
      local_1b4 = local_1b4 + iVar11 * 0x400;
      uVar9 = uVar9 + 0x14;
    }
    if (local_1b4 < uVar9) {
      return '2';
    }
    FUN_0043f120();
    FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b8);
    cVar4 = FUN_004ad3f0(1,2,local_184);
    if (cVar4 == '\0') {
      if (DAT_0057f4d8 != -1) {
        iVar11 = 0;
        uVar8 = 0;
        do {
          uVar6 = CONCAT31(uVar8,(&DAT_0057f4d8)[iVar11]);
          if ((&DAT_0057f4d8)[iVar11] != -2) {
            uVar6 = FUN_00526070(uVar6,local_184[iVar11]);
          }
          pcVar1 = &DAT_0057f4d9 + iVar11;
          uVar8 = (undefined3)((uint)uVar6 >> 8);
          iVar11 = iVar11 + 1;
        } while (*pcVar1 != -1);
      }
      FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b8);
      cVar4 = FUN_004ad3f0(iVar12 + 3,0x2c,param_2);
      if (cVar4 == '\0') {
        iVar11 = 0;
        iVar12 = iVar12 + 0x2f;
        do {
          iVar5 = iVar12;
          FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b8);
          cVar4 = FUN_004ad3f0(iVar5,0x18,local_1a4);
          if (cVar4 != '\0') {
            return cVar4;
          }
          FUN_0052f780((char)iVar11 + 'A',local_1a4);
          iVar11 = iVar11 + 1;
          iVar12 = iVar5 + 0x18;
        } while (iVar11 < 0x1a);
        FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b8);
        cVar4 = FUN_004ad3f0(iVar5 + 0x18,0x18,local_1a4);
        if (cVar4 == '\0') {
          FUN_0052f780(0xcd,local_1a4);
          FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b8);
          cVar4 = FUN_004ad3f0(iVar5 + 0x30,0x18,local_1a4);
          if (cVar4 == '\0') {
            FUN_0052f780(0xce,local_1a4);
            FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b8);
            cVar4 = FUN_004ad3f0(iVar5 + 0x48,0x84,local_84);
            if (cVar4 == '\0') {
              FUN_00515e50(local_84);
              iVar5 = iVar5 + 0xcc;
              FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b8);
              iVar12 = 1;
              do {
                FUN_00517880(iVar12);
                uVar9 = local_1b0;
                iVar12 = iVar12 + 1;
              } while (iVar12 < 0x15);
              iVar11 = 1;
              iVar12 = iVar5 + local_1b0 * 4;
              if (0 < (int)local_1b0) {
                do {
                  FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b8);
                  cVar4 = FUN_004ad3f0(iVar5,4,local_1ac);
                  if (cVar4 != '\0') {
                    return cVar4;
                  }
                  if ((uint)(local_1b8 - iVar12) < 0x100) {
                    iVar7 = (local_1b8 - iVar12) + 1;
                  }
                  else {
                    iVar7 = 0x100;
                  }
                  cVar4 = FUN_004ad3f0(iVar12,iVar7,local_184);
                  if (cVar4 != '\0') {
                    return cVar4;
                  }
                  local_1b8 = FUN_004b7550(local_184);
                  if (local_1b8 != 0) {
                    FUN_005170d0(iVar11,local_1ac,local_184);
                  }
                  iVar11 = iVar11 + 1;
                  iVar5 = iVar5 + 4;
                  iVar12 = iVar12 + 1 + local_1b8;
                } while (iVar11 <= (int)uVar9);
              }
              cVar4 = '\0';
            }
          }
        }
      }
    }
  }
  return cVar4;
}

