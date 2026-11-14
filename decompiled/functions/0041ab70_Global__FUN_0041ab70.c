// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041ab70
// entry: 0041ab70  size: 362


int FUN_0041ab70(uint param_1,ushort *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_24;
  int local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_24 = 0xffffffff;
  local_20 = -1;
  *param_2 = 0xffe;
  param_2[1] = 1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  local_1c = 0;
  local_1a = 0;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_e = 0;
  local_c = 0;
  local_a = 0;
  local_8 = 0;
  local_6 = 0;
  local_4 = 0;
  *(undefined4 *)(param_2 + 8) = DAT_0057ddf4;
  if ((ushort)param_1 < 0x19) {
    return -2;
  }
  iVar1 = FUN_00418e50(param_1 & 0xffff);
  if (-1 < iVar1) {
    *param_2 = (ushort)param_1;
    FUN_00419650(0);
    FUN_00419220(&local_24,4);
    FUN_00419650(4);
    FUN_00419220(&local_20,4);
    if ((local_24 & 0xfff0000) == 0x1100000) {
      *(uint *)(param_2 + 6) = local_24 >> 0x1f;
      param_2[1] = 0;
      iVar1 = 0;
    }
    else if ((local_24 & 0xfff0000) == 0x1200000) {
      *(uint *)(param_2 + 6) = local_24 >> 0x1f;
      FUN_00419650(8);
      FUN_00419220(&local_1c,0x18);
      uVar2 = FUN_0041a0e0(&local_1c,0,local_20 == -1);
      param_2[1] = (ushort)uVar2;
      iVar1 = FUN_0041a900(param_1,uVar2,param_2 + 2,param_2 + 4);
      if (-1 < iVar1) {
        *(int *)(param_2 + 8) = iVar1;
        FUN_00418f90();
        return 0;
      }
    }
    FUN_00418f90();
  }
  return iVar1;
}

