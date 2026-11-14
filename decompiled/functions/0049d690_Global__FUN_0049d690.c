// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049d690
// entry: 0049d690  size: 50


void FUN_0049d690(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00429b00(param_1,1,0);
  iVar2 = 0xc;
  if (-1 < iVar1) {
    FUN_00429c80(iVar1);
    iVar2 = iVar1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  return;
}

