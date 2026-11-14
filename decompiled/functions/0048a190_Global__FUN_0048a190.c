// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048a190
// entry: 0048a190  size: 80


undefined4
FUN_0048a190(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int *param_6)

{
  int iVar1;
  
  iVar1 = FUN_00491150(param_1,param_2,param_3);
  if (iVar1 != 3) {
    iVar1 = FUN_004e50a0(&param_1);
    *param_6 = iVar1;
    if ((param_4 <= iVar1) && (iVar1 <= param_5)) {
      return 0;
    }
  }
  return 3;
}

