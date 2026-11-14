// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00418b90
// entry: 00418b90  size: 112


int FUN_00418b90(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_00415c10(param_2);
  iVar1 = *param_2;
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005237c0(5);
  FUN_00415b20(0,iVar1);
  do {
    param_1 = (*(code *)(&PTR_FUN_005bd628)[param_1])(param_2);
    FUN_00415b20(iVar1 - *param_2,iVar1);
  } while (0 < param_1);
  FUN_00415b20(iVar1,iVar1);
  FUN_00525bc0();
  FUN_0041c290();
  FUN_00414db0();
  return param_1;
}

