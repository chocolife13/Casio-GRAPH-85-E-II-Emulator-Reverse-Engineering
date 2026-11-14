// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041edf0
// entry: 0041edf0  size: 679


int FUN_0041edf0(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_18 = 0;
  local_10 = 0xffffffff;
  local_c = -1;
  local_8 = -1;
  local_14 = 0;
  iVar1 = FUN_0041b8e0(&param_1,&local_18,&local_c);
  if (iVar1 < 0) {
    iVar1 = FUN_00419fc0(iVar1);
    return iVar1;
  }
  if (iVar1 == 0) {
    iVar1 = FUN_00419fc0(0xffffffff);
    return iVar1;
  }
  iVar1 = FUN_0041bb00(local_18);
  if (iVar1 < 0) {
    iVar1 = FUN_00419fc0(iVar1);
    return iVar1;
  }
  if (iVar1 == 0) {
    iVar1 = FUN_00419fc0(0xfffffff8);
    return iVar1;
  }
  local_14 = local_18;
  param_1 = param_2;
  iVar1 = FUN_0041b8e0(&param_1,&local_18,&local_8);
  if (iVar1 < 0) {
    iVar1 = FUN_00419fc0(iVar1);
    return iVar1;
  }
  if (iVar1 == 1) {
    iVar1 = FUN_00419fc0(0xfffffff3);
    return iVar1;
  }
  if (local_c != local_8) {
    iVar1 = FUN_00419fc0(0xfffffffd);
    return iVar1;
  }
  iVar1 = FUN_00418e50(local_14);
  if (-1 < iVar1) {
    FUN_00419650(0);
    FUN_00419220(&local_10,4);
    FUN_00418f90();
    if ((local_10 & 0xfff0000) == 0x1100000) {
      param_2 = CONCAT31(param_2._1_3_,0x10);
    }
    else {
      if ((local_10 & 0xfff0000) != 0x1200000) {
        iVar1 = FUN_00419fc0(0xffffffde);
        return iVar1;
      }
      param_2 = CONCAT31(param_2._1_3_,0x18);
    }
    local_18 = (uint)DAT_005d8730;
    if ((local_18 % 0x7ff == 0) && (local_18 != 0)) {
      iVar1 = FUN_00418cd0((local_18 - 1) / 0x7ff + 1);
      if (iVar1 < 0) {
        return iVar1;
      }
      FUN_00419650(4);
      FUN_00419220(&local_4,4);
      FUN_00418f90();
      if ((local_4 == -1) && (iVar1 = FUN_0041cb40(), iVar1 < 0)) {
        return iVar1;
      }
    }
    iVar1 = FUN_00418e50(local_14);
    if (iVar1 < 0) {
      iVar1 = FUN_00419fc0(iVar1);
      return iVar1;
    }
    FUN_00419700(0);
    local_14 = local_10 & 0xfff0000;
    FUN_004193e0(&local_14,4);
    FUN_00419120();
    FUN_00418f90();
    iVar1 = FUN_00418e50(local_18);
    if (-1 < iVar1) {
      FUN_00419700(0);
      FUN_004193e0(&local_10,4);
      FUN_00419700(4);
      FUN_004193e0(&local_c,4);
      FUN_00419700(8);
      FUN_00418fc0(0);
      FUN_004193e0(param_1,param_2 & 0xff);
      FUN_00419120();
      FUN_00418f90();
      DAT_005d8730 = DAT_005d8730 + 1;
      return 0;
    }
    iVar1 = FUN_00419fc0(iVar1);
    return iVar1;
  }
  iVar1 = FUN_00419fc0(iVar1);
  return iVar1;
}

