// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041af20
// entry: 0041af20  size: 213


undefined4 FUN_0041af20(undefined4 param_1,undefined2 *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00418e50(param_1);
  if (iVar2 < 0) {
    uVar3 = FUN_00419fc0(iVar2);
    return uVar3;
  }
  *param_2 = (short)param_1;
  FUN_00419650(0);
  puVar1 = (uint *)(param_2 + 2);
  FUN_00419220(puVar1,4);
  if ((*puVar1 & 0xffff0000) == 0x2000000) {
    FUN_00419650(4);
    FUN_00419220(param_2 + 4,4);
    FUN_00419650(8);
    FUN_00419220(param_2 + 6,4);
    FUN_00419650(0xc);
    FUN_00419220(param_2 + 8,4);
    FUN_00419650(0x10);
    FUN_00419220(param_2 + 10,4);
    FUN_00419650(0x14);
    FUN_00419220(param_2 + 0xc,2);
    FUN_00418f90();
    return 0;
  }
  *param_2 = 0xffff;
  *puVar1 = 0xffffffff;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  *(undefined4 *)(param_2 + 10) = 0xffffffff;
  param_2[0xc] = 0xffff;
  FUN_00418f90();
  return 0;
}

