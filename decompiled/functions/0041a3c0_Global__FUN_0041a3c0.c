// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041a3c0
// entry: 0041a3c0  size: 424


int FUN_0041a3c0(ushort *param_1,ushort *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 local_38;
  uint local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
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
  
  local_34 = 0xffffffff;
  local_38 = 0xffffffff;
  param_2[2] = 0xffff;
  param_2[3] = 0xffff;
  param_2[4] = 0xffff;
  param_2[5] = 0xffff;
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
  local_30 = 0;
  local_2e = 0;
  local_2c = 0;
  local_2a = 0;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  local_22 = 0;
  local_20 = 0;
  *param_2 = 0xffe;
  FUN_0042a490(param_2 + 6,&local_1c);
  if (*param_1 < 0x19) {
    *param_1 = 0x19;
  }
  if (*param_1 < DAT_005d8730) {
    do {
      iVar1 = FUN_00418e50(*param_1);
      if (iVar1 < 0) {
        return iVar1;
      }
      *param_2 = *param_1;
      FUN_00419650(0);
      FUN_00419220(&local_34,4);
      FUN_00419650(4);
      FUN_00419220(&local_38,4);
      if ((local_34 & 0xfff0000) == 0x1100000) {
        *(uint *)(param_2 + 2) = local_34;
        *(undefined4 *)(param_2 + 4) = local_38;
        FUN_00419650(8);
        FUN_00418fc0(0);
        FUN_00419220(&local_30,0x10);
        puVar2 = &local_30;
LAB_0041a54f:
        FUN_0042a490(param_2 + 6,puVar2);
        FUN_00418f90();
        return 0;
      }
      if ((local_34 & 0xfff0000) == 0x1200000) {
        *(uint *)(param_2 + 2) = local_34;
        *(undefined4 *)(param_2 + 4) = local_38;
        FUN_00419650(8);
        FUN_00418fc0(0);
        FUN_00419220(&local_1c,0x18);
        puVar2 = &local_1c;
        goto LAB_0041a54f;
      }
      FUN_00418f90();
      *param_1 = *param_1 + 1;
    } while ((*param_1 < 0xffe) && (*param_1 < DAT_005d8730));
  }
  return -1;
}

