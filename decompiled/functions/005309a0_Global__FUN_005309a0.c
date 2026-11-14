// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005309a0
// entry: 005309a0  size: 927


char FUN_005309a0(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_1bc;
  undefined1 local_1b8;
  char local_1b7 [15];
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  undefined1 local_19c [12];
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  undefined1 local_188 [4];
  undefined1 local_184 [132];
  char local_100 [256];
  
  local_1b8 = 0x18;
  local_1b7[0] = '\x19';
  local_1b7[1] = 0x21;
  local_1b7[2] = 0x22;
  local_1b7[3] = 0x23;
  local_1b7[4] = 0x1a;
  local_1b7[5] = 0x56;
  local_1b7[6] = 0x2c;
  local_1b7[7] = 0x13;
  local_1b7[8] = 0x2a;
  local_1b7[9] = 0x1b;
  local_1b7[10] = 0x1c;
  local_1b7[0xb] = 0x1d;
  local_1b7[0xc] = 0x1e;
  local_1b7[0xd] = 0x2b;
  local_1b7[0xe] = 0xff;
  FUN_00515e10(local_184);
  iVar8 = 0;
  do {
    iVar9 = iVar8;
    iVar8 = iVar9 + 1;
  } while (local_1b7[iVar9] != -1);
  uVar4 = FUN_00530550(param_1,local_19c,&local_1bc);
  cVar1 = FUN_004ad350(s__GRAPH_005be2ac,uVar4);
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = FUN_004ad3f0(1,iVar9 + 3U,local_100);
  if (cVar1 == '\0') {
    cVar1 = local_100[iVar9 + 2];
    cVar3 = local_100[iVar9 + 1];
    uVar10 = (uint)CONCAT11(cVar1,cVar3);
    uVar5 = iVar9 + 3U & 0x80000003;
    local_1a4 = uVar10;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if (uVar5 == 0) {
      local_1a0 = 0;
    }
    else {
      local_1a0 = 4 - uVar5;
    }
    iVar8 = 0;
    cVar2 = '\x18';
    do {
      if (cVar2 == '\"') break;
      cVar2 = local_1b7[iVar8];
      iVar8 = iVar8 + 1;
    } while (cVar2 != -1);
    if (local_100[iVar8] == '\0') {
      iVar8 = FUN_00515ec0(local_184);
      if (iVar8 != 0) {
        iVar8 = FUN_00515f70(0);
        if (iVar8 != 0) {
          return '2';
        }
        FUN_00515ec0(local_184);
      }
      uVar5 = (local_1bc - iVar9) - 0x10b;
    }
    else {
      uVar5 = (local_1bc - iVar9) - 0x87;
    }
    FUN_004ad550(local_188,local_18c,&local_1a8);
    iVar8 = 1;
    if (CONCAT11(cVar1,cVar3) != 0) {
      do {
        iVar6 = FUN_00517210(iVar8);
        if (iVar6 != 0) {
          local_1a8 = local_1a8 + 0x14 + iVar6;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= (int)uVar10);
    }
    if (local_1a8 < uVar5) {
      return '2';
    }
    cVar1 = '\x18';
    iVar8 = 0;
    do {
      FUN_00526070(cVar1,local_100[iVar8]);
      cVar1 = local_1b7[iVar8];
      iVar8 = iVar8 + 1;
    } while (cVar1 != -1);
    FUN_004ad350(s__GRAPH_005be2ac,local_19c,&local_1bc);
    iVar9 = local_1a0 + 4 + iVar9;
    FUN_004ad350(s__GRAPH_005be2ac,local_19c,&local_1bc);
    cVar1 = FUN_004ad3f0(iVar9,0x84,local_184);
    if (cVar1 == '\0') {
      FUN_00515e50(local_184);
      FUN_004ad350(s__GRAPH_005be2ac,local_19c,&local_1bc);
      iVar8 = iVar9 + 0x84;
      cVar3 = FUN_00526090(0x22);
      if (cVar3 == '\0') {
        cVar1 = FUN_004ad3f0(iVar8,0x84,local_184);
        if (cVar1 != '\0') {
          return cVar1;
        }
        FUN_00515f00(local_184);
        iVar8 = iVar9 + 0x108;
        cVar1 = '\0';
      }
      FUN_004ad350(s__GRAPH_005be2ac,local_19c,&local_1bc);
      iVar9 = 1;
      do {
        FUN_00517880(iVar9);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x15);
      iVar6 = 1;
      iVar9 = iVar8 + uVar10 * 4;
      if (0 < (int)local_1a4) {
        do {
          FUN_004ad350(s__GRAPH_005be2ac,local_19c,&local_1bc);
          cVar1 = FUN_004ad3f0(iVar8,4,local_190);
          if (cVar1 != '\0') {
            return cVar1;
          }
          if ((uint)(local_1bc - iVar9) < 0x100) {
            iVar7 = (local_1bc - iVar9) + 1;
          }
          else {
            iVar7 = 0x100;
          }
          cVar1 = FUN_004ad3f0(iVar9,iVar7,local_100);
          if (cVar1 != '\0') {
            return cVar1;
          }
          local_1bc = FUN_004b7550(local_100);
          if (local_1bc != 0) {
            FUN_005170d0(iVar6,local_190,local_100);
          }
          iVar9 = iVar9 + 1 + local_1bc;
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 4;
          cVar1 = '\0';
        } while (iVar6 <= (int)local_1a4);
      }
    }
  }
  return cVar1;
}

