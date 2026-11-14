// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7260
// entry: 004b7260  size: 198


char * FUN_004b7260(int param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int local_c [3];
  
  pcVar3 = param_2;
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  local_c[2] = 1000000000;
  pcVar6 = param_2;
  if (param_1 < 0) {
    *param_2 = '-';
    pcVar6 = param_2 + 1;
    param_1 = -param_1;
  }
  bVar2 = false;
  piVar5 = local_c + 2;
  param_2 = (char *)0x9;
  do {
    iVar1 = *piVar5;
    iVar4 = param_1 / iVar1;
    if (iVar4 == 0) {
      if (bVar2) {
        *pcVar6 = '0';
        pcVar6 = pcVar6 + 1;
      }
    }
    else {
      bVar2 = true;
      *pcVar6 = (char)iVar4 + '0';
      pcVar6 = pcVar6 + 1;
      param_1 = param_1 % iVar1;
    }
    piVar5 = piVar5 + -1;
    param_2 = (char *)((int)param_2 + -1);
  } while (param_2 != (char *)0x0);
  *pcVar6 = (char)param_1 + '0';
  pcVar6[1] = '\0';
  return pcVar3;
}

