// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004805a0
// entry: 004805a0  size: 96


int FUN_004805a0(int param_1,int param_2)

{
  int iVar1;
  
  FUN_004802a0(param_1);
  iVar1 = FUN_00527440(0,*(undefined1 *)(param_2 + 4));
  if (iVar1 == 0) {
    FUN_004802a0(param_1);
    return 9;
  }
  iVar1 = FUN_004d9c00((int)*(short *)(param_2 + 4),param_1 * 10,param_1 * 10 + 1);
  if (iVar1 != 0) {
    FUN_004802a0(param_1);
  }
  return iVar1;
}

