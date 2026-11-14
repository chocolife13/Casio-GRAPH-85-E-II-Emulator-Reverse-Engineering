// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b71f0
// entry: 004b71f0  size: 107


char * FUN_004b71f0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar2 = param_1;
    while( true ) {
      if (cVar1 == '\0') {
        if (param_3 != 0) {
          *param_1 = '\0';
        }
        return pcVar2;
      }
      if (param_3 == 0) break;
      if ((param_3 == 1) &&
         ((((cVar1 == -0x1b || (cVar1 == -0x1a)) || (cVar1 == -0x19)) ||
          (((cVar1 == '\x7f' || (cVar1 == -9)) || (cVar1 == -7)))))) {
        *param_1 = '\0';
      }
      else {
        *param_1 = cVar1;
        param_2 = param_2 + 1;
      }
      param_1 = param_1 + 1;
      cVar1 = *param_2;
      param_3 = param_3 + -1;
    }
    return pcVar2;
  }
  *param_1 = '\0';
  return (char *)0x0;
}

