// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005305c0
// entry: 005305c0  size: 979


/* WARNING: Type propagation algorithm not settling */

char FUN_005305c0(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char local_1b3 [27];
  uint local_198 [3];
  undefined1 local_18c [4];
  undefined1 local_188 [4];
  undefined1 local_184 [132];
  undefined1 local_100 [256];
  
  iVar5 = 0;
  local_1b3[0] = '\x19';
  local_1b3[1] = 0x21;
  local_1b3[2] = 0x22;
  local_1b3[3] = 0x23;
  local_1b3[4] = 0x1a;
  local_1b3[5] = 0x56;
  local_1b3[6] = 0x2c;
  local_1b3[7] = 0x13;
  local_1b3[8] = 0x2a;
  local_1b3[9] = 0x1b;
  local_1b3[10] = 0x1c;
  local_1b3[0xb] = 0x1d;
  local_1b3[0xc] = 0x1e;
  local_1b3[0xd] = 0x2b;
  local_1b3[0xe] = 0xff;
  iVar6 = 0;
  do {
    iVar3 = iVar6;
    iVar6 = iVar3 + 1;
  } while (local_1b3[iVar3] != -1);
  uVar9 = iVar3 + 3;
  uVar7 = uVar9;
  if ((uVar9 & 3) != 0) {
    local_198[1] = 0;
    iVar5 = 4 - (uVar9 & 3);
    uVar7 = uVar9 + iVar5;
  }
  uVar8 = uVar7 + 0x84;
  cVar1 = FUN_00526090(0x22);
  if (cVar1 == '\0') {
    uVar8 = uVar7 + 0x108;
  }
  iVar6 = 1;
  do {
    FUN_00517360(iVar6,local_100);
    iVar3 = FUN_004b7550(local_100);
    iVar6 = iVar6 + 1;
    uVar8 = uVar8 + 5 + iVar3;
  } while (iVar6 < 0x15);
  FUN_004ad550(local_18c,local_188,local_198);
  uVar4 = FUN_00530550(param_1,local_1b3 + 0xf,local_198 + 2);
  cVar1 = FUN_004ad350(s__GRAPH_005be2ac,uVar4);
  if (cVar1 == '\0') {
    if (local_198[2] + local_198[0] < uVar8) {
      return '2';
    }
    FUN_004ac750(s__GRAPH_005be2ac,local_1b3 + 0xf);
  }
  else if (local_198[0] < uVar8) {
    return '2';
  }
  cVar1 = FUN_004abb50(s__GRAPH_005be2ac,local_1b3 + 0xf,uVar8,0);
  if (cVar1 != '\0') {
    return cVar1;
  }
  cVar1 = '\x18';
  iVar6 = 0;
  do {
    iVar3 = iVar6;
    uVar2 = FUN_00526090(cVar1);
    local_100[iVar3] = uVar2;
    cVar1 = local_1b3[iVar3];
    iVar6 = iVar3 + 1;
  } while (cVar1 != -1);
  local_100[iVar3 + 1] = 0x14;
  local_100[iVar3 + 2] = 0;
  cVar1 = FUN_004ac2f0(iVar3 + 3,local_100,0);
  if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
    if (iVar5 != 0) {
      FUN_004ac130(s__GRAPH_005be2ac,local_1b3 + 0xf,iVar5,local_198 + 1,uVar9);
      uVar9 = uVar9 + iVar5;
    }
    iVar6 = FUN_00515e10(local_184);
    if (iVar6 != 0) {
      iVar6 = FUN_00515f70(1);
      if (iVar6 != 0) {
        return '2';
      }
      FUN_00515e10(local_184);
    }
    cVar1 = FUN_004ac130(s__GRAPH_005be2ac,local_1b3 + 0xf,0x84,local_184,uVar9);
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
      iVar6 = uVar9 + 0x84;
      cVar1 = FUN_00526090(0x22);
      if (cVar1 == '\0') {
        iVar5 = FUN_00515ec0(local_184);
        if (iVar5 != 0) {
          iVar5 = FUN_00515f70(0);
          if (iVar5 != 0) {
            return '2';
          }
          FUN_00515ec0(local_184);
        }
        cVar1 = FUN_004ac130(s__GRAPH_005be2ac,local_1b3 + 0xf,0x84,local_184,iVar6);
        if (((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) goto LAB_00530974;
        iVar6 = uVar9 + 0x108;
      }
      iVar5 = 1;
      do {
        uVar4 = FUN_005171e0(iVar5,local_100,iVar6);
        cVar1 = FUN_004ac130(s__GRAPH_005be2ac,local_1b3 + 0xf,4,uVar4);
        if (((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) goto LAB_00530974;
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x15);
      iVar5 = 1;
      while( true ) {
        FUN_00517360(iVar5,local_100);
        iVar3 = FUN_004b7550(local_100,local_100,iVar6);
        cVar1 = FUN_004ac130(s__GRAPH_005be2ac,local_1b3 + 0xf,iVar3 + 1);
        if (((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) break;
        iVar3 = FUN_004b7550(local_100);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 1 + iVar3;
        if (0x14 < iVar5) {
          return '\0';
        }
      }
    }
  }
LAB_00530974:
  FUN_004ac750(s__GRAPH_005be2ac,local_1b3 + 0xf);
  return cVar1;
}

