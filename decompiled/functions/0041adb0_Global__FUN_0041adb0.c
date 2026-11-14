// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041adb0
// entry: 0041adb0  size: 360


undefined4 FUN_0041adb0(undefined4 param_1,undefined2 *param_2)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  
  iVar3 = FUN_00418e50(param_1);
  if (iVar3 < 0) {
    uVar4 = FUN_00419fc0(iVar3);
    return uVar4;
  }
  *param_2 = (short)param_1;
  FUN_00419650(0);
  puVar1 = (uint *)(param_2 + 4);
  FUN_00419220(puVar1,4);
  if ((*puVar1 & 0xfff0000) == 0x1300000) {
    FUN_00419650(4);
    FUN_00419220(param_2 + 6,4);
    FUN_00419650(8);
    FUN_00419220(param_2 + 8,2);
    FUN_00419650(10);
    FUN_00419220(param_2 + 9,2);
    FUN_00419650(0xc);
    FUN_00419220(param_2 + 10,2);
    FUN_00419650(0xe);
    FUN_00419220(param_2 + 0xb,2);
    FUN_00419650(0x10);
    puVar2 = param_2 + 0xc;
    FUN_00419220(puVar2,2);
    FUN_00419650(0x12);
    FUN_00419220(param_2 + 0xd,2);
    FUN_00419650(0x14);
    FUN_00419220(param_2 + 0xe,2);
    FUN_00419650(0x16);
    FUN_00419220(param_2 + 0xf,2);
    iVar3 = FUN_0041a810(CONCAT22(extraout_var,param_2[8]),CONCAT22(extraout_var_01,param_2[0xb]),
                         CONCAT22(extraout_var_00,*puVar2));
    if (-1 < iVar3) {
      *(uint *)(param_2 + 2) = iVar3 - (uint)*puVar2;
      FUN_00418f90();
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
    *param_2 = 0xffff;
    *puVar1 = 0xffffffff;
    *(undefined4 *)(param_2 + 6) = 0;
    param_2[8] = 0xffff;
    param_2[9] = 0xffff;
    param_2[10] = 0xffff;
    param_2[0xb] = 0xffff;
    param_2[0xc] = 0xffff;
    param_2[0xd] = 0xffff;
    param_2[0xe] = 0xffff;
    param_2[0xf] = 0xffff;
  }
  FUN_00418f90();
  return 0;
}

