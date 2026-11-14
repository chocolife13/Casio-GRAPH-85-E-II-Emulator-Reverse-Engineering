// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041a570
// entry: 0041a570  size: 465


int FUN_0041a570(ushort *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  uint local_4;
  
  puVar1 = param_2 + 8;
  puVar2 = param_2 + 0xb;
  puVar3 = param_2 + 0xc;
  *param_2 = 0xffe;
  param_2[2] = 0xffff;
  param_2[3] = 0xffff;
  param_2[4] = 0xffff;
  param_2[5] = 0xffff;
  param_2[6] = 0xffff;
  param_2[7] = 0xffff;
  *puVar1 = 0xffff;
  param_2[9] = 0xffff;
  param_2[10] = 0xffff;
  *puVar2 = 0xffff;
  *puVar3 = 0xffff;
  param_2[0xd] = 0xffff;
  param_2[0xe] = 0xffff;
  param_2[0xf] = 0xffff;
  local_4 = 0xffffffff;
  if (*param_1 < 0x19) {
    *param_1 = 0x19;
  }
  if (*param_1 < DAT_005d8730) {
    do {
      iVar4 = FUN_00418e50(*param_1);
      if (iVar4 < 0) {
        return iVar4;
      }
      *param_2 = *param_1;
      FUN_00419650(0);
      FUN_00419220(&local_4,4);
      if ((local_4 & 0xfff0000) == 0x1300000) {
        *(uint *)(param_2 + 4) = local_4;
        FUN_00419650(4);
        FUN_00419220(param_2 + 6,4);
        FUN_00419650(8);
        FUN_00419220(puVar1,2);
        FUN_00419650(10);
        FUN_00419220(param_2 + 9,2);
        FUN_00419650(0xc);
        FUN_00419220(param_2 + 10,2);
        FUN_00419650(0xe);
        FUN_00419220(puVar2,2);
        FUN_00419650(0x10);
        FUN_00419220(puVar3,2);
        FUN_00419650(0x12);
        FUN_00419220(param_2 + 0xd,2);
        FUN_00419650(0x14);
        FUN_00419220(param_2 + 0xe,2);
        FUN_00419650(0x16);
        FUN_00419220(param_2 + 0xf,2);
        iVar4 = FUN_0041a810(CONCAT22(extraout_var_00,*puVar1),CONCAT22(extraout_var,*puVar2),
                             CONCAT22(extraout_var_01,*puVar3));
        if (-1 < iVar4) {
          *(uint *)(param_2 + 2) = iVar4 - (uint)*puVar3;
          FUN_00418f90();
          iVar4 = FUN_0041c4f0(iVar4);
          return iVar4;
        }
      }
      FUN_00418f90();
      *param_1 = *param_1 + 1;
    } while ((*param_1 < 0xffe) && (*param_1 < DAT_005d8730));
  }
  return -1;
}

