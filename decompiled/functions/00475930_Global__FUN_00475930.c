// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00475930
// entry: 00475930  size: 94


int FUN_00475930(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00514940(param_2,1);
  if ((iVar1 == 0) && (iVar1 = FUN_00514820(param_2), iVar1 == 0)) {
    FUN_0050acb0(param_2);
    iVar1 = FUN_00482ca0(param_1,param_2);
    if ((iVar1 == 0) &&
       ((*(short *)(param_1 + 0x38) == 1 && (iVar1 = FUN_00515a70(param_2), iVar1 == 0)))) {
      FUN_0050acb0(param_2);
    }
  }
  return iVar1;
}

