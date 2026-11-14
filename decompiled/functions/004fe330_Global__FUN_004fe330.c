// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fe330
// entry: 004fe330  size: 53


void FUN_004fe330(char *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  if (*param_1 != '\0') {
    pcVar2 = (char *)*param_2;
    cVar1 = *pcVar2;
    *param_1 = cVar1;
    if (cVar1 != '\0') {
      iVar3 = FUN_004b7370(CONCAT31((int3)((uint)pcVar2 >> 8),cVar1));
      if (iVar3 != 0) {
        iVar3 = *param_2;
        *param_2 = iVar3 + 1;
        param_1[1] = *(char *)(iVar3 + 1);
      }
      *param_2 = *param_2 + 1;
    }
  }
  return;
}

