// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041a900
// entry: 0041a900  size: 624


int FUN_0041a900(ushort param_1,undefined4 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = 0xffffffff;
  local_18 = 0xffffffff;
  local_14 = 0xffffffff;
  uVar6 = 0;
  *param_3 = 0;
  local_1c = 0;
  uVar5 = 1;
  local_10 = 0;
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  *param_4 = 0;
  if (param_1 < 0x19) {
    return -2;
  }
  iVar2 = FUN_00418e50(param_1);
  if (-1 < iVar2) {
    FUN_00419650(0);
    FUN_00419220(&local_20,4);
    if (((local_20 & 0xfff0000) == 0x1200000) && ((local_20 & 0xffff) != 0)) {
      local_20 = local_20 & 0xfffffff;
      FUN_00418f90();
      param_1 = param_1 + 1;
      if (param_1 < DAT_005d8730) {
        do {
          iVar2 = FUN_00418e50(param_1);
          if (iVar2 < 0) {
            return iVar2;
          }
          FUN_00419650(0);
          FUN_00419220(&local_18,4);
          if ((local_18 & 0xfff0000) == 0x1300000) {
            FUN_00419650(4);
            FUN_00419220(&local_14,4);
            if (local_20 == local_14) {
              FUN_00419650(10);
              FUN_00419220(&local_1c,2);
              uVar1 = local_1c;
              if (uVar6 == 0) {
                uVar6 = 1;
                FUN_00419650(0xe);
                FUN_00419220(&local_4,2);
                FUN_00419650(0x10);
                FUN_00419220(&local_8,2);
                uVar5 = uVar1;
              }
              uVar4 = (ushort)uVar5;
              if ((ushort)local_1c != uVar4) {
LAB_0041ab3e:
                FUN_00418f90();
                return -0x14;
              }
              FUN_00419650(0xc);
              FUN_00419220(&local_10,2);
              if (((ushort)local_10 != uVar6) || (uVar4 < uVar6)) goto LAB_0041ab3e;
              FUN_00419650(0x12);
              FUN_00419220(&local_c,2);
              iVar3 = *param_4 + (local_c & 0xffff) + 1;
              *param_4 = iVar3;
              if (uVar4 == uVar6) {
                *param_3 = ((uVar5 & 0xffff) + 1) * 0x20 + iVar3;
                FUN_00418f90();
                iVar2 = FUN_0041a810(param_2,local_4,local_8);
                return iVar2;
              }
              uVar6 = uVar6 + 1;
            }
          }
          FUN_00418f90();
          param_1 = param_1 + 1;
          if (0xffd < param_1) goto LAB_0041ab5f;
        } while (param_1 < DAT_005d8730);
      }
      return -0x14;
    }
    param_4 = (int *)0xfffffff0;
    iVar2 = (int)param_4;
    local_20 = local_20 & 0xfffffff;
LAB_0041ab5f:
    param_4 = (int *)iVar2;
    FUN_00418f90();
    iVar2 = (int)param_4;
  }
  return iVar2;
}

