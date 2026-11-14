// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00413b10
// entry: 00413b10  size: 645


uint FUN_00413b10(uint param_1,int param_2,byte *param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte local_1a;
  byte local_19;
  int local_14;
  int local_10;
  int local_c;
  
  local_1a = 0;
  local_10 = param_2;
  local_19 = 0;
  iVar8 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              if ((0x7f < (int)param_1) || (0x3f < iVar8)) {
                return param_1;
              }
              uVar2 = (ushort)*param_3;
              if (uVar2 == 0) {
                return param_1;
              }
              if (((((uVar2 == 0x7f) || (uVar2 == 0xf7)) || (uVar2 == 0xe5)) ||
                  ((uVar2 == 0xe6 || (uVar2 == 0xe7)))) || (pbVar7 = param_3 + 1, uVar2 == 0xf9)) {
                uVar2 = CONCAT11(*param_3,param_3[1]);
                pbVar7 = param_3 + 2;
              }
              param_3 = pbVar7;
              if (-1 < (int)param_1) break;
              param_1 = param_1 + 0x15;
            }
            if (uVar2 != 0xf9c8) break;
            param_1 = param_1 - 6;
          }
          if (uVar2 != 0xf9c9) break;
          param_1 = param_1 + 6;
        }
        if (uVar2 != 0xf9ca) break;
        iVar8 = iVar8 + 8;
        local_10 = iVar8;
        if (DAT_005d8680 + 1 < 8) {
          DAT_005d8680 = DAT_005d8680 + 1;
        }
      }
      if (uVar2 != 0xf9cd) break;
      param_1 = 0;
    }
    local_c = FUN_004138c0(uVar2);
    if (local_c == 0) {
      return param_1;
    }
    iVar6 = (int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3;
    uVar5 = param_1 & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    if (iVar8 < 0) {
      local_14 = iVar8 + 8;
      if (-1 < local_14) {
        local_c = local_c - iVar8;
        param_2 = 0;
        goto LAB_00413c63;
      }
    }
    else {
      local_14 = 8;
      param_2 = iVar8;
LAB_00413c63:
      sVar3 = 0;
      if (0 < local_14) {
        pbVar7 = (byte *)(param_2 * 0x10 + 0x5d8281 + iVar6);
        do {
          if (0x3f < param_2) break;
          if (((param_4 & 0x10) == 0) && ((param_4 & 0x20) == 0)) {
            local_1a = (&UNK_0057d5c4)[uVar5] & pbVar7[-1];
            local_19 = (&DAT_0057d5cc)[uVar5] & *pbVar7;
          }
          bVar1 = *(byte *)(sVar3 + local_c);
          if ((param_4 & 1) != 0) {
            bVar1 = ~bVar1 & 0xfc;
          }
          bVar4 = bVar1 >> ((byte)uVar5 & 0x1f);
          bVar1 = bVar1 << (8 - (byte)uVar5 & 0x1f);
          if ((param_4 & 0x10) == 0) {
            if ((param_4 & 0x20) == 0) {
              pbVar7[-1] = bVar4 | local_1a;
              if (iVar6 + 1 < 0x10) {
                *pbVar7 = bVar1 | local_19;
              }
            }
            else {
              pbVar7[-1] = pbVar7[-1] | bVar4;
              if (iVar6 + 1 < 0x10) {
                *pbVar7 = *pbVar7 | bVar1;
              }
            }
          }
          else {
            pbVar7[-1] = pbVar7[-1] ^ bVar4;
            if (iVar6 + 1 < 0x10) {
              *pbVar7 = *pbVar7 ^ bVar1;
            }
          }
          if ((param_5 == 0) && (param_1 == 0x78)) {
            pbVar7[0xe - iVar6] = pbVar7[0xe - iVar6] & 0xfc;
          }
          sVar3 = sVar3 + 1;
          param_2 = param_2 + 1;
          pbVar7 = pbVar7 + 0x10;
          iVar8 = local_10;
        } while (sVar3 < local_14);
      }
    }
    param_1 = param_1 + 6;
  } while( true );
}

