// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004910d0
// entry: 004910d0  size: 125


undefined4
FUN_004910d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int *param_6)

{
  int *piVar1;
  int iVar2;
  char local_c;
  char local_b;
  
  iVar2 = FUN_00491150(param_1,param_2,param_3);
  if (iVar2 != 3) {
    iVar2 = FUN_004e50a0(&param_1);
    piVar1 = param_6;
    *param_6 = iVar2;
    FUN_004e76c0(&param_1,&local_c);
    if ((((param_4 <= *piVar1) && (*piVar1 <= param_5)) && (local_c == '\0')) && (local_b == '\0'))
    {
      return 0;
    }
  }
  return 3;
}

