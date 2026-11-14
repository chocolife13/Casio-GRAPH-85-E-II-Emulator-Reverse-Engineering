// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00415880
// entry: 00415880  size: 668


/* WARNING: Removing unreachable block (ram,0x0041592e) */

int FUN_00415880(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  uVar1 = param_1;
  local_24 = 1;
  uVar8 = DAT_0057daac;
  while( true ) {
    uVar6 = 0;
    do {
      uVar7 = (uint)uVar6;
      iVar2 = FUN_004197b0(uVar7 * 0x20 + uVar8,&param_1,4);
      if (iVar2 != 4) {
        return -0x1f;
      }
      uVar5 = param_1 & 0xff00;
      uVar4 = param_1 << 0x10;
      uVar3 = (param_1 & 0xff0000 | param_1 >> 0x10) >> 8;
      param_1 = uVar3 | (uVar5 | uVar4) << 8;
      if (((uVar3 != 0) &&
          ((((uVar5 = uVar5 | uVar4 & 0xfff00, uVar5 == 0x20000 || (uVar5 == 0x11000)) ||
            (uVar5 == 0x12000)) || (uVar5 == 0x13000)))) && ((uVar4 & 0x400000) != 0)) {
        iVar2 = uVar7 - (uVar7 & 0x8000001f);
        FUN_00419f20(uVar1 + 0xc + ((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4,0,
                     uVar7 & 0x8000001f,1);
        *(short *)(uVar1 + 0x2014) = *(short *)(uVar1 + 0x2014) + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x7ff);
    iVar2 = FUN_004197b0(uVar8 + 0xffe0,&local_20,0x20);
    if (iVar2 != 0x20) {
      return -0x1f;
    }
    param_1 = (local_20 & 0xff0000 | local_20 >> 0x10) >> 8 |
              (local_20 & 0xff00 | local_20 << 0x10) << 8;
    if ((local_20 & 0xff00 | local_20 << 0x10 & 0xfff00) != 0x10000) {
      return -6;
    }
    uVar8 = (local_1c & 0xff0000 | local_1c >> 0x10) >> 8 |
            (local_1c & 0xff00 | local_1c << 0x10) << 8;
    iVar2 = FUN_004197b0(uVar8 + 0xffe0,&param_1,4);
    if (iVar2 != 4) break;
    uVar5 = param_1 & 0xff00;
    uVar7 = param_1 << 0x10;
    param_1 = (param_1 & 0xff0000 | param_1 >> 0x10) >> 8 | (uVar5 | uVar7) << 8;
    if ((uVar5 | uVar7 & 0xfff00) != 0x10000) {
      iVar2 = FUN_004197b0(((local_18 & 0xff0000 | local_18 >> 0x10) >> 8 |
                           (local_18 & 0xff00 | local_18 << 0x10) << 8) + 0xffe0,&param_1,4);
      if (iVar2 != 4) {
        return -0x1f;
      }
      uVar7 = param_1 & 0xff00;
      uVar8 = param_1 << 0x10;
      param_1 = (param_1 & 0xff0000 | param_1 >> 0x10) >> 8 | (uVar7 | uVar8) << 8;
      if ((uVar7 | uVar8 & 0xfff00) == 0x10000) {
        if (*(short *)(uVar1 + 0x100c) == -1) {
          iVar2 = FUN_0041ccb0();
          if (iVar2 < 0) {
            return iVar2;
          }
          *(short *)(uVar1 + 0x100c) = (short)iVar2;
        }
        return 0xb;
      }
      return -6;
    }
    local_24 = local_24 + 1;
    if (2 < local_24) {
      return 0xe;
    }
  }
  return -0x1f;
}

