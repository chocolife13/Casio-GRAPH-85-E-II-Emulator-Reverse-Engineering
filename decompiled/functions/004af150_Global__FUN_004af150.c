// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004af150
// entry: 004af150  size: 193


char * FUN_004af150(int param_1,char *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int local_24 [9];
  
  pcVar3 = param_2;
  local_24[8] = 1000000000;
  local_24[7] = 100000000;
  local_24[6] = 10000000;
  local_24[5] = 1000000;
  local_24[4] = 100000;
  local_24[3] = 10000;
  local_24[2] = 1000;
  local_24[1] = 100;
  local_24[0] = 10;
  pcVar6 = param_2;
  if (param_1 < 0) {
    *param_2 = '-';
    pcVar6 = param_2 + 1;
    param_1 = -param_1;
  }
  bVar2 = false;
  if (-1 < param_3 + -2) {
    piVar5 = local_24 + param_3 + -2;
    param_2 = (char *)(param_3 + -1);
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
  }
  *pcVar6 = (char)param_1 + '0';
  pcVar6[1] = '\0';
  return pcVar3;
}

