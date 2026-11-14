// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054ed20
// entry: 0054ed20  size: 50


void FUN_0054ed20(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  
  if (param_2 != (char *)0x0) {
    if (param_3 != 0) {
      param_2 = param_2 + param_3;
    }
    cVar1 = *param_2;
    if (cVar1 != '\0') {
      do {
        *param_1 = cVar1;
        cVar1 = param_2[1];
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      } while (cVar1 != '\0');
      *param_1 = '\0';
      return;
    }
  }
  *param_1 = '\0';
  return;
}

