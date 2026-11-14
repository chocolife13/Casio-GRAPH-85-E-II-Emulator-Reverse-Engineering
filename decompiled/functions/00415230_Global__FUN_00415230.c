// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00415230
// entry: 00415230  size: 1034


uint FUN_00415230(int param_1)

{
  short *psVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  short local_32;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  undefined1 local_1c [8];
  int local_14;
  
  bVar2 = false;
  DAT_005d8730 = 0;
  uVar8 = 0;
  do {
    iVar3 = FUN_0041a750(uVar8,local_1c);
    if ((iVar3 < 0) || ((&DAT_0057daac)[uVar8 & 0xffff] != local_14)) {
      return 1;
    }
    uVar8 = uVar8 + 1;
  } while ((ushort)uVar8 < 0x19);
  local_28 = 0;
  local_24 = DAT_0057daac;
  uVar8 = 1;
  do {
    iVar3 = FUN_00418cd0(uVar8);
    if (iVar3 < 0) {
      return uVar8;
    }
    FUN_00419650(0);
    FUN_00419220(&local_30,4);
    if ((local_30 & 0xfffffff) != (uVar8 | 0x1000000)) {
      return uVar8;
    }
    FUN_00419650(4);
    FUN_00419220(&local_20,4);
    if (uVar8 == 1) {
      FUN_00419650(0xc);
      FUN_00419220(&local_32,2);
      if (local_32 != 0xfff) goto LAB_00415319;
      local_28 = 1;
    }
    else {
LAB_00415319:
      if (local_28 == 0) {
        FUN_00419650(8);
        FUN_00419220(&local_2c,4);
        if (local_2c != 0xffffffff) {
          return uVar8;
        }
      }
    }
    FUN_00418f90();
    uVar9 = 0;
    do {
      iVar3 = (uint)uVar9 * 0x20 + local_24;
      iVar4 = FUN_004197b0(iVar3,&local_30,4);
      if (iVar4 != 4) {
        return uVar8;
      }
      uVar7 = local_30 & 0xff00;
      uVar5 = local_30 << 0x10;
      local_30 = (local_30 & 0xff0000 | local_30 >> 0x10) >> 8 | (uVar7 | uVar5) << 8;
      uVar6 = uVar7 | uVar5 & 0xfff00;
      if ((((uVar6 != 0x20000) && (uVar6 != 0x11000)) && (uVar6 != 0x12000)) && (uVar6 != 0x13000))
      break;
      if ((uVar5 & 0x800000) != 0) {
        if (uVar6 == 0x12000) {
          bVar2 = true;
        }
        local_30 = (uVar7 << 8 | (uVar6 << 8) >> 0x10) >> 8;
        iVar4 = FUN_004197f0(iVar3,&local_30,4);
        if (iVar4 != 4) {
          return uVar8;
        }
        local_30 = (local_30 & 0xff0000 | local_30 >> 0x10) >> 8 |
                   (local_30 & 0xff00 | local_30 << 0x10) << 8;
      }
      uVar6 = local_30 & 0xfff0000;
      if (uVar6 == 0x1200000) {
        if ((local_30 & 0xffff) == 0) {
          bVar2 = true;
        }
        else if ((local_30 & 0x80000000) == 0) goto LAB_004155b3;
      }
      else if (uVar6 == 0x1300000) {
        if (bVar2) {
          local_30 = 0x3001;
          iVar4 = FUN_004197f0(iVar3,&local_30,4);
          if (iVar4 != 4) {
            return uVar8;
          }
          local_30 = (local_30 & 0xff0000 | local_30 >> 0x10) >> 8 |
                     (local_30 & 0xff00 | local_30 << 0x10) << 8;
        }
        if (local_28 == 0) {
          iVar4 = FUN_004197b0(iVar3 + 0x14,&local_32,2);
          if (iVar4 != 2) {
            return uVar8;
          }
          if (local_32 != -1) {
            return uVar8;
          }
          iVar3 = iVar3 + 0x16;
LAB_004154e7:
          iVar3 = FUN_004197b0(iVar3,&local_32,2);
          if (iVar3 != 2) {
            return uVar8;
          }
          if (local_32 != -1) {
            return uVar8;
          }
        }
      }
      else if (uVar6 == 0x2000000) {
        bVar2 = false;
        if (local_28 == 0) {
          iVar4 = FUN_004197b0(iVar3 + 0xc,&local_2c,4);
          if (iVar4 != 4) {
            return uVar8;
          }
          local_2c = (local_2c & 0xff0000 | local_2c >> 0x10) >> 8 |
                     (local_2c & 0xff00 | local_2c << 0x10) << 8;
          if ((local_2c != 0xffffffff) && (local_2c != 0xfffffff)) {
            return uVar8;
          }
          iVar3 = iVar3 + 0x14;
          goto LAB_004154e7;
        }
      }
      else {
LAB_004155b3:
        bVar2 = false;
      }
      DAT_005d8730 = DAT_005d8730 + 1;
      if ((local_30 & 0xffff) != 0) {
        psVar1 = (short *)(param_1 + 0x2136 + uVar8 * 2);
        *psVar1 = *psVar1 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x7ff);
    if (uVar9 != 0x7ff) {
      if (uVar9 == 0) {
        return uVar8;
      }
      if (local_20 == 0xffffffff) {
        return 0;
      }
      return uVar8;
    }
    local_24 = local_20;
    if (local_20 == 0xffffffff) {
      return 0;
    }
    if (((local_20 < DAT_0057daac) || (DAT_0057db0c < local_20)) && ((local_20 & 0xffff) == 0)) {
      return uVar8;
    }
    uVar8 = uVar8 + 1;
    if (0x19 < (int)uVar8) {
      return 0;
    }
  } while( true );
}

