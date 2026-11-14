// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041a750
// entry: 0041a750  size: 190


int FUN_0041a750(ushort param_1,ushort *param_2)

{
  int iVar1;
  
  if (0x18 < param_1) {
    return -2;
  }
  iVar1 = FUN_00418e50(param_1);
  if (-1 < iVar1) {
    *param_2 = param_1;
    FUN_00419650(0);
    FUN_00419220(param_2 + 2,4);
    if ((*(uint *)(param_2 + 2) & 0xfff0000) == 0x2000000) {
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
    }
    FUN_00418f90();
    iVar1 = 0;
  }
  return iVar1;
}

