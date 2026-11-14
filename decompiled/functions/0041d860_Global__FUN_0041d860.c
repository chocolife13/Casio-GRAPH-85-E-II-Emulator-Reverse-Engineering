// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041d860
// entry: 0041d860  size: 774


uint FUN_0041d860(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  uVar4 = 0;
  uVar1 = *(ushort *)(&DAT_005d8740 + param_1 * 0x28);
  local_8 = 0;
  local_24 = 0;
  local_28 = 1;
  local_14 = 0;
  local_c = 0;
  local_10 = 0;
  local_4 = 0;
  local_2c = 0xffffffff;
  local_1c = 0xffffffff;
  local_18 = 0xffffffff;
  local_20 = 0;
  iVar2 = FUN_0041bf10(param_1);
  if (iVar2 == -1) {
    return 0xfffffffe;
  }
  if (((&DAT_005d8744)[param_1 * 10] & 0xfff0000) != 0x1200000) {
    return 0xffffffde;
  }
  uVar3 = FUN_00418e50((uint)uVar1);
  if (-1 < (int)uVar3) {
    FUN_00419650(0);
    FUN_00419220(&local_2c,4);
    if (((local_2c & 0xfff0000) == 0x1200000) && ((local_2c & 0xffff) != 0)) {
      local_2c = local_2c & 0xfffffff;
      FUN_00418f90();
      uVar5 = uVar1 + 1;
      if (uVar5 < DAT_005d8730) {
        do {
          uVar3 = FUN_00418e50(uVar5);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          FUN_00419650(0);
          FUN_00419220(&local_1c,4);
          if ((local_1c & 0xfff0000) == 0x1300000) {
            FUN_00419650(4);
            FUN_00419220(&local_18,4);
            if (local_2c == local_18) {
              FUN_00419650(8);
              FUN_00419220(&local_8,2);
              FUN_00419650(10);
              FUN_00419220(&local_24,2);
              if (uVar4 == 0) {
                uVar4 = 1;
                local_28 = local_24;
              }
              else if ((short)local_24 != (ushort)local_28) goto LAB_0041db3e;
              FUN_00419650(0xc);
              FUN_00419220(&local_14,2);
              if (((ushort)local_14 != uVar4) || ((ushort)local_28 < uVar4)) {
LAB_0041db3e:
                FUN_00418f90();
                return 0xffffffec;
              }
              FUN_00419650(0xe);
              FUN_00419220(&local_c,2);
              FUN_00419650(0x10);
              FUN_00419220(&local_10,2);
              FUN_00419650(0x12);
              FUN_00419220(&local_4,2);
              uVar3 = FUN_0041a810(local_8,local_c,local_10);
              if ((int)uVar3 < 0) goto LAB_0041db57;
              if ((uVar3 <= (uint)(&DAT_005d8ba0)[param_1 * 2]) &&
                 ((uint)(&DAT_005d8ba0)[param_1 * 2] < (local_4 & 0xffff) + 1 + uVar3)) {
                uVar5 = local_4 & 0xffff;
                *param_2 = ((&DAT_005d8ba0)[param_1 * 2] - uVar3) + local_20;
                iVar2 = (&DAT_005d8ba0)[param_1 * 2];
                FUN_00418f90();
                return uVar3 + 1 + (uVar5 - iVar2);
              }
              if ((ushort)local_28 == uVar4) {
                FUN_00418f90();
                return 0xfffffffe;
              }
              uVar4 = uVar4 + 1;
              local_20 = local_20 + 1 + (local_4 & 0xffff);
            }
          }
          FUN_00418f90();
          uVar5 = uVar5 + 1;
          if (0xffd < uVar5) goto LAB_0041db57;
        } while (uVar5 < DAT_005d8730);
      }
      return 0xffffffec;
    }
    uVar3 = 0xfffffff0;
    local_2c = local_2c & 0xfffffff;
LAB_0041db57:
    FUN_00418f90();
  }
  return uVar3;
}

