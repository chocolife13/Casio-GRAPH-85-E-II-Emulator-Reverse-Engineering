// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517ff0
// entry: 00517ff0  size: 64


int FUN_00517ff0(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = FUN_00517f00(param_1,local_c);
  if (iVar1 != 0) {
    return -1;
  }
  iVar1 = FUN_00517280(0xffffffff,local_c);
  *param_2 = iVar1;
  return (iVar1 != 0) - 1;
}

