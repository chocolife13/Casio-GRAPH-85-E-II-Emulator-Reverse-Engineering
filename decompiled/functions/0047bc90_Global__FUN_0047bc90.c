// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047bc90
// entry: 0047bc90  size: 70


int FUN_0047bc90(int param_1)

{
  int iVar1;
  
  FUN_00503490(param_1);
  iVar1 = FUN_00514940(param_1,1);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0xcf;
    iVar1 = FUN_00514820(param_1);
    if (iVar1 == 0) {
      FUN_0050acb0(param_1);
    }
  }
  return iVar1;
}

