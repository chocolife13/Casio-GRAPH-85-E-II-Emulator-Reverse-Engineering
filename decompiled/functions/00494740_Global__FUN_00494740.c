// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00494740
// entry: 00494740  size: 97


int FUN_00494740(int param_1)

{
  int iVar1;
  
  FUN_00526070(0x22,3);
  FUN_00503490(param_1);
  *(undefined1 *)(param_1 + 0x8e2) = 0;
  *(byte *)(param_1 + 0x8e0) = *(byte *)(param_1 + 0x8e0) & 0xf;
  *(byte *)(param_1 + 0x8e1) = *(byte *)(param_1 + 0x8e1) & 0xe5;
  iVar1 = FUN_00514940(param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_00514820(param_1);
    if (iVar1 == 0) {
      FUN_0050acb0(param_1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

