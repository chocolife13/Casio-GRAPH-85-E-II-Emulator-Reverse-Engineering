// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041ace0
// entry: 0041ace0  size: 198


undefined4 FUN_0041ace0(undefined4 param_1,undefined2 *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = FUN_00418e50(param_1);
  if (iVar2 < 0) {
    uVar3 = FUN_00419fc0(iVar2);
    return uVar3;
  }
  *param_2 = (short)param_1;
  FUN_00419650(0);
  puVar1 = (uint *)(param_2 + 2);
  FUN_00419220(puVar1,4);
  if ((*puVar1 & 0xfff0000) == 0x1100000) {
    FUN_00419650(4);
    FUN_00419220(param_2 + 4,4);
    FUN_00419650(8);
    uVar3 = 0x10;
  }
  else {
    if ((*puVar1 & 0xfff0000) != 0x1200000) {
      *puVar1 = 0xffffffff;
      *param_2 = 0xffff;
      *(undefined4 *)(param_2 + 4) = 0;
      puVar4 = (undefined4 *)(param_2 + 6);
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      FUN_00418f90();
      return 0;
    }
    FUN_00419650(4);
    FUN_00419220(param_2 + 4,4);
    FUN_00419650(8);
    uVar3 = 0x18;
  }
  FUN_00419220(param_2 + 6,uVar3);
  FUN_00418f90();
  return 0;
}

