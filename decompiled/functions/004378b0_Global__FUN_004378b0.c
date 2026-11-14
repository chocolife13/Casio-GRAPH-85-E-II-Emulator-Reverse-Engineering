// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004378b0
// entry: 004378b0  size: 116


int FUN_004378b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00526410();
  FUN_00526420(0xe0);
  FUN_005387f0(0);
  FUN_00437560(param_3);
  iVar2 = FUN_00437930(param_1,param_2,param_3);
  if ((iVar2 == 0) &&
     ((*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x10) ||
      (*(int *)(param_3 + 0x14) != *(int *)(param_3 + 0xc))))) {
    FUN_00436330(param_3,0x7545);
  }
  FUN_00538810();
  FUN_00526420(uVar1);
  return iVar2;
}

