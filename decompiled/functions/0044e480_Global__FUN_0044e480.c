// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044e480
// entry: 0044e480  size: 85


int FUN_0044e480(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  piVar1 = param_2;
  cVar2 = FUN_004ad750(1,param_1,param_2,&param_2);
  if (cVar2 == '\0') {
    param_2 = (int *)((int)param_2 + 10);
    iVar3 = FUN_004b7550(param_2);
    *piVar1 = iVar3 + 0xb;
    return (int)param_2;
  }
  param_2 = (int *)0x0;
  FUN_0052b240(4);
  return (int)param_2;
}

