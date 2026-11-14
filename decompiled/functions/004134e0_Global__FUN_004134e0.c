// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004134e0
// entry: 004134e0  size: 455


void FUN_004134e0(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint local_8;
  int local_4;
  
  FUN_00414db0();
  uVar5 = *param_1;
  uVar7 = param_1[2];
  uVar4 = uVar5;
  if ((int)uVar7 < (int)uVar5) {
    uVar4 = uVar7;
    uVar7 = uVar5;
  }
  uVar5 = param_1[1];
  local_8 = param_1[3];
  param_1 = (uint *)uVar5;
  if ((int)local_8 < (int)uVar5) {
    param_1 = (uint *)local_8;
    local_8 = uVar5;
  }
  if ((((-1 < (int)uVar4) && ((int)uVar7 < 0x80)) && (-1 < (int)param_1)) && ((int)local_8 < 0x40))
  {
    uVar5 = (uVar7 - uVar4) + 1;
    iVar6 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
    iVar8 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
    uVar5 = uVar5 & 0x80000007;
    bVar9 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar9 = (uVar5 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar9) {
      iVar8 = iVar8 + 1;
    }
    uVar4 = uVar4 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    if (uVar4 == 0) {
      if ((int)param_1 <= (int)local_8) {
        iVar6 = (int)&DAT_005d8280 + iVar6 + (int)param_1 * 0x10;
        do {
          if (param_3 == 1) {
            iVar3 = 0;
            if (0 < iVar8) {
              do {
                bVar1 = FUN_0040ad10(iVar3,param_1);
                *param_2 = bVar1;
                param_2 = param_2 + 1;
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar8);
            }
          }
          else if ((param_3 != 2) && (iVar3 = 0, 0 < iVar8)) {
            do {
              *param_2 = *(byte *)(iVar3 + iVar6);
              param_2 = param_2 + 1;
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar8);
          }
          param_1 = (uint *)((int)param_1 + 1);
          iVar6 = iVar6 + 0x10;
        } while ((int)param_1 <= (int)local_8);
        FUN_00414db0();
        return;
      }
    }
    else if ((int)param_1 <= (int)local_8) {
      local_4 = (int)&DAT_005d8280 + iVar6 + (int)param_1 * 0x10;
      do {
        bVar1 = (byte)uVar4;
        if (param_3 == 1) {
          iVar6 = 0;
          if (0 < iVar8) {
            do {
              bVar2 = FUN_0040ad10(iVar6,param_1);
              *param_2 = bVar2 >> (8 - bVar1 & 0x1f) | bVar2 << (bVar1 & 0x1f);
              param_2 = param_2 + 1;
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar8);
          }
        }
        else if ((param_3 != 2) && (iVar6 = 0, 0 < iVar8)) {
          do {
            *param_2 = *(byte *)(local_4 + 1 + iVar6) >> (8 - bVar1 & 0x1f) |
                       *(char *)(local_4 + iVar6) << (bVar1 & 0x1f);
            param_2 = param_2 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar8);
        }
        param_1 = (uint *)((int)param_1 + 1);
        local_4 = local_4 + 0x10;
      } while ((int)param_1 <= (int)local_8);
    }
  }
  FUN_00414db0();
  return;
}

