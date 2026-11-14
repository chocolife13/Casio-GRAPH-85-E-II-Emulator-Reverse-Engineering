// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567799
// entry: 00567799  size: 32


int __thiscall FUN_00567799(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00555fed(*param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = iVar1 - *param_1;
  }
  return iVar1;
}

