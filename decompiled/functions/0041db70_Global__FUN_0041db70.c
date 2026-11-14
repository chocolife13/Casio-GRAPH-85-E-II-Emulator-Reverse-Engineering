// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041db70
// entry: 0041db70  size: 806


int FUN_0041db70(int param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  uVar4 = 0;
  uVar2 = *(ushort *)(&DAT_005d8740 + param_1 * 0x28);
  local_c = 0;
  local_24 = 0;
  local_2c = 1;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  local_8 = 0;
  local_28 = 0xffffffff;
  local_20 = 0xffffffff;
  local_1c = 0xffffffff;
  local_4 = 0;
  if ((int)param_2 < 0) {
    return -2;
  }
  iVar3 = FUN_0041bf10(param_1);
  if (iVar3 == -1) {
    return -2;
  }
  if (((&DAT_005d8744)[param_1 * 10] & 0xfff0000) != 0x1200000) {
    return -0x22;
  }
  iVar3 = FUN_00418e50((uint)uVar2);
  if (-1 < iVar3) {
    FUN_00419650(0);
    FUN_00419220(&local_28,4);
    if (((local_28 & 0xfff0000) == 0x1200000) && ((local_28 & 0xffff) != 0)) {
      local_28 = local_28 & 0xfffffff;
      FUN_00418f90();
      uVar5 = uVar2 + 1;
      if (uVar5 < DAT_005d8730) {
        do {
          iVar3 = FUN_00418e50(uVar5);
          if (iVar3 < 0) {
            return iVar3;
          }
          FUN_00419650(0);
          FUN_00419220(&local_20,4);
          if ((local_20 & 0xfff0000) == 0x1300000) {
            FUN_00419650(4);
            FUN_00419220(&local_1c,4);
            if (local_28 == local_1c) {
              FUN_00419650(8);
              FUN_00419220(&local_c,2);
              FUN_00419650(10);
              FUN_00419220(&local_24,2);
              if (uVar4 == 0) {
                uVar4 = 1;
                local_2c = local_24;
              }
              else if ((short)local_24 != (ushort)local_2c) goto LAB_0041de6e;
              FUN_00419650(0xc);
              FUN_00419220(&local_18,2);
              if (((ushort)local_18 != uVar4) || ((ushort)local_2c < uVar4)) {
LAB_0041de6e:
                FUN_00418f90();
                return -0x14;
              }
              FUN_00419650(0xe);
              FUN_00419220(&local_10,2);
              FUN_00419650(0x10);
              FUN_00419220(&local_14,2);
              FUN_00419650(0x12);
              FUN_00419220(&local_8,2);
              iVar3 = FUN_0041a810(local_c,local_10,local_14);
              if (iVar3 < 0) goto LAB_0041de87;
              uVar1 = (local_8 & 0xffff) + 1 + local_4;
              if (param_2 < uVar1) {
                (&DAT_005d8ba0)[param_1 * 2] = (iVar3 - local_4) + param_2;
                iVar3 = ((local_8 & 0xffff) - param_2) + 1 + local_4;
                FUN_00418f90();
                return iVar3;
              }
              if (uVar1 == param_2) {
                if ((ushort)local_2c == uVar4) {
                  (&DAT_005d8ba0)[param_1 * 2] = (iVar3 - local_4) + param_2;
                  FUN_00418f90();
                  return 0;
                }
              }
              else if ((ushort)local_2c == uVar4) {
                FUN_00418f90();
                return -2;
              }
              uVar4 = uVar4 + 1;
              local_4 = uVar1;
            }
          }
          FUN_00418f90();
          uVar5 = uVar5 + 1;
          if (0xffd < uVar5) goto LAB_0041de87;
        } while (uVar5 < DAT_005d8730);
      }
      return -0x14;
    }
    iVar3 = -0x10;
    local_28 = local_28 & 0xfffffff;
LAB_0041de87:
    FUN_00418f90();
  }
  return iVar3;
}

