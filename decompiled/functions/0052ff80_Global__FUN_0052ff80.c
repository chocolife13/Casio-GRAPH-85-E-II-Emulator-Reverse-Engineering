// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052ff80
// entry: 0052ff80  size: 63


int FUN_0052ff80(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  iVar1 = FUN_0052ffc0(param_1,param_3);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ad630(iVar1 << 10);
    if (iVar1 == 0) {
      *param_3 = 4;
      return 0;
    }
  }
  return iVar1;
}

