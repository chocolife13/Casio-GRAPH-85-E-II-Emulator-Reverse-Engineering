// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00411870
// entry: 00411870  size: 71


int FUN_00411870(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar2 = DAT_005d67e8;
  iVar1 = FUN_00411d60(&local_4);
  *param_3 = iVar1;
  *param_1 = 0x10000;
  iVar2 = (local_4 - *(int *)(iVar2 + 8)) + 0x10000;
  *param_2 = iVar2;
  return (*param_1 - iVar2) - *param_3;
}

