// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00413e70
// entry: 00413e70  size: 844


bool FUN_00413e70(uint *param_1,int *param_2,byte *param_3,uint param_4,int param_5)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  byte local_27;
  byte local_25;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  local_18 = (int)param_4 >> 4;
  if (local_18 != 0) {
    if ((param_4 & 0xfffffff0) == 0x10) {
      local_18 = 1;
    }
    else {
      local_18 = ((param_4 & 0xfffffff0) != 0x20) - 1 & 2;
    }
  }
  local_8 = 0;
  uVar4 = 0;
  local_14 = 1;
  local_25 = 0;
  local_27 = 0;
  while( true ) {
    pbVar2 = param_3;
    if (local_14 != 0) {
      uVar4 = (ushort)*param_3;
      if (uVar4 == 0) {
        return true;
      }
      if ((((uVar4 == 0x7f) || (uVar4 == 0xf7)) || (uVar4 == 0xe5)) ||
         (((uVar4 == 0xe6 || (uVar4 == 0xe7)) || (pbVar2 = param_3 + 1, uVar4 == 0xf9)))) {
        uVar4 = CONCAT11(*param_3,param_3[1]);
        pbVar2 = param_3 + 2;
      }
    }
    param_3 = pbVar2;
    if (uVar4 == 0) {
      if (param_5 == -1) {
        return true;
      }
      local_14 = 0;
      uVar4 = 0x20;
    }
    local_10 = FUN_00413950(uVar4,&local_1c);
    if (local_10 == 0) break;
    if ((short)local_1c == 0) {
      local_1c = 4;
    }
    local_4 = (int)(short)local_1c;
    if (param_5 == 0) {
      return local_8 != 1;
    }
    local_20 = local_4;
    if (param_5 == -1) {
      if (0x80 < (int)(*param_1 + local_4)) {
        return false;
      }
    }
    else {
      if (param_5 < local_4) {
        local_8 = 1;
        local_20 = param_5;
      }
      param_5 = param_5 - local_20;
    }
    uVar9 = -local_18;
    iVar8 = (int)(*param_1 + ((int)*param_1 >> 0x1f & 7U)) >> 3;
    if ((int)uVar9 < 6) {
      local_c = param_4 & 2;
      do {
        if (local_c == 0) {
          iVar6 = (*param_1 & 7) + local_20 * 8;
          iVar1 = (*param_2 + uVar9) * 0x10 + iVar8;
          local_25 = (&DAT_0057d5cc)[iVar6] & *(byte *)((int)&DAT_005d8280 + iVar1);
          if (iVar8 + 1 < 0x10) {
            local_27 = (&DAT_0057d60c)[iVar6] & *(byte *)((int)&DAT_005d8280 + iVar1 + 1);
          }
          else {
            local_27 = 0;
          }
        }
        if ((int)uVar9 < 0) {
          if ((param_4 & 1) == 0) {
            bVar3 = 0;
            bVar7 = 0;
          }
          else {
            iVar6 = (*param_1 & 7) + local_20 * 8;
            bVar3 = ~(&DAT_0057d5cc)[iVar6];
            bVar7 = ~(&DAT_0057d60c)[iVar6];
          }
        }
        else {
          if ((short)local_1c < 5) {
            bVar7 = *(byte *)((int)uVar9 / 2 + local_10);
            uVar5 = uVar9 & 0x80000001;
            bVar10 = uVar5 == 0;
            if ((int)uVar5 < 0) {
              bVar10 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
            }
            if (bVar10) {
              bVar7 = bVar7 & 0xf0;
            }
            else {
              bVar7 = bVar7 << 4;
            }
          }
          else if (uVar9 == 5) {
            bVar7 = 0;
          }
          else {
            bVar7 = *(byte *)(uVar9 + local_10);
          }
          uVar5 = *param_1 & 7;
          bVar3 = bVar7 >> (sbyte)uVar5 & ~(&DAT_0057d5cc)[local_20 * 8 + uVar5];
          bVar7 = bVar7 << (-(char)*param_1 & 7U) & ~(&DAT_0057d60c)[local_20 * 8 + uVar5];
          if ((param_4 & 1) != 0) {
            bVar3 = ~bVar3 & ~(&DAT_0057d5cc)[local_20 * 8 + uVar5];
            bVar7 = ~bVar7 & ~(&DAT_0057d60c)[local_20 * 8 + uVar5];
          }
        }
        if (local_c == 0) {
          *(byte *)((int)&DAT_005d8280 + iVar8 + (*param_2 + uVar9) * 0x10) = bVar3 | local_25;
          if (iVar8 + 1 < 0x10) {
            *(byte *)((*param_2 + uVar9) * 0x10 + 0x5d8281 + iVar8) = bVar7 | local_27;
          }
        }
        else {
          pbVar2 = (byte *)((int)&DAT_005d8280 + iVar8 + (*param_2 + uVar9) * 0x10);
          *pbVar2 = *pbVar2 | bVar3;
          if (iVar8 + 1 < 0x10) {
            iVar6 = (*param_2 + uVar9) * 0x10;
            *(byte *)(iVar6 + 0x5d8281 + iVar8) = *(byte *)(iVar6 + 0x5d8281 + iVar8) | bVar7;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 6);
    }
    *param_1 = *param_1 + local_4;
  }
  return true;
}

